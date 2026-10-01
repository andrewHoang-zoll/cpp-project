#include <gtest/gtest.h>

#include "../math.cpp"

TEST(MathTest, AddPositiveNumbers) {
    EXPECT_DOUBLE_EQ(Math::add(2.0, 3.0), 5.0);
}

TEST(MathTest, AddNegativeNumbers) {
    EXPECT_DOUBLE_EQ(Math::add(-2.0, -3.0), -5.0);
}

TEST(MathTest, AddMixedSigns) {
    EXPECT_DOUBLE_EQ(Math::add(5.0, -3.0), 2.0);
    EXPECT_DOUBLE_EQ(Math::add(-5.0, 3.0), -2.0);
}

TEST(MathTest, AddZero) {
    EXPECT_DOUBLE_EQ(Math::add(0.0, 5.0), 5.0);
    EXPECT_DOUBLE_EQ(Math::add(-5.0, 0.0), -5.0);
    EXPECT_DOUBLE_EQ(Math::add(0.0, 0.0), 0.0);
}

TEST(MathTest, SubtractPositiveNumbers) {
    EXPECT_DOUBLE_EQ(Math::subtract(7.0, 3.0), 4.0);
}

TEST(MathTest, SubtractNegativeNumbers) {
    EXPECT_DOUBLE_EQ(Math::subtract(-7.0, -3.0), -4.0);
}

TEST(MathTest, SubtractMixedSigns) {
    EXPECT_DOUBLE_EQ(Math::subtract(5.0, -3.0), 8.0);
    EXPECT_DOUBLE_EQ(Math::subtract(-5.0, 3.0), -8.0);
}

TEST(MathTest, SubtractZero) {
    EXPECT_DOUBLE_EQ(Math::subtract(5.0, 0.0), 5.0);
    EXPECT_DOUBLE_EQ(Math::subtract(0.0, 5.0), -5.0);
    EXPECT_DOUBLE_EQ(Math::subtract(0.0, 0.0), 0.0);
}

TEST(MathTest, MultiplyPositiveNumbers) {
    EXPECT_DOUBLE_EQ(Math::multiply(4.0, 3.0), 12.0);
}

TEST(MathTest, MultiplyNegativeNumbers) {
    EXPECT_DOUBLE_EQ(Math::multiply(-4.0, -3.0), 12.0);
}

TEST(MathTest, MultiplyMixedSigns) {
    EXPECT_DOUBLE_EQ(Math::multiply(4.0, -3.0), -12.0);
    EXPECT_DOUBLE_EQ(Math::multiply(-4.0, 3.0), -12.0);
}

TEST(MathTest, MultiplyByZero) {
    EXPECT_DOUBLE_EQ(Math::multiply(4.0, 0.0), 0.0);
    EXPECT_DOUBLE_EQ(Math::multiply(0.0, -4.0), 0.0);
    EXPECT_DOUBLE_EQ(Math::multiply(0.0, 0.0), 0.0);
}

TEST(MathTest, DividePositiveNumbers) {
    EXPECT_DOUBLE_EQ(Math::divide(12.0, 3.0), 4.0);
    EXPECT_DOUBLE_EQ(Math::divide(7.0, 2.0), 3.5);
}

TEST(MathTest, DivideNegativeNumbers) {
    EXPECT_DOUBLE_EQ(Math::divide(-12.0, -3.0), 4.0);
}

TEST(MathTest, DivideMixedSigns) {
    EXPECT_DOUBLE_EQ(Math::divide(12.0, -3.0), -4.0);
    EXPECT_DOUBLE_EQ(Math::divide(-12.0, 3.0), -4.0);
}

TEST(MathTest, DivideByZeroThrows) {
    EXPECT_THROW(Math::divide(1.0, 0.0), std::invalid_argument);
    EXPECT_THROW(Math::divide(-1.0, -0.0), std::invalid_argument);
}
