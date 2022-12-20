//---------------------------------------------------------------------------

#include "extopt.h"
#include "postopt.h"

#include <QShowEvent>
//---------------------------------------------------------------------------
ExtOptDialog::ExtOptDialog(QWidget *parent)
    : QDialog(parent)
{
    setupUi(this);

    connect(BtnCancel,SIGNAL(clicked(bool)),this,SLOT(reject()));
    connect(BtnOk,SIGNAL(clicked(bool)),this,SLOT(BtnOkClick()));
    connect(ExtEna0,SIGNAL(clicked(bool)),this,SLOT(ExtEna0Click()));
    connect(ExtEna1,SIGNAL(clicked(bool)),this,SLOT(ExtEna1Click()));
    connect(ExtEna2,SIGNAL(clicked(bool)),this,SLOT(ExtEna2Click()));
    connect(ExtEna3,SIGNAL(clicked(bool)),this,SLOT(ExtEna3Click()));
}
//---------------------------------------------------------------------------
void ExtOptDialog::showEvent(QShowEvent* event)
{
    if (event->spontaneous()) return;

	GetExtErrOpt();

	UpdateEnable();
}
//---------------------------------------------------------------------------
void ExtOptDialog::BtnOkClick()
{
	SetExtErrOpt();
}
//---------------------------------------------------------------------------
void ExtOptDialog::ExtEna0Click()
{
	UpdateEnable();
}
//---------------------------------------------------------------------------
void ExtOptDialog::ExtEna1Click()
{
	UpdateEnable();
}
//---------------------------------------------------------------------------
void ExtOptDialog::ExtEna3Click()
{
	UpdateEnable();
}
//---------------------------------------------------------------------------
void ExtOptDialog::ExtEna2Click()
{
	UpdateEnable();
}
//---------------------------------------------------------------------------
void ExtOptDialog::GetExtErrOpt(void)
{
    QLineEdit *editc[][6]={
		{CodeErr00,CodeErr01,CodeErr02,CodeErr03,CodeErr04,CodeErr05},
		{CodeErr10,CodeErr11,CodeErr12,CodeErr13,CodeErr14,CodeErr15},
		{CodeErr20,CodeErr21,CodeErr22,CodeErr23,CodeErr24,CodeErr25}
	};
    QLineEdit *editp[][6]={
		{PhaseErr00,PhaseErr01,PhaseErr02,PhaseErr03,PhaseErr04,PhaseErr05},
		{PhaseErr10,PhaseErr11,PhaseErr12,PhaseErr13,PhaseErr14,PhaseErr15},
		{PhaseErr20,PhaseErr21,PhaseErr22,PhaseErr23,PhaseErr24,PhaseErr25}
	};

}
//---------------------------------------------------------------------------
void ExtOptDialog::SetExtErrOpt(void)
{
    QLineEdit *editc[][6]={
		{CodeErr00,CodeErr01,CodeErr02,CodeErr03,CodeErr04,CodeErr05},
		{CodeErr10,CodeErr11,CodeErr12,CodeErr13,CodeErr14,CodeErr15},
		{CodeErr20,CodeErr21,CodeErr22,CodeErr23,CodeErr24,CodeErr25}
	};
    QLineEdit *editp[][6]={
		{PhaseErr00,PhaseErr01,PhaseErr02,PhaseErr03,PhaseErr04,PhaseErr05},
		{PhaseErr10,PhaseErr11,PhaseErr12,PhaseErr13,PhaseErr14,PhaseErr15},
		{PhaseErr20,PhaseErr21,PhaseErr22,PhaseErr23,PhaseErr24,PhaseErr25}
	};

}
//---------------------------------------------------------------------------
void ExtOptDialog::UpdateEnable(void)
{
    QLineEdit *editc[][6]={
		{CodeErr00,CodeErr01,CodeErr02,CodeErr03,CodeErr04,CodeErr05},
		{CodeErr10,CodeErr11,CodeErr12,CodeErr13,CodeErr14,CodeErr15},
		{CodeErr20,CodeErr21,CodeErr22,CodeErr23,CodeErr24,CodeErr25}
	};
    QLineEdit *editp[][6]={
		{PhaseErr00,PhaseErr01,PhaseErr02,PhaseErr03,PhaseErr04,PhaseErr05},
		{PhaseErr10,PhaseErr11,PhaseErr12,PhaseErr13,PhaseErr14,PhaseErr15},
		{PhaseErr20,PhaseErr21,PhaseErr22,PhaseErr23,PhaseErr24,PhaseErr25}
	};
	for (int i=0;i<3;i++) for (int j=0;j<6;j++) {
        editc[i][j]->setEnabled(ExtEna0->isChecked());
        editp[i][j]->setEnabled(ExtEna1->isChecked());
	}
    GloICB0->setEnabled(ExtEna2->isChecked());
    GloICB1->setEnabled(ExtEna2->isChecked());
    GpsGloB0->setEnabled(ExtEna3->isChecked());
    GpsGloB1->setEnabled(ExtEna3->isChecked());
}
//---------------------------------------------------------------------------

