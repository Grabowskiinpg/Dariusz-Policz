#include"calc_RG.hpp"
#include <stdexcept>

long factorial(float fac) {
    int f=(int)fac;
    if(f==fac && f>=0) return ((f == 1 || f == 0) ? 1 : factorial(f - 1) * f);
    return 0; //jeszcze obsługa wyjątków
}