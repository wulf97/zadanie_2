#ifndef CALC_H
#define CALC_H

#include <QWidget>
#include <QPushButton>
#include <QString>
#include <QLineEdit>
#include <QDebug>

class Calc : public QWidget {
    Q_OBJECT

public:
    explicit Calc(QWidget *parent = nullptr);
    ~Calc();

    void setDispaly(QLineEdit*);

private slots:
    void calculate(void);
private:
    QLineEdit *_display = 0;
    bool _fl = 0;
    float _num1 = 0;
    float _num2 = 0;
    float _res = 0;
    QString _ops;
};

#endif // CALC_H
