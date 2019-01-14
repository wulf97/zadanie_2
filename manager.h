#ifndef MANAGER_H
#define MANAGER_H

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>

#include "mainwindow.h"
#include "valwidget.h"
#include "operationswidget.h"
#include "numtopwidget.h"
#include "numbottomwidget.h"
#include "equwidget.h"
#include "calc.h"

class Manager : public QWidget {
    Q_OBJECT

public:
    explicit Manager(QWidget *parent = nullptr);
    ~Manager();

    QWidget *getWidgets(void);
};

#endif // MANAGER_H
