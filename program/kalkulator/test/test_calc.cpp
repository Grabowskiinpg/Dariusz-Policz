#include <gtest/gtest.h>
#include "../include/calc_RG.hpp"
#include "../include/calc_MG.hpp"
#include "../include/calc_BB.hpp"
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
    EXPECT_EQ(pow <int> (2,3),8);
}

