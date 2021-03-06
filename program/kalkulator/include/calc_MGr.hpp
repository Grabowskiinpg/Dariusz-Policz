//
// Created by User on 11.05.2019.
//

#ifndef KALKULATOR_CALC_MGR_HPP
#define KALKULATOR_CALC_MGR_HPP

#include "calc_MG.hpp"

class Monomial{ //jednomian
private:
    double numeric_factor_;
    double index_;
public:
    Monomial(double numeric_factor, double index):numeric_factor_(numeric_factor),index_(index){}
    Monomial(double index): Monomial(1,index){}
    Monomial():Monomial(1,1){}

    double get_index()  const{return index_;}
    double get_numeric() const{return numeric_factor_;}
};

class Polynomial{ //wielomian
private:
    std::vector <Monomial> polynomial_;
public:
    Polynomial(const std::vector<Monomial>& v) : polynomial_(v) {}

    Polynomial(std::size_t n = 3) : polynomial_(n, 0) {}
    std::size_t size() const { return polynomial_.size(); }

    const Monomial& operator[](std::size_t pos) const { return polynomial_[pos]; }

    Monomial& operator[](std::size_t pos) { return polynomial_[pos]; }

    typename std::vector<Monomial>::const_iterator cbegin() const { return polynomial_.cbegin(); }

    typename std::vector<Monomial>::const_iterator cend() const { return polynomial_.cend(); }

    typename std::vector<Monomial>::iterator begin() { return polynomial_.begin(); }

    typename std::vector<Monomial>::const_iterator begin() const { return polynomial_.cbegin(); }

    typename std::vector<Monomial>::iterator end() { return polynomial_.end(); }

    typename std::vector<Monomial>::const_iterator end() const { return polynomial_.cend(); }

};

Monomial dirativeOfMonomial(const Monomial& m);

Monomial integralOfMonomialindefined(const Monomial& m);

double integralOfMonomial(const Monomial& m, double start, double end);



template<typename T>
Matrix<T> add_matrices(const Matrix<T>& m1, const Matrix<T>& m2) {
    Matrix<T> m_sum(m1);
    std::transform(m1.begin(), m1.end(), m2.begin(), m_sum.begin(),
                   [](const auto& v1, const auto& v2) { return add_vectors(v1, v2); });
    return m_sum;
}

template<typename T>
Matrix<T> multiplication_matrix(const Matrix<T>& m1,const Matrix<T>& m2) {
    Matrix<T> multi(m1.size(),m2[0].size());
    for(size_t i=0; i<multi.size();i++){
        for(size_t j=0;j<multi[i].size();j++){
            multi[i][j]=0;
            for(size_t k=0; k<=m2.size();k++){
                multi[i][j]+=m1[i][k]*m2[k][j];
            }

        }
    }
    return multi;
} // funkcja jeszcze nie dopracowana

#endif //KALKULATOR_CALC_MGR_HPP
