#include <QDebug>
#include "manager.h"

Manager::Manager(QWidget *parent) : QWidget(parent) {

}

QWidget *Manager::getWidgets(void) {
    QPushButton *numButtons[10];
    QPushButton *buttonC;
    QPushButton *buttonPlus;
    QPushButton *buttonMinus;
    QPushButton *buttonMul;
    QPushButton *buttonDel;
    QPushButton *buttonEqu;

    QString buttonName;

    /* Компановка виджета */
    QVBoxLayout *combLayout = new QVBoxLayout(); // Главный лэйаут для компановки виджета
    QHBoxLayout *hLayout = new QHBoxLayout();
    QVBoxLayout *numLayout = new QVBoxLayout();

    QWidget *combWidget = new QWidget(this); // Виджет, в котором происходит компановка других виджетов

    ValWidget *valW = new ValWidget(this); // Виджет строки вывода
    OperationsWidget *opW = new OperationsWidget(this); // Виджет с операторами
    NumTopWidget *numTopW = new NumTopWidget(this); // Виджет верхней панели цифр
    NumBottomWidget *numBottomW = new NumBottomWidget(this); // Виджет нижней панели цифр
    EquWidget *equW = new EquWidget(this);

    Calc *calc = new Calc(this); // Экземпляр обработчика
    calc->setDispaly(valW->findChild<QLineEdit*>("lineEdit")); // Добавление строки вывода

    combLayout->addWidget(valW);
    combLayout->addWidget(opW);

    numLayout->addWidget(numTopW);
    numLayout->addWidget(numBottomW);

    hLayout->addLayout(numLayout);
    hLayout->addWidget(equW);

    combLayout->addLayout(hLayout);
    combWidget->setLayout(combLayout);

    /* Присоединение слотов */
    for (int i = 0; i < 4; ++i) {
        buttonName = "button" + QString::number(i);
        /* Добавление кнопки в массив по их имени */
        numButtons[i] = numBottomW->findChild<QPushButton*>(buttonName);
        /* Обработка нажатия одной из кнопок */
        connect(numButtons[i], SIGNAL(released()), calc, SLOT(calculate()));
    }

    for (int i = 4; i < 10; ++i) {
        buttonName = "button" + QString::number(i);
        /* Добавление кнопки в массив по их имени */
        numButtons[i] = numTopW->findChild<QPushButton*>(buttonName);
        /* Обработка нажатия одной из кнопок */
        connect(numButtons[i], SIGNAL(released()), calc, SLOT(calculate()));
    }

    buttonC = opW->findChild<QPushButton*>("buttonC");
    buttonPlus = opW->findChild<QPushButton*>("buttonPlus");
    buttonMinus = opW->findChild<QPushButton*>("buttonMinus");
    buttonMul = opW->findChild<QPushButton*>("buttonMul");
    buttonDel = opW->findChild<QPushButton*>("buttonDel");
    buttonEqu = equW->findChild<QPushButton*>("buttonEqu");

    connect(buttonC, SIGNAL(released()), calc, SLOT(calculate()));
    connect(buttonPlus, SIGNAL(released()), calc, SLOT(calculate()));
    connect(buttonMinus, SIGNAL(released()), calc, SLOT(calculate()));
    connect(buttonMul, SIGNAL(released()), calc, SLOT(calculate()));
    connect(buttonDel, SIGNAL(released()), calc, SLOT(calculate()));
    connect(buttonEqu, SIGNAL(released()), calc, SLOT(calculate()));

    return combWidget;
}

Manager::~Manager() {

}


