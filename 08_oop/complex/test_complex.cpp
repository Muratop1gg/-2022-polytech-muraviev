#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "complex.h"


TEST_CASE("sum of complex numbers")
{
  CHECK_EQ(Complex(1, 0)+Complex(2, 0), Complex(3, 0));
  CHECK_EQ(Complex(-1, 0)+Complex(2, 0), Complex(1, 0));
  CHECK_EQ(Complex(1, 1)+Complex(0, 2), Complex(1, 3));
  CHECK_EQ(Complex(0, -2)+Complex(0, 3), Complex(0, 1));
}

TEST_CASE("sub of complex numbers")
{
  CHECK_EQ(Complex(1, 0)-Complex(2, 0), Complex(-1, 0));
  CHECK_EQ(Complex(-1, 0)-Complex(2, 0), Complex(-3, 0));
  CHECK_EQ(Complex(1, 1)-Complex(0, 2), Complex(1, -1));
  CHECK_EQ(Complex(0, -2)-Complex(0, 3), Complex(0, -5));
}

TEST_CASE("abs of complex numbers")
{
  CHECK_EQ(Complex(1, 0).abs(), 1);
  CHECK_EQ(Complex(-1, 0).abs(), 1);
  CHECK_EQ(Complex(1, 1).abs(), doctest::Approx(1.41421).epsilon(0.01));
  CHECK_EQ(Complex(0, -2).abs(), 2);
}