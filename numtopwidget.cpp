#include "numtopwidget.h"
#include "ui_numtopwidget.h"

NumTopWidget::NumTopWidget(QWidget *parent) : QWidget(parent), ui(new Ui::NumTopWidget) {
    ui->setupUi(this);
}

NumTopWidget::~NumTopWidget() {
    delete ui;
}
