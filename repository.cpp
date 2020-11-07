#include <iostream> 
#include <iomanip> 
#include <cmath>
#include "repository.hpp"

using namespace std; 

// some conflict with name of "main" in googletest. We'll figure it out later.
int not_main() { 
    cout << "This is a sample program for use in making repositories in github." << endl;   //local commit test 
    return 0; 
} 

/** This is a longer description that can go on for 
 *  several lines if I want. But, most of the time it is 
 *  not really needed.
 */
double my_square_root(const double val)
{
    if (val < 0)
        return -1;
    else
        return sqrt(val);
}