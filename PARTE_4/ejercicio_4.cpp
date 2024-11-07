//
// Created by barba on 07/11/2024.
//

#include "ejercicio_4.h"
#include<iostream>
#include<string>



MiExcepcion::MiExcepcion(const std::string& msg) : mensaje(msg) {}


const char* MiExcepcion::what() const noexcept {
    return mensaje.c_str();
}