//
// Created by user on 07.12.2023.
//

#ifndef PROJC___DATE_H
#define PROJC___DATE_H


class Date
{
public:
    Date(int year, int month, int day): m_year(year), m_month(month) ,m_day(day){}
    bool operator< (const Date& other) const;
    bool operator== (const Date& other) const;
    std::string Getstr() const;
private:
    const int m_year;
    const int m_month;
    const int m_day;
};


#endif //PROJC___DATE_H
