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

// poniższe 3 funkcje już chyba ktoś napisał i przetestował
double degrees(double rad){
    return rad*180/M_PI;
}

double radians(double deg){
    return deg*M_PI/180;
}

double exponent(double x){
    return std::exp(x);
}

double integralOfPolynomial(const Polynomial& poly, double start, double end){
    double result = 0;
    for(const auto e : poly) result += integralOfMonomial(e, start, end);
    return result;
}

Polynomial integralOfPolynomialIndefinited(const Polynomial& poly){
    std::vector<Monomial> result;
    for(const auto& e : poly){
        result.push_back(integralOfMonomialindefined(e));
    }
    Polynomial ret(result);
    return ret;
}
