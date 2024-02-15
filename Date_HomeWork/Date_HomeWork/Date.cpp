#include "Date.h"
#include<iostream>


ostream& operator<<(ostream& COUT, const Date& d) // output overload
{
    static string monthName[13] = { "", "January", "February",
       "March", "April", "May", "June", "July", "August",
       "September", "October", "November", "December" };
    COUT << d.m_day << ' ' << monthName[d.m_month]
        << ", " << d.m_year;
    return COUT; 
}

istream& operator>>(istream& CIN, Date& date)
{
    CIN >> date.m_day >> date.m_month >> date.m_year;
   return CIN;
}

 

Date::Date(int d, int m, int y)
{
    setDate(d, m, y);
}

void Date::setDate(int day, int month, int year)
{
    if (month >= 1 && month <= 12) {
        m_month = month;
    }
    else {
        month = 1;
    }

    if (year >= 1996 && year <= 2500) {
        m_year = year;
    }
    else {
        m_year = 1996;
    }

    if (m_month == 2 && isLeepYear(m_year)) {
       
        m_day = (day >= 1 && day <= 29) ? day : 1;
    }
    else {
        
        day = (day >= 1 && day <= m_numberOfDays[month]) ? day : 1;
    }
}

Date& Date::operator--() // prefix
{
    increment();
    return *this;
}

Date& Date::operator--(int) // postfix
{
    Date temp = *this;
    increment();
    return *this;
}

bool Date::isLeepYear(int checkYear) const
{
    if (checkYear % 400 == 0 ||
        (checkYear % 100 != 0 && checkYear % 4 == 0))
        return true;
    else
        return false;
}

bool Date::endOfMonth(int checkDay) const
{
    if (m_month == 2 && isLeepYear(m_year))
        return checkDay == 29;
    else
        return checkDay == m_numberOfDays[m_month];
}

void Date::increment()
{
    if ( !endOfMonth( m_day) ) {
        m_day--;
    }
    else {
        if (m_month < 12) {
            m_month--;
            m_day = 1;
        }
        else {
            m_year--;
            m_month = 1;
            m_day = 1;
        }
    }

}

const int Date::m_numberOfDays[] = { 0,31,28,31,30,31,31,30,31,30,31,30,31 };