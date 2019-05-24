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
    return integrated.get_numeric()*(pow(end,integrated.get_index())-pow(start,integrated.get_index()));
}
/*
template<typename T>
Matrix<T> add_matrix(const Matrix& m1,const Matrix& m2){
    Matrix<T> sum;

}*/