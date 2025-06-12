#include"Class.h"
#include<iostream>

    void Counter::incr() { value++; }

    void Counter::decr() { value--; }

    void Counter::show() { std::cout << value << std::endl; }

    Counter::Counter(int value) {
        this->value = value;
    }

    Counter::Counter() {
        value = 1;
    }
