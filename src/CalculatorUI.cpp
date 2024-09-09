#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QButtonGroup>
#include <QLabel>
#include <QComboBox>
#include <QSignalMapper>

#include "CalculatorUI.h"
#include "Calculator.h"

CalculatorUI::CalculatorUI(QWidget *parent) : QWidget(parent)
{
    resultLabel = new QLabel(this);

    QLabel *num1Label = new QLabel("Number 1:", this);
    num1Edit = new QLineEdit(this);

    QLabel *num2Label = new QLabel("Number 2:", this);
    num2Edit = new QLineEdit(this);

    resultLabel = new QLabel(this);
    resultLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    resultLabel->setWordWrap(true);    // Allow text to wrap if it's too long
    resultLabel->setMinimumHeight(50); // Set a minimum height for the result label

    // Main layout
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QHBoxLayout *buttonLayout = new QHBoxLayout();

        // Layouts for input fields
    QHBoxLayout *num1Layout = new QHBoxLayout();
    num1Layout->addWidget(num1Label);
    num1Layout->addWidget(num1Edit);

    QHBoxLayout *num2Layout = new QHBoxLayout();
    num2Layout->addWidget(num2Label);
    num2Layout->addWidget(num2Edit);

    mainLayout->addLayout(num1Layout);
    mainLayout->addLayout(num2Layout);

    // List of operations
    QStringList operations = {"+", "-", "*", "/"};

    QButtonGroup *buttonGroup = new QButtonGroup(this);
    buttonGroup->setExclusive(true);

    // Create buttons for each operation
    QPushButton *additionButton = nullptr;

    for (const QString &operation : operations)
    {
        QPushButton *button = new QPushButton(operation, this);
        button->setCheckable(true);

         // Calculate the appropriate size for the button based on its text
        QFontMetrics fm(button->font());
        int textWidth = fm.horizontalAdvance(operation) + 25; // Add some padding
        int textHeight = fm.height() + 28; // Add some padding
        button->setMinimumSize(textWidth, textHeight);

        // Apply custom styles to the buttons
        button->setStyleSheet(
            "QPushButton {"
            "background-color: grey;"  // Change background color to grey
            "border: none;"
            "color: white;"
            "padding: 10px 10px;"
            "text-align: center;"
            "text-decoration: none;"
            "display: inline-block;"
            "font-size: 16px;"
            "margin: 4px 2px;"
            "transition-duration: 0.4s;"
            "cursor: pointer;"
            "}"
            "QPushButton:checked {"
            "background-color: darkgrey;"
            "}"
            "QPushButton:hover {"
            "background-color: darkgrey;"
            "}");

        buttonGroup->addButton(button);
        buttonLayout->addWidget(button);
    }

    // Select the addition button by default
    if (additionButton)
    {
        additionButton->setChecked(true);
    }

    mainLayout->addLayout(buttonLayout);


    // Set the size policy for the main window
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Add the number pad below the input fields
    QGridLayout *numPadLayout = new QGridLayout();

    QStringList numPadButtons = {"7", "8", "9", "4", "5", "6", "1", "2", "3", "0", "C"};
    int row = 0, col = 0;

    for (const QString &buttonText : numPadButtons) {
        QPushButton *button = new QPushButton(buttonText, this);
        button->setMinimumSize(40, 40); // Set a minimum size for the buttons
        button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding); // Make buttons expand
        connect(button, &QPushButton::clicked, this, &CalculatorUI::onNumPadClicked);
        numPadLayout->addWidget(button, row, col);
        col++;
        if (col == 3) {
            col = 0;
            row++;
        }
    }

    mainLayout->addLayout(numPadLayout);

    // Set the size policy for the main layout
    mainLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);

    // Add the calculate button at the bottom
    QPushButton *calculateButton = new QPushButton("Calculate", this);
    connect(calculateButton, &QPushButton::clicked, this, &CalculatorUI::onCalculateClicked);
    mainLayout->addWidget(calculateButton);


    mainLayout->addWidget(resultLabel); // Change from QLineEdit to QLabel

    setLayout(mainLayout);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

void CalculatorUI::onCalculateClicked()
{
    // Get the selected operation
    QButtonGroup *buttonGroup = findChild<QButtonGroup *>();
    QString operation = buttonGroup->checkedButton()->text();

    double num1 = num1Edit->text().toDouble();
    double num2 = num2Edit->text().toDouble();
    double result = 0;

    if (operation == "+")
    {
        result = calculator.add(num1, num2);
    }
    else if (operation == "-")
    {
        result = calculator.subtract(num1, num2);
    }
    else if (operation == "*")
    {
        result = calculator.multiply(num1, num2);
    }
    else if (operation == "/")
    {
        result = calculator.divide(num1, num2);
    }

    resultLabel->setText(QString("<h2 align=\"center\">Result: %1</h2>").arg(result)); // Use HTML to style the text and center it
    adjustSize();
}

void CalculatorUI::onNumPadClicked() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button) return;

    QString buttonText = button->text();
    if (buttonText == "C") {
        num1Edit->clear();
        num2Edit->clear();
    } else {
        if (num1Edit->hasFocus()) {
            num1Edit->insert(buttonText);
        } else if (num2Edit->hasFocus()) {
            num2Edit->insert(buttonText);
        }
    }
}