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

double my_square_root(const double val)
{
    if (val < 0)
        return -1;
    else
        return sqrt(val);
}