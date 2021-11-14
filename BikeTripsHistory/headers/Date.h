#pragma once

class Date
{
public:

    Date()
    {
        mDay = -1;
        mMonth = -1;
        mYear = -1;
    }

    Date(int day, int month, int year);

    int getDay() const
    {
        return mDay;
    }

    int getMonth() const
    {
        return mMonth;
    }

    int getYear() const
    {
        return mYear;
    }

private:
    int mDay;
    int mMonth;
    int mYear;
};

