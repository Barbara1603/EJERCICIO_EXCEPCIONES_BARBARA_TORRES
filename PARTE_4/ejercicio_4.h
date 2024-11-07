//
// Created by barba on 07/11/2024.
//

#ifndef EJERCICIO_4_H
#define EJERCICIO_4_H

#include <exception>
#include <string>


class MiExcepcion : public std::exception {
private:
    std::string mensaje;
public:
    explicit MiExcepcion(const std::string& msg);
    const char* what() const noexcept override;
};

void lanzaExcepcion();

#endif //EJERCICIO_4_H
