#include "calc.h"

Calc::Calc(QWidget *parent) : QWidget(parent) {

}

void Calc::setDispaly(QLineEdit *display) {
    this->_display = display;
}

void Calc::calculate(void) {
    QPushButton *button;
    QString newVal, buttonVal, screenVal;

    /* Возвращает указатель на нажатую кнопку */
    button = (QPushButton*)sender();
    buttonVal = button->text();
    screenVal = this->_display->text(); //screenval = 0 по дефолту

    if (buttonVal == "C") {
        this->_fl = 0;
        newVal = "0";
        _num1 = 0;
        _num2 = 0;
    } else if (buttonVal == "+" ||
               buttonVal == "-" ||
               buttonVal == "*" ||
               buttonVal == "/") {
        this->_ops = buttonVal;
        newVal = buttonVal;
        this->_fl = 1;
    } else if (buttonVal == "=") {
        if (this->_ops == "+") {
            this->_res = this->_num1 + this->_num2;
        }

        if (this->_ops == "-") {
            this->_res = this->_num1 - this->_num2;
        }

        if (this->_ops == "*") {
            this->_res = this->_num1 * this->_num2;
        }

        if (this->_ops == "/") {
            this->_res = this->_num1 / this->_num2;
        }

        newVal = QString::number(this->_res);
        this->_fl = 1;
        this->_num1 = newVal.toFloat();
    } else {
        if(this->_fl == 0) {
            if (screenVal == "0") {
                this->_num1 = buttonVal.toFloat();
                newVal = buttonVal;
            } else {
                this->_num1 = (screenVal + buttonVal).toFloat();
                newVal = screenVal + buttonVal;
            }
        } else if (this->_fl == 1) {
            if (screenVal == "0" ||
                screenVal == "+" ||
                screenVal == "-" ||
                screenVal == "*" ||
                screenVal == "/"){
                this->_num2 = buttonVal.toFloat();
                newVal = buttonVal;
            } else {
                this->_num2 = (screenVal + buttonVal).toFloat();
                newVal = screenVal + buttonVal;
            }
        }
    }

    this->_display->setText(newVal);
}

Calc::~Calc() {

}
