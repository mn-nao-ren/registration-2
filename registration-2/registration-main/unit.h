#ifndef UNIT_H
#define UNIT_H


#include <iostream>
#include "COURSE.H"

using namespace std;

const unsigned UNIT_NAME_SIZE = 30;
const unsigned UNIT_ID_SIZE = 8;


class Unit
{
private:
    char m_name[UNIT_NAME_SIZE];

    char m_unitID[UNIT_ID_SIZE];

    int m_credits;

public:
    Unit();

    Unit( const char * name, char * unitID, unsigned credits);

}










