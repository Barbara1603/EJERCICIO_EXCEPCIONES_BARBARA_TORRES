//
// Created by barba on 07/11/2024.
//

#include "ejrcicio_3.h"
#include <stdexcept>

void func3() {
    throw std::runtime_error("Error en func3");
}

void func2() {
    func3();
}

void func1() {
    func2();
}