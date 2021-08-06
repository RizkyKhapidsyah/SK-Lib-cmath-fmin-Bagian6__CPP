#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::cout << "fmin(2,1)    = " << std::fmin(2, 1) << '\n'
        << "fmin(-Inf,0) = " << std::fmin(-INFINITY, 0) << '\n'
        << "fmin(NaN,-1) = " << std::fmin(NAN, -1) << '\n';

    _getch();
    return 0;
}