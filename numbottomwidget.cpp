#include "numbottomwidget.h"
#include "ui_numbottomwidget.h"

NumBottomWidget::NumBottomWidget(QWidget *parent) : QWidget(parent), ui(new Ui::NumBottomWidget) {
    ui->setupUi(this);
}

NumBottomWidget::~NumBottomWidget() {
    delete ui;
}
