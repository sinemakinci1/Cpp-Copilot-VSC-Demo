#ifndef CALCULATORUI_H
#define CALCULATORUI_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QComboBox>
#include "Calculator.h"

class CalculatorUI : public QWidget {
    Q_OBJECT

public:
    CalculatorUI(QWidget *parent = nullptr);

private slots:
    void onCalculate();

private:
    QLineEdit *num1Edit;
    QLineEdit *num2Edit;
    QLineEdit *resultEdit;
    QComboBox *operationCombo;
    Calculator calculator;
};

#endif