//
// Created by Michał on 04.05.2019.
//

#ifndef KALKULATOR_CALC_MG_HPP
#define KALKULATOR_CALC_MG_HPP
#include <cmath>
#include <iostream>
//Podstawowe funckje (prototypy)
template<typename T>
T sum(T a , T b){
    return a + b;
}

template<typename T>
T multiplication(T a, T b){
    return a * b;
}

template<typename T>
T subtraction(T a, T b){
    return a - b;
}

template<typename T>
T division(T a, T b){
    //Pamiętać o tym, że nie dzielimy przez 0
    return a / b;
}


template<typename T>
T percent(T a, T b){
    return division<T> (a, b) * 100;
}

template<typename T>
T sin(T x){
    return std::sin(x);
}

template<typename T>
T cos(T x){
    return std::cos(x);
}

template<typename T>
T tan(T x){
    //Pamiętać, że dla M_PI/2 jest nieokreślony
    return sin<T> (x)/cos<T> (x);
}

template<typename T>
T cot(T x){
    //Pamiętać, że dla 0 jest nieokreślony
    return cos<T> (x)/sin<T> (x);
}

template<typename T>
T acos(T x){
    //Pamiętać, że dziedzina to [0, M_PI]
    return std::acos(x);
}

template<typename T>
T asin(T x){
    //Pamiętać, że dziedzina to [-M_PI/2, M_PI/2]
    return std::asin(x);
}

template<typename T>
T atan(T x){
    return std::atan(x);
}

template<typename T>
T acot(T x){
    return M_PI/2 - atan<T> (x);
}

template<typename T>
T cosh(T x){
    return cosh(x);
}

template<typename T>
T sinh(T x){
    return sinh(x);
}

template<typename T>
T tanh(T x){
    return tanh(x);
}

template<typename T>
T coth(T x){
    //Pamiętać, że w 0 nie można
    return cosh<T> (x)/sinh<T> (x);
}
#endif //KALKULATOR_CALC_MG_HPP
