#ifndef WAVEWIDGET_H
#define WAVEWIDGET_H

#include <QWidget>

namespace Ui {
class waveWidget;
}

class waveWidget : public QWidget
{
    Q_OBJECT

public:
    explicit waveWidget(QWidget *parent = 0);
    ~waveWidget();

private:
    Ui::waveWidget *ui;
};

#endif // WAVEWIDGET_H
