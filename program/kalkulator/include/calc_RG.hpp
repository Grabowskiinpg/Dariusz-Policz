#ifndef KALKULATOR_CALC_RG_HPP
#define KALKULATOR_CALC_RG_HPP

#include <math.h> //M_PI oraz M_E
#include <calc_MG.hpp>

long factorial(float fac);

template<typename T>
void remember(double* adr, T val){
    *adr = (double)val;
}

double degrees(double rad);   //zmiana na stopnie

double radians(double deg);   //zmiana na radiany

double exponent(double x);

template<typename T>
double skalmultip(const Vector<T>& v1, const Vector<T>& v2){
    if(v1.size() != v2.size()) return -1; //wyjątek
    double sum = 0;
    for(std::size_t i = 0; i < v1.size(); i++){
        sum += v1[i] * v2[i];
    }
    return sum;
}

template<typename T>
Vector<T> vecmultip(const Vector<T>& v1, const Vector<T>& v2){ //do testów
    if(v1.size!=3 || v1.size()!=v1.size()) return {};
    Vector<T> result({v1[1]*v2[2]-v1[2]*v2[1], v1[2]*v2[0]-v1[0]*v2[2], v1[0]*v2[1]-v1[1]*v2[0]});
    return result;
}

#endif //KALKULATOR_CALC_RG_HPP