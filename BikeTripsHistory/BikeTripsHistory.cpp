#include <iostream>
#include <sstream>

#include "Trip.h"
#include "Date.h"

int main()
{
    std::string name;
    std::cout << "Input name: ";
    std::cin >> name;
    std::cin.ignore(10000, '\n');

    std::string timeString;
    std::cout << "Input date: ";
    std::cin >> timeString;
    std::cin.ignore(10000, '\n');
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
    std::cin.ignore(10000, '\n');

    double kilometers;
    std::cout << "Input kilometers: ";
    std::cin >> kilometers;
    std::cin.ignore(10000, '\n');

    double maxSpeed;
    std::cout << "Input Max speed: ";
    std::cin >> maxSpeed;
    std::cin.ignore(10000, '\n');

    double averageSpeed;
    std::cout << "Input average speed: ";
    std::cin >> averageSpeed;
    std::cin.ignore(10000, '\n');

    Trip trip{name, {day, month, year}, time, kilometers, maxSpeed, averageSpeed};

    std::cout << "Your trip:\n";
    std::cout << trip;
}
