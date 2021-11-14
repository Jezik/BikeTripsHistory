#pragma once

#include <iostream>
#include <string>
#include "Date.h"

class Trip
{
public:
    Trip()
    {}

    Trip(const std::string& name, const Date& date, double timeLength, double kilometersLength, double maxSpeed, double averageSpeed);

    friend std::ostream& operator<<(std::ostream& s, const Trip& trip);

private:
    std::string mName;
    Date mDate;
    double mTimeLength;
    double mKilometersLength;
    double mMaxSpeed;
    double mAverageSpeed;
};
