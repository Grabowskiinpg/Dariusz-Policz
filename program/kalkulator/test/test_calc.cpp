#include <gtest/gtest.h>
#include "../include/calc_RG.hpp"
#include "../include/calc_MG.hpp"
#include "../include/calc_BB.hpp"
#include "../include/calc_MGr.hpp"
#include <gmock/gmock.h>

TEST(CalcTest, Sum){
    EXPECT_EQ(sum<int> (2, 3), 5);
}

TEST(CalcTest, Multiplication){
    EXPECT_EQ(multiplication<int> (2, 2), 4);
}

TEST(CalcTest, Subtraction){
    EXPECT_EQ(subtraction<int> (2, 3), -1);
}

TEST(CalcTest, Division){
    EXPECT_EQ(subtraction<int> (4, 2), 2);
}

TEST(CalcTest, Percent){
    EXPECT_EQ(percent<int> (4, 2), 200);
}

TEST(CalcTest, Sin){
    EXPECT_EQ(sin<double> (M_PI/2), 1);
}

TEST(CalcTest, Cos){
    EXPECT_EQ(cos<double> (M_PI/4), sqrt(2)/2);
}

TEST(CalcTest, Tan){
    EXPECT_EQ(tan<double> (M_PI/3), 1/cot<double> (M_PI/3));
}

TEST(CalcTest, Cot){
    EXPECT_EQ(cot<double> (M_PI/4), 1/tan<double> (M_PI/4));
}

TEST(ClacTest, Asin){
    EXPECT_EQ(asin<double> (1), M_PI/2);
}

TEST(ClacTest, Acos){
    EXPECT_EQ(acos<double> (sqrt(2)/2), M_PI/4);
}

TEST(ClacTest, Atan){
    EXPECT_EQ(atan<double> (1), M_PI/4);
}

TEST(ClacTest, Acot){
    EXPECT_EQ(acot<double> (sqrt(3)), M_PI/2-M_PI/3);
}

TEST(CalcTest, Remember){
    double adr;
    remember(&adr, 5);

    EXPECT_EQ(adr, 5);
}

TEST(CalcTest, Factorial){
    ASSERT_NO_THROW({EXPECT_EQ(factorial(12), 479001600);});
    EXPECT_EQ(factorial(0.5), 0);
    EXPECT_EQ(factorial(-6.789), 0);
}

TEST(ClacTest, Cosh){
    EXPECT_EQ(cosh<double> (0), 1);
}

TEST(ClacTest, Sinh){
    EXPECT_EQ(sinh<double> (0), 0);
}

TEST(ClacTest, Tanh){
    EXPECT_EQ(tanh<double> (0), 0);
}

TEST(ClacTest, Coth){
    //*
    EXPECT_EQ(coth<double> (2), 1/tanh<double> (2));
}


TEST(CalTest, Pow){
    EXPECT_EQ(pow <int> (2,3),8);          //potęgowanie test
}

TEST(CalTest, Pierw){
    EXPECT_EQ(pierw  (3,-64), -4);          //pierwiastkowanie z dowolnego stopnia test
}


TEST(CalTest, Ln) {
    EXPECT_EQ(ln(1), 0);   // Logarytm naturalny test
}


TEST(CalTest, Log_10) {
    EXPECT_EQ(log_10(100), 2);  // Logarytm dziesiętny test
}

TEST(ClacTest, Abs){
    EXPECT_EQ(abs<int> (-2), 2);
}

TEST(ClacTest, Modulo){
    EXPECT_EQ(modulo<int> (5, 3), 2);
}

TEST(ClacTest, Floor){
    EXPECT_EQ(floor<double> (2.123), 2);
}

TEST(ClacTest, Ceil){
    EXPECT_EQ(ceil<double> (2.123), 3);
}

TEST(ClacTest, Mantysa){
    EXPECT_EQ(mantysa<double> (2.425), 0.425);
}

