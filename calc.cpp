#include "calc.h"

Calc::Calc(QObject *parent) : QObject(parent) {

}

void Calc::setDispaly(QLineEdit *display) {
    _display = display;
}

void Calc::calculate(void) {
    QPushButton *button;
    QString newVal, buttonVal, screenVal;

    /* Возвращает указатель на нажатую кнопку */
    button = qobject_cast<QPushButton*>(sender());

    if (button) {
        buttonVal = button->text();
        screenVal = _display->text(); //screenval = 0 по дефолту

        if (buttonVal == "C") {
            _fl = 0;
            newVal = "0";
            _num1 = 0;
            _num2 = 0;
        } else if (buttonVal == "+" ||
                   buttonVal == "-" ||
                   buttonVal == "*" ||
                   buttonVal == "/") {
            _ops = buttonVal;
            newVal = buttonVal;
            _fl = 1;
        } else if (buttonVal == "=") {
            if (_ops == "+") {
                _res = _num1 + _num2;
            }

            if (_ops == "-") {
                _res = _num1 - _num2;
            }

            if (_ops == "*") {
                _res = _num1 * _num2;
            }

            if (_ops == "/") {
                _res = _num1 / _num2;
            }

            newVal = QString::number(_res);
            _fl = 1;
            _num1 = newVal.toFloat();
        } else {
            if(_fl == 0) {
                if (screenVal == "0") {
                    _num1 = buttonVal.toFloat();
                    newVal = buttonVal;
                } else {
                    _num1 = (screenVal + buttonVal).toFloat();
                    newVal = screenVal + buttonVal;
                }
            } else if (_fl == 1) {
                if (screenVal == "0" ||
                    screenVal == "+" ||
                    screenVal == "-" ||
                    screenVal == "*" ||
                    screenVal == "/"){
                    _num2 = buttonVal.toFloat();
                    newVal = buttonVal;
                } else {
                    _num2 = (screenVal + buttonVal).toFloat();
                    newVal = screenVal + buttonVal;
                }
            }
        }

        _display->setText(newVal);
    } else {
        _display->setText("Err");
    }
}

Calc::~Calc() {

}
