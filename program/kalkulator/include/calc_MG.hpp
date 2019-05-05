//
// Created by Michał on 04.05.2019.
//

#ifndef KALKULATOR_CALC_MG_HPP
#define KALKULATOR_CALC_MG_HPP
#include <cmath>
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
    //pamiętać o tym, że nie dzielimy przez 0
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
    return sin(x)/cos(x);
}

template<typename T>
T cot(T x){
    return cos(x)/sin(x);
}
#endif //KALKULATOR_CALC_MG_HPP
