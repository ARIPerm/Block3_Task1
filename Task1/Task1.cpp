#include <iostream>
#include <Windows.h>
#include <string>

enum class Month 
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int enterNumber();
int checkNumberMonth(int number);
Month getMonth(int number);
std::string getStringMonth(Month number);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bool isCheck = true;
    while (isCheck)
    {
        int value = enterNumber();

        if (value == 0)
        {
            isCheck = false;
            continue;
        }
        else if (value > 12)
        {
            std::cout << "Неправильный номер!" << std::endl;
            continue;
        }

        Month month = getMonth(value);

        std::string string = getStringMonth(month);
        std::cout << string << std::endl;
    }

    std::cout << "До свидания" << std::endl;
}

int enterNumber()
{
    std::cout << "Введите номер месяца: ";
    int number;
    std::cin >> number;
    return number;
}

Month getMonth(int number)
{
    return static_cast<Month>(number);
}

int checkNumberMonth(int number)
{
    if (number > 13)
        return 13;
    return number;
}

std::string getStringMonth(Month number)
{
    switch (number)
    {
    case Month::January:
        return "Январь";
        break;
    case Month::February:
        return "Февраль";
        break;
    case Month::March:
        return "Март";
        break;
    case Month::April:
        return "Апрель";
        break;
    case Month::May:
        return "Май";
        break;
    case Month::June:
        return "Июнь";
        break;
    case Month::July:
        return "Июль";
        break;
    case Month::August:
        return "Август";
        break;
    case Month::September:
        return "Сентябрь";
        break;
    case Month::October:
        return "Октябрь";
        break;
    case Month::November:
        return "Ноябрь";
        break;
    case Month::December:
        return "Декабрь";
        break;
    }
}
