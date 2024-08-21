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
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    QHBoxLayout *nameLayout = new QHBoxLayout();
    QLabel *nameLabel = new QLabel("Name:", this);
    nameEdit = new QLineEdit(this);
    nameLayout->addWidget(nameLabel);
    nameLayout->addWidget(nameEdit);

    QHBoxLayout *companyLayout = new QHBoxLayout();
    QLabel *companyLabel = new QLabel("Company:", this);
    companyEdit = new QLineEdit(this);
    companyLayout->addWidget(companyLabel);
    companyLayout->addWidget(companyEdit);

    QHBoxLayout *num1Layout = new QHBoxLayout();
    QLabel *num1Label = new QLabel("Number 1:", this);
    num1Edit = new QLineEdit(this);
    num1Layout->addWidget(num1Label);
    num1Layout->addWidget(num1Edit);

    QHBoxLayout *num2Layout = new QHBoxLayout();
    QLabel *num2Label = new QLabel("Number 2:", this);
    num2Edit = new QLineEdit(this);
    num2Layout->addWidget(num2Label);
    num2Layout->addWidget(num2Edit);

    QHBoxLayout *operationLayout = new QHBoxLayout();
    QLabel *operationLabel = new QLabel("Operation:", this);
    operationCombo = new QComboBox(this);
    operationCombo->addItem("+");
    operationCombo->addItem("-");
    operationCombo->addItem("*");
    operationCombo->addItem("/");
    operationLayout->addWidget(operationLabel);
    operationLayout->addWidget(operationCombo);

    QHBoxLayout *resultLayout = new QHBoxLayout();
    QLabel *resultLabel = new QLabel("Result:", this);
    resultEdit = new QLineEdit(this);
    resultEdit->setReadOnly(true);
    resultLayout->addWidget(resultLabel);
    resultLayout->addWidget(resultEdit);

    QPushButton *calculateButton = new QPushButton("Calculate", this);
    connect(calculateButton, &QPushButton::clicked, this, &CalculatorUI::onCalculate);

    mainLayout->addLayout(nameLayout);
    mainLayout->addLayout(companyLayout);
    mainLayout->addLayout(num1Layout);
    mainLayout->addLayout(num2Layout);
    mainLayout->addLayout(operationLayout);
    mainLayout->addLayout(resultLayout);
    mainLayout->addWidget(calculateButton);
}

void CalculatorUI::onCalculate() {
    double num1 = num1Edit->text().toDouble();
    double num2 = num2Edit->text().toDouble();
    QString operation = operationCombo->currentText();
    double result = 0;

    if (operation == "+") {
        result = calculator.add(num1, num2);
    } else if (operation == "-") {
        result = calculator.subtract(num1, num2);
    } else if (operation == "*") {
        result = calculator.multiply(num1, num2);
    } else if (operation == "/") {
        result = calculator.divide(num1, num2);
    }

    resultEdit->setText(QString::number(result));
}