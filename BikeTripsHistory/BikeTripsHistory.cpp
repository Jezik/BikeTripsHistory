#include <iostream>

#include "Trip.h"
#include "Date.h"
#include "InputHandler.h"

int main()
{
    InputHandler inputHandler{};

    Trip trip;
    int menuHandler = -1;
    bool isWorking = true;
    while (isWorking)
    {
        switch (inputHandler.getUserMenuInput())
        {
        case 1:
            trip = inputHandler.constructTripFromUserInput();
            break;
        case 2:
            std::cout << "Here will be WOW functionality with rading data from remote server using API.\nI just nedd to learn it xD" << std::endl;
            break;
        case 3:
            std::cout << "Here will be statistics output" << std::endl;
            break;
        case 4:
            std::cout << "Bye!" << std::endl;
            isWorking = false;
            break;
        }
    }
}
