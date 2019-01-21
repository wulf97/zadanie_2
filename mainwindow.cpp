#include <QHBoxLayout>
#include <QVBoxLayout>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "valwidget.h"
#include "operationswidget.h"
#include "numtopwidget.h"
#include "numbottomwidget.h"
#include "equwidget.h"
#include "manager.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    Manager *manager = new Manager(this);
    ui->setupUi(this);

    ui->mainLayout->addWidget(manager->getWidgets());
}

MainWindow::~MainWindow() {
    delete ui;
}
