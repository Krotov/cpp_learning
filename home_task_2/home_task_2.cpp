#include <iostream>

using namespace std;

int main()
{
    /*
    * 1) Написать программу, которая находит среднее арифметическое значение трёх вещественных чисел.
    */
    double num1;
    double num2;
    double num3;

    cout << "Enter 3 numbers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    cout << "Average is: " << (num1 + num2 + num3) / 3 << "\n";

    /*
    * 2) Написать программу, которая  предлагает пользователю ввести радиус окружности,
    *    а затем считает площадь и длину этой окружности.
    *    Число Pi задать в программе как вещественную константу.
    */
    const double PI = 3.14159;

    double radius;

    cout << "Enter radius of a circle: ";
    cin >> radius;
    cout << "Area of the circle: " << PI * radius * radius << "\n";
    cout << "Circumferenece of the circle: " << 2 * PI * radius << "\n";

    /*
    * 3) Пользователь вводит число и степень.
    * Программа вычисляет указанную степень этого числа (пригодится функция pow).
    */
    double base;
    double exponent;

    cout << "Enter base and exponent separated by space: ";
    cin >> base >> exponent;
    cout << base << " raised to the power " << exponent << " is " << pow(base, exponent) << "\n";

    /*
    * 4) Написать программу, которая  предоставляет пользователю возможность ввести с клавиатуры
    * количество гривен, и переводит это количество в доллары, евро и биткоины.
    */

    const double usd = 0.1;
    const double eur = 0.2;
    const double btc = 0.3;

    double uah;

    cout << "Enter UAH amount: ";
    cin >> uah;

    cout << uah << " UAH is:" << "\n";
    cout << uah * usd << " USD" << "\n";
    cout << uah * eur << " EUR" << "\n";
    cout << uah * btc << " BTC" << "\n";

    /*
    * 5) Написать программу, которая переводит километры в сухопутные и морские мили.
    */

    const double kmToMile = 0.611371;

    double km;

    cout << "Enter the amount of kilometers: ";
    cin >> km;

    cout << km << " km equals " << km * kmToMile << " miles" << "\n";

    /*
    * 6) Написать программу, которая находит процент P от числа N.
    */

    double num;
    double perc;

    cout << "Enter a number and a percentage separated by space: ";
    cin >> num >> perc;

    cout << perc << "% of " << num << " is " << (num * perc) / 100 << "\n";

    /*
    * 7) Пользователь вводит с клавиатуры сумму в гривнах (дробное число). Вывести по
    *    отдельности количество гривен и количество копеек (например, ввести 45.67
    *    гривен - получить и вывести 45 гривен 67 копеек)
    */

    double amount;

    cout << "Enter the amount in UAH: ";
    cin >> amount;

    int totalCoins = amount * 100;
    cout << totalCoins / 100 << " uah " << totalCoins % 100 << " coins." << "\n";

    /*
    * 8) Пользователь вводит с клавиатуры время в секундах. Перевести это значение в дни,
    * часы, минуты и секунды. Например, 43512 секунд – это 12 часов, 5 минут и 12
    * секунд.
    */

    int secValue;

    cout << "Enter time in seconds: ";
    cin >> secValue;

    int days = secValue / 86400;
    secValue = secValue % 86400;
    int hours = secValue / 3600;
    secValue = secValue % 3600;
    int minutes = secValue / 60;
    int seconds = secValue % 60;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << "\n";
}
