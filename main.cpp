
#include "main.h"
#include "PARTE_1/banderas_error.h"
#include "PARTE_2/ejercicio_2.h"
#include "PARTE_3/ejrcicio_3.h"
#include <iostream>
#include <stdexcept>

//EJERCICIO 1

int main() {
    int result = divide(5, 0);
    manejarERROR();

    //EJERCICIO 2

        // Uso de la versión que devuelve un valor de error
        int resultError = divideError(5, 0);
        if (resultError == -1) {
            std::cout << "Error: división por cero (valor de error)." << std::endl;
        } else {
            std::cout << "Resultado de divideError: " << resultError << std::endl;
        }

        // Uso de la versión que lanza una excepción
        try {
            int resultException = divideException(5, 0);
            std::cout << "Resultado de divideException: " << resultException << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cout << "Excepción capturada: " << e.what() << std::endl;
        }

//EJERCICIO 3


    try {
        func1();
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepción capturada en main: " << e.what() << std::endl;
    }


        return 0;

//EJERCICO 4




    }
