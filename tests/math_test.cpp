#include <gtest/gtest.h>
#include "../math.cpp"

// Test fixture for Math operations
class MathTest : public ::testing::Test {
protected:
    Math math;
};

// Addition tests
TEST_F(MathTest, AddPositiveNumbers) {
    EXPECT_DOUBLE_EQ(5.0, Math::add(2.0, 3.0));
}

TEST_F(MathTest, AddNegativeNumbers) {
    EXPECT_DOUBLE_EQ(-5.0, Math::add(-2.0, -3.0));
}

TEST_F(MathTest, AddMixedNumbers) {
    EXPECT_DOUBLE_EQ(1.0, Math::add(5.0, -4.0));
}

TEST_F(MathTest, AddZero) {
    EXPECT_DOUBLE_EQ(3.0, Math::add(3.0, 0.0));
}

// Subtraction tests
TEST_F(MathTest, SubtractPositiveNumbers) {
    EXPECT_DOUBLE_EQ(1.0, Math::subtract(5.0, 4.0));
}

TEST_F(MathTest, SubtractNegativeNumbers) {
    EXPECT_DOUBLE_EQ(-1.0, Math::subtract(-5.0, -4.0));
}

TEST_F(MathTest, SubtractResultNegative) {
    EXPECT_DOUBLE_EQ(-1.0, Math::subtract(2.0, 3.0));
}

TEST_F(MathTest, SubtractZero) {
    EXPECT_DOUBLE_EQ(3.0, Math::subtract(3.0, 0.0));
}

// Multiplication tests
TEST_F(MathTest, MultiplyPositiveNumbers) {
    EXPECT_DOUBLE_EQ(6.0, Math::multiply(2.0, 3.0));
}

TEST_F(MathTest, MultiplyNegativeNumbers) {
    EXPECT_DOUBLE_EQ(6.0, Math::multiply(-2.0, -3.0));
}

TEST_F(MathTest, MultiplyMixedNumbers) {
    EXPECT_DOUBLE_EQ(-6.0, Math::multiply(2.0, -3.0));
}

TEST_F(MathTest, MultiplyByZero) {
    EXPECT_DOUBLE_EQ(0.0, Math::multiply(5.0, 0.0));
}

// Division tests
TEST_F(MathTest, DividePositiveNumbers) {
    EXPECT_DOUBLE_EQ(2.0, Math::divide(6.0, 3.0));
}

TEST_F(MathTest, DivideNegativeNumbers) {
    EXPECT_DOUBLE_EQ(2.0, Math::divide(-6.0, -3.0));
}

TEST_F(MathTest, DivideMixedNumbers) {
    EXPECT_DOUBLE_EQ(-2.0, Math::divide(6.0, -3.0));
}

TEST_F(MathTest, DivideByZeroThrows) {
    EXPECT_THROW(Math::divide(5.0, 0.0), std::invalid_argument);
}

TEST_F(MathTest, DivideZeroByNumber) {
    EXPECT_DOUBLE_EQ(0.0, Math::divide(0.0, 5.0));
}

TEST_F(MathTest, DivideFractionalResult) {
    EXPECT_DOUBLE_EQ(0.5, Math::divide(1.0, 2.0));
}
