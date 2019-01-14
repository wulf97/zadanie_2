#include "operationswidget.h"
#include "ui_operationswidget.h"

OperationsWidget::OperationsWidget(QWidget *parent) : QWidget(parent), ui(new Ui::OperationsWidget) {
    ui->setupUi(this);
}

OperationsWidget::~OperationsWidget() {
    delete ui;
}
