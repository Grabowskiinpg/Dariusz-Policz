#include <gtest/gtest.h>
#include "../include/calc_RG.hpp"
#include "../include/calc_MG.hpp"
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