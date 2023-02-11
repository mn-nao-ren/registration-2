// REGIST.H - Registration class definition
// author KRI
// modified smr

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


class Registration {
public:

  Registration();

  unsigned GetCredits() const;


  unsigned GetCount() const;

private:
   /**
   * /brief A private member variable of the Registration class
   *
   * student ID number
   */
  long m_studentID;             // student ID number

  /**
   * /brief A private member variable of the Registration class
   *
   * semester year as a positive number
   */
  unsigned m_semester;          // semester year, number

  /**
   * /brief A private member variable of the Registration class
   *
   * number of courses
   */
  unsigned m_count;

   /**
   * /brief an array of Course objects
   *
   * an array of Course objects
   */
  Course m_courses[MaxCourses];
  Result m_results[MaxResults];
  Unit tempUnit;

};



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

