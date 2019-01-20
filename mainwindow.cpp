#include <QHBoxLayout>
#include <QVBoxLayout>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "valwidget.h"
#include "operationswidget.h"
#include "numtopwidget.h"
#include "numbottomwidget.h"
#include "equwidget.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    QHBoxLayout *hLayout = new QHBoxLayout();
    QVBoxLayout *numLayout = new QVBoxLayout();

    ValWidget *valW = new ValWidget();
    OperationsWidget *opW = new OperationsWidget();
    NumTopWidget *numTopW = new NumTopWidget();
    NumBottomWidget *numBottomW = new NumBottomWidget();
    EquWidget *equW = new EquWidget();

    ui->mainLayout->addWidget(valW);
    ui->mainLayout->addWidget(opW);

    numLayout->addWidget(numTopW);
    numLayout->addWidget(numBottomW);

    ui->mainLayout->addLayout(hLayout);
    hLayout->addLayout(numLayout);
    hLayout->addWidget(equW);
}

MainWindow::~MainWindow() {
    delete ui;
}
