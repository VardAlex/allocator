#include <iostream>
#include <vector>
#include "allocator.h"

void outVectorAddr(std::vector<int, Allocator<int>> &vector) {
    for (auto &iter: vector)
        std::cout << iter << " " << &iter << std::endl;
}

int main() {
    Allocator<int> myAllocator;
    std::vector<int, Allocator<int>> testVector(myAllocator);
    for (int i = 0; i < 10; ++i) {
        testVector.push_back(i);
        std::cout << "Vector size/capacity = " << testVector.size() << " " << testVector.capacity() << std::endl;
    }
    outVectorAddr(testVector);
    return 0;
}
