//
// Created by User on 11.05.2019.
//

#include "calc_MGr.hpp"

Monomial dirativeOfMonomial(const Monomial& m){
    Monomial deratived(m.get_index()*m.get_numeric(),m.get_index()-1);
    return deratived;
}

Monomial integralOfMonomialindefined(const Monomial& m){
    Monomial integrated(m.get_numeric()/(m.get_index()+1),m.get_index()+1);
    return integrated;
}
double integralOfMonomial(const Monomial& m, double start, double end){
    Monomial integrated= integralOfMonomialindefined(m);
    return integrated.get_numeric()*(pow(start,integrated.get_numeric())-pow(end,integrated.get_numeric()));
}