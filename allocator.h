#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <iostream>

template<class T>
class Allocator {
public:
    typedef T value_type;

    Allocator() {}

    value_type *allocate(size_t count) {
        std::cout << "Allocated " << count * sizeof(T) << " bytes" << std::endl;
        return static_cast<T *>(malloc(count * sizeof(T)));
    }

    void deallocate(value_type *p, size_t count) {
        std::cout << "Deallocated " << count * sizeof(T) << " bytes" << std::endl;
        free(p);
    }
};

#endif //ALLOCATOR_H
