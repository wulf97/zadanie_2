#ifndef NUMBOTTOMWIDGET_H
#define NUMBOTTOMWIDGET_H

#include <QWidget>

namespace Ui {
class NumBottomWidget;
}

class NumBottomWidget : public QWidget {
    Q_OBJECT

public:
    explicit NumBottomWidget(QWidget *parent = nullptr);
    ~NumBottomWidget();

private:
    Ui::NumBottomWidget *ui;
};

#endif // NUMBOTTOMWIDGET_H
