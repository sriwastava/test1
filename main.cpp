#include <iostream>
#include "fibonacci.h"

int main() {
    std::cout << "hellow" << std::endl;
    for (int i=0; i<10; ++i) {
        std::cout << "fibonacci(" << i << ")=" << fibonacci(i) << std::endl;
    }
}