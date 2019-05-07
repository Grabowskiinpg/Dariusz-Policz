#include"calc_RG.hpp"
#include <stdexcept>
#include <iostream>

long factorial(float fac) {
    try{
        int f = (int) fac;
        if (f == fac && f >= 0) return ((f == 1 || f == 0) ? 1 : factorial(f - 1) * f);
        throw std::invalid_argument("Silnia nie jest zdefiniowana dla podanego argumentu");
    }catch(const std::invalid_argument& err){
        std::cout<<err.what();
    }
    return 0; //to edit
}

// jeszcze testy do poniższych (szablony?)
double degrees(double rad){
    return rad*180/M_PI;
}

double radians(double deg){
    return deg*M_PI/180;
}

double exponent(double x){
    return std::exp(x);
}