#ifndef RESULT_H
#define RESULT_H


#include <iostream>
#include "course.h"

using namespace std;


class Result {
public:

    Result();

    float GetMark() const;

    void SetMark(float mark);
    void GetUnit(Unit &unit) const;
    void SetUnit(const Unit &unit);
private:
    float m_mark;
    Unit m_object_unit;

};
























