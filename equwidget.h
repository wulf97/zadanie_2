#ifndef EQUWIDGET_H
#define EQUWIDGET_H

#include <QWidget>

namespace Ui {
class EquWidget;
}

class EquWidget : public QWidget {
    Q_OBJECT

public:
    explicit EquWidget(QWidget *parent = nullptr);
    ~EquWidget();

private:
    Ui::EquWidget *ui;
};

#endif // EQUWIDGET_H
