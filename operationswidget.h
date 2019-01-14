#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <QWidget>

namespace Ui {
class OperationsWidget;
}

class OperationsWidget : public QWidget {
    Q_OBJECT

public:
    explicit OperationsWidget(QWidget *parent = nullptr);
    ~OperationsWidget();

private:
    Ui::OperationsWidget *ui;
};

#endif // OPERATIONS_H
