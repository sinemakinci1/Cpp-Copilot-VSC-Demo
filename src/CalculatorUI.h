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
#include <QSignalMapper>
#include "Calculator.h"

class CalculatorUI : public QWidget {
    Q_OBJECT

public:
    CalculatorUI(QWidget *parent = nullptr);

    void onNumPadClicked();
    void onOperationClicked();
    void setOperation(const QString &operation);

private slots:
    void onCalculateClicked();

private:
    QLineEdit *num1Edit;
    QLineEdit *num2Edit;
    QLabel *resultLabel;
    Calculator calculator;
    bool operationClicked; 
};

#endif // CALCULATORUI_H