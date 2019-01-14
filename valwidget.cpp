#include "valwidget.h"
#include "ui_valwidget.h"

ValWidget::ValWidget(QWidget *parent) : QWidget(parent), ui(new Ui::ValWidget) {
    ui->setupUi(this);
}

ValWidget::~ValWidget() {
    delete ui;
}
