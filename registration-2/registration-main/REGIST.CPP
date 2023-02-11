#include "REGIST.H"

#ifndef REGIST_H
#define REGIST_H


#include <iostream>
#include "COURSE.H"
#include "unit.h"

using namespace std;

const unsigned MaxCourses = 10;

const unsigned MaxResults = 100000;


/**
 * \class Registration
 * \brief an object of class Registration will contain data about the registration,
 * which includes the student ID number, the semester year as a number, the number of courses represented by
 * the member variable called count, and an array of Courses.
 *
 * A Registration object is created by invoking the constructor.
 *
 * A Registration object can perform the action of getting the value of count using the GetCount() method.
 * It can also perform the action of getting the value of the credits with the GetCredits() method.
 * The ostream and istream operators are declared as friends of the registration class,
 * they can get access to the class's data, private or otherwise.
 *
 */



Registration::Registration()
{
  m_count = 0;
}


unsigned Registration::GetCount() const
{
  return m_count;
}


unsigned Registration::GetCredits() const
{
  unsigned sum = 0;
  Unit tempUnit;

  for(unsigned i = 0; i < m_count; i++){
    m_results[i].GetUnit(tempUnit);
    sum += tempUnit.GetCredits();
  }

  return sum;
}

istream & operator >>( istream & input, Registration & R )
{
    input >> R.m_studentID >> R.m_semester >> R.m_count;

    for(unsigned i = 0; i < R.m_count; i++)
        input >> R.m_results[i];

    return input;
}

ostream & operator <<( ostream & os, const Registration & R )
{
    os << "Student ID: " << R.m_studentID << '\n'
        << "Semester: " << R.m_semester << '\n';

    for(unsigned i = 0; i < R.m_count; i++)
        os << R.m_results[i] << '\n';

    return os;
}

#endif
