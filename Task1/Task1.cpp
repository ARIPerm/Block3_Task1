#include <iostream>
#include <Windows.h>
#include <string>

enum class Month 
{
    Exit,
    January,
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
    December,
    Error
};

Month enterNumber();
int checkNumberMonth(int number);
std::string getMonth(Month number);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bool isCheck = true;
    while (isCheck)
    {
        Month value = enterNumber();

        if (value == Month::Exit)
        {
            isCheck = false;
            continue;
        }

        std::string mounth = getMonth(value);
        std::cout << mounth << std::endl;
    }

    std::cout << "До свидания" << std::endl;
}

Month enterNumber()
{
    std::cout << "Введите номер месяца: ";
    int number;
    std::cin >> number;
    number = checkNumberMonth(number);
    
    return static_cast<Month>(number);
}

int checkNumberMonth(int number)
{
    if (number > 13)
        return 13;
    return number;
}

std::string getMonth(Month number)
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
    case Month::Error:
        return "Неправильный номер!";
        break;
    }
}
