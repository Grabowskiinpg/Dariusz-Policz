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
    EXPECT_EQ(sin(M_PI/2), 1);
}

TEST(CalcTest, Cos){
    EXPECT_EQ(cos(M_PI/4), sqrt(2)/2);
}

TEST(CalcTest, Tan){
    EXPECT_EQ(tan(M_PI/3), 1/cot(M_PI/3));
}

TEST(CalcTest, Cot){
    EXPECT_EQ(cot(M_PI/4), 1/tan(M_PI/4));
}