TEST(CalcTest_degrees,Degree){
    EXPECT_EQ(degrees(M_PI/2),90);
}

TEST(CalcTest_radians,Radians){
    EXPECT_EQ(radians(90.0),M_PI/2);
}

TEST(CalcTest_exponent,Exponent){
    EXPECT_EQ(exponent(2),std::exp(2));
}

TEST(CalcTest, Vector){
    Vector<int> v(std::vector<int> {1, 2, 3});

    ASSERT_EQ(v.size(), 3U);
    EXPECT_EQ(v[0], 1);
    EXPECT_EQ(v[1], 2);
    EXPECT_EQ(v[2], 3);
}

TEST(CalcTest, Norm){
    Vector<int> v(std::vector<int> {0, 4, 3});

    EXPECT_EQ(v.norm(), 5);
}

TEST(CalcTest, AddVectors){
    Vector<int> v1(std::vector<int> {0, 1, 2});
    Vector<int> v2(std::vector<int> {-1, 2, 2});
    Vector<int> v = add_vectors<int> (v1, v2);

    ASSERT_EQ(v.size(), 3U);
    EXPECT_EQ(v[0], -1);
    EXPECT_EQ(v[1], 3);
    EXPECT_EQ(v[2], 4);
}

TEST(CalcTest, Matrix){
    Matrix<int> m(std::vector<std::vector<int>>{
            std::vector<int>{11, 12},
            std::vector<int>{21, 22}
    });

    ASSERT_EQ(m.size(), 2U);
    EXPECT_EQ(m[0].size(), 2U);
    EXPECT_EQ(m[0][0], 11);
    EXPECT_EQ(m[0][1], 12);
    EXPECT_EQ(m[1].size(), 2U);
    EXPECT_EQ(m[1][0], 21);
    EXPECT_EQ(m[1][1], 22);
}

/*TEST(CalcTest, MatrixDet){
}*/

TEST(CalcTest, Sec) {
    EXPECT_EQ(sec<double>(M_PI / 3), 2) ;
}

TEST(CalcTest, Cosec) {
    EXPECT_EQ(cosec<double>(M_PI / 4), sqrt(2)) ;
}

TEST(CalcTest, Skalmultip){
    Vector<double> v1({-1, 0, 5});
    Vector<double> v2({3, 3, 3});
    EXPECT_EQ(skalmultip(v1, v2), 12.0);
    Vector<double> v3({0, 1.5});
    EXPECT_EQ(skalmultip(v1, v3), -1.0); //przydałoby się coś jeszcze
}

TEST(CalcTest, DerativationM){
    Monomial m1 (5,10);
    Monomial m2 (2.5,1.5);
    EXPECT_EQ(dirativeOfMonomial(m1).get_numeric(),50);
    EXPECT_EQ(dirativeOfMonomial(m2).get_numeric(),1.5*2.5);
    EXPECT_EQ(dirativeOfMonomial(m1).get_index(),9);
    EXPECT_EQ(dirativeOfMonomial(m2).get_index(),0.5);

}
TEST(CalcTest, IntegrationMI){
    Monomial m1 (5,10);
    Monomial m2 (2.5,1.5);
    EXPECT_EQ(integralOfMonomialindefined(m1).get_numeric(),5.0/11.0);
    EXPECT_EQ(integralOfMonomialindefined(m2).get_numeric(),2.5/2.5);
    EXPECT_EQ(integralOfMonomialindefined(m1).get_index(),11);
    EXPECT_EQ(integralOfMonomialindefined(m2).get_index(),2.5);

}


/*TEST(CalcTest, Vecmultip){
    Vector<double> v1({-1, 0, 5});
    Vector<double> v2({3, 3, 3});
    EXPECT_EQ(vecmultip(v1, v2), 12.0);
    
    
    
    Vector<double> v3({0, 1.5});
    EXPECT_EQ(skalmultip(v1, v3), -1.0); //nieskończony test
}*/