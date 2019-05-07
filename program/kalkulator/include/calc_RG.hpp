#ifndef KALKULATOR_CALC_RG_HPP
#define KALKULATOR_CALC_RG_HPP

#include <math.h> //M_PI oraz M_E

long factorial(float fac);

template<typename T>
void remember(double* adr, T val){
    *adr = (double)val;
}

double degrees(double rad);   //zmiana na stopnie

double radians(double deg);   //zmiana na radiany

double exponent(double x);


#endif //KALKULATOR_CALC_RG_HPP