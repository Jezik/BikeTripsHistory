#include "../headers/Trip.h"

Trip::Trip(const std::string& name, const Date& date, double timeLength, double kilometersLength, double maxSpeed, double averageSpeed)
{
    mName = name;
    mDate = date;
    mTimeLength = timeLength;
    mKilometersLength = kilometersLength;
    mMaxSpeed = maxSpeed;
    mAverageSpeed = averageSpeed;
}

std::ostream& operator<<(std::ostream& s, const Trip& trip)
{
    s << "Name: " << trip.mName << "\n";
    s << "Date: " << trip.mDate.getDay() << "/" << trip.mDate.getMonth()<< "/" << trip.mDate.getYear() << "\n";
    s << "Total time: " << trip.mTimeLength << "\n";
    s << "Total distance: " << trip.mKilometersLength << "\n";
    s << "Max speed: " << trip.mMaxSpeed << "\n";
    s << "Average speed: " << trip.mAverageSpeed << "\n";

    return s;
}
