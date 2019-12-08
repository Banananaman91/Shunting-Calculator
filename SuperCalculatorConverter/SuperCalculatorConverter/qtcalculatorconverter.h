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

    void on_volumeConvert_clicked();

    void on_weightConvert_clicked();

    void on_speedConvert_clicked();

    void on_angleConvert_clicked();

    void on_modulus_clicked();

    void on_gameZero_clicked();

    void on_gameOne_clicked();

    void on_gameTwo_clicked();

    void on_gameThree_clicked();

    void on_gameFour_clicked();

    void on_gameFive_clicked();

    void on_gameSix_clicked();

    void on_gameSeven_clicked();

    void on_gameNine_clicked();

    void on_gameAddition_clicked();

    void on_gameMinus_clicked();

    void on_gameMultiply_clicked();

    void on_gameDivide_clicked();

    void on_gameModulus_clicked();

    void on_gameLeftParentheses_clicked();

    void on_gameRightParentheses_clicked();

    void on_gamePower_clicked();

    void on_gameDecimal_clicked();

    void on_gameClear_clicked();

    void on_gameEquals_clicked();

    void on_gameStart_clicked();

    void on_gameEight_clicked();

private:
    Ui::QtCalculatorConverter *ui;
	std::string displayOutput;
	int points = 0;
	QString previousGameNumber = "0";
};

#endif // QTCALCULATORCONVERTER_H
