#include "utest.h"

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

UTEST(foo, bar) {
  ASSERT_TRUE(1);
}

UTEST(fibonacci, test1) {
  ASSERT_EQ(fibonacci(1), 2);
}
