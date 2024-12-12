#include "utest.h"
#include "../fibonacci.h"


UTEST(fibonacci, test1) {
  ASSERT_EQ(fibonacci(0), 0);
  ASSERT_EQ(fibonacci(1), 1);
  ASSERT_EQ(fibonacci(2), 1);
  ASSERT_EQ(fibonacci(3), 2);
  ASSERT_EQ(fibonacci(9), 34);
}

