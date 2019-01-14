#include "equwidget.h"
#include "ui_equwidget.h"

EquWidget::EquWidget(QWidget *parent) : QWidget(parent), ui(new Ui::EquWidget) {
    ui->setupUi(this);
}

EquWidget::~EquWidget() {
    delete ui;
}
