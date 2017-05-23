#include "wavewidget.h"
#include "ui_wavewidget.h"

waveWidget::waveWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::waveWidget)
{
    ui->setupUi(this);
}

waveWidget::~waveWidget()
{
    delete ui;
}
