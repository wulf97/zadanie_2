#ifndef NUMTOPWIDGET_H
#define NUMTOPWIDGET_H

#include <QWidget>

namespace Ui {
class NumTopWidget;
}

class NumTopWidget : public QWidget {
    Q_OBJECT

public:
    explicit NumTopWidget(QWidget *parent = nullptr);
    ~NumTopWidget();

private:
    Ui::NumTopWidget *ui;
};

#endif // NUMTOPWIDGET_H
