//
// Created by user on 07.12.2023.
//

#ifndef PROJC___DATABASE_H
#define PROJC___DATABASE_H
#include "Date.h"
#include <string>
#include <set>
#include <map>

class DataBase {
public:

    void AddEvent(const Date& date, const std::string& str);
    void DeleteEvent(const Date& date, const std::string& event);
    void DeleteDate(const Date& date);
    void Print() const;
    void Find(const Date& date) const;

private:
    std::map < Date, std::set <std::string> > m_container;

};


#endif //PROJC___DATABASE_H
