#ifndef QTCALCULATORCONVERTER_H
#define QTCALCULATORCONVERTER_H

#include <QMainWindow>
#include <string>

namespace Ui {
class QtCalculatorConverter;
}

class QtCalculatorConverter : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtCalculatorConverter(QWidget *parent = nullptr);
    ~QtCalculatorConverter();

private slots:
    void on_two_clicked();

    void on_one_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_addition_clicked();

    void on_minus_clicked();

    void on_divide_clicked();

    void on_multiply_clicked();

    void on_equals_clicked();

    void on_clear_clicked();

    void on_power_clicked();

    void on_rightParentheses_clicked();

    void on_leftParentheses_clicked();

    void on_decimal_clicked();

    void on_pushButton_clicked();

private:
    Ui::QtCalculatorConverter *ui;
	std::string displayOutput;
};

#endif // QTCALCULATORCONVERTER_H
