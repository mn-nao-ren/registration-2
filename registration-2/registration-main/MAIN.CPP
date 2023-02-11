

#include <iostream>
#include <fstream>
#include "course.h"  // Course class declaration
#include "regist.h"  // Registration class declaration

using namespace std;

int main()
{
  ifstream infile( "rinput.txt" );
  if( !infile ) return -1;

  Registration R;

  infile >> R;

  ofstream ofile( "routput.txt" );


  ofile << R
    << "Number of units = " << R.GetCount() << '\n'
    << "Total credits = " << R.GetCredits() << '\n';

  return 0;
}

