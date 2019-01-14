#ifndef VALWIDGET_H
#define VALWIDGET_H

#include <QWidget>

namespace Ui {
class ValWidget;
}

class ValWidget : public QWidget {
    Q_OBJECT

public:
    explicit ValWidget(QWidget *parent = nullptr);
    ~ValWidget();

private:
    Ui::ValWidget *ui;
};

#endif // VALWIDGET_H
