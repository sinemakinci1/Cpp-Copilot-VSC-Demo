#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QComboBox>

#include "CalculatorUI.h"
#include "Calculator.h"

CalculatorUI::CalculatorUI(QWidget *parent) : QWidget(parent) {
    // Initialize UI components
    num1Edit = new QLineEdit(this);
    num2Edit = new QLineEdit(this);
    resultLabel = new QLabel(this);  // Change from QLineEdit to QLabel
    operationCombo = new QComboBox(this);
    operationCombo->addItems({"+", "-", "*", "/", "sqrt"});

    QPushButton *calculateButton = new QPushButton("Calculate", this);
    connect(calculateButton, &QPushButton::clicked, this, &CalculatorUI::onCalculate);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(num1Edit);
    mainLayout->addWidget(num2Edit);
    mainLayout->addWidget(operationCombo);
    mainLayout->addWidget(calculateButton);
    mainLayout->addWidget(resultLabel);  // Change from QLineEdit to QLabel

    setLayout(mainLayout);
}

void CalculatorUI::onCalculate() {
    double num1 = num1Edit->text().toDouble();
    double num2 = num2Edit->text().toDouble();
    QString x = operationCombo->currentText();
    double result = 0;

    if (x == "+") {
        result = calculator.add(num1, num2);
    } else if (x == "-") {
        result = calculator.subtract(num1, num2);
    } else if (x == "*") {
        result = calculator.multiply(num1, num2);
    } else if (x == "/") {
        result = calculator.divide(num1, num2);
    } else if (x == "sqrt") {
        result = calculator.squareRoot(num1);
    }

    resultLabel->setText(QString("<h2>Result: %1</h2>").arg(result));  // Use HTML to style the text
}