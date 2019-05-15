//
// Created by Bartosz on 06.05.2019.
//

#ifndef PROGRAM_CAL_BB_HPP
#define PROGRAM_CAL_BB_HPP
#include <math.h>
#include <iostream>
#include <cmath>



template<typename T>
T potega(T podstawa , T pot )       // Potęgowanie , pamiętać, że każda liczba podniesiona do potęgi 0 daje wynik 1
{
    return pow(podstawa,pot);
}


float pierw(int stopien_pierw , float liczba_podpierw ) ; // Pierwiastkowanie liczb o dowolnym stopniu


float ln(int x);  // Logarytm naturalny

float log_10(int x);  // Logarytm dziesiętny


template<typename T>
T sec(T x)
{
    return 1/std::cos(x);
}

template<typename T>
T cosec(T x)
{
    return 1/std::sin(x);
}


#endif //PROGRAM_CAL_BB_HPP
