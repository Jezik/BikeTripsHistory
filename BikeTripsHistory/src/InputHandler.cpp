#include "../headers/InputHandler.h"

InputHandler::InputHandler()
{
    printMenu();
}

void InputHandler::printMenu()
{
    std::cout << "Welcome to your personal Bike Trip History!" << std::endl;
    std::cout << "\n~~~~~~~~~~Main Menu~~~~~~~~~~" << std::endl;
    std::cout << "#1 Input trip data manually" << std::endl;
    std::cout << "#2 Get trip data from remote server (currently unavailable)" << std::endl;
    std::cout << "#3 View statistics" << std::endl;
    std::cout << "#4 Exit\n" << std::endl;
}

int InputHandler::getUserMenuInput()
{
    int menuInput = -1;
    std::cout << "Choose an option: ";
    std::cin >> menuInput;

    while (std::cin.fail() || menuInput < 1 || menuInput > 4)
    {
        std::cout << "Please, input an integer from 1 to 4" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> menuInput;
    }

    return menuInput;
}

Trip InputHandler::constructTripFromUserInput()
{
    std::string name;
    std::cout << "Input name: ";
    std::cin >> name;
    std::cin.ignore(256, '\n');

    std::string timeString;
    std::cout << "Input date in a 'dd-MM-YYYY' format: ";
    std::cin >> timeString;
    std::cin.ignore(256, '\n');
    int day, month, year;
    std::stringstream sstream{timeString};
    sstream >> day;
    sstream.ignore(1);
    sstream >> month;
    sstream.ignore(1);
    sstream >> year;

    double time;
    std::cout << "Input time: ";
    std::cin >> time;
    while (std::cin.fail() || time < 0)
    {
        std::cout << "Incorrect time, please, try again" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> time;
    }

    double kilometers;
    std::cout << "Input kilometers: ";
    std::cin >> kilometers;
    while (std::cin.fail() || kilometers < 0)
    {
        std::cout << "Incorrect distance, please, try again" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> kilometers;
    }

    double maxSpeed;
    std::cout << "Input Max speed: ";
    std::cin >> maxSpeed;
    while (std::cin.fail() || maxSpeed < 0)
    {
        std::cout << "Incorrect speed, please, try again" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> maxSpeed;
    }

    double averageSpeed;
    std::cout << "Input average speed: ";
    std::cin >> averageSpeed;
    while (std::cin.fail() || averageSpeed < 0)
    {
        std::cout << "Incorrect speed, please, try again" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> averageSpeed;
    }

    return {name, {day, month, year}, time, kilometers, maxSpeed, averageSpeed};
}
