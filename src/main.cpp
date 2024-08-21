#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QComboBox>

#include "Calculator.h"
#include "CalculatorUI.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    CalculatorUI window;
    window.setWindowTitle("Calculator");
    window.setFixedSize(300, 200);
    window.show();

    return app.exec();
}