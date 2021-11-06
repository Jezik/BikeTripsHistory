#pragma once

#include <iostream>
#include <sstream>

#include "Trip.h"
#include "Date.h"

class InputHandler
{
public:
    InputHandler();

    void printMenu();

    int getUserMenuInput();

    Trip constructTripFromUserInput();
};

