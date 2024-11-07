
#include "main.h"
#include "PARTE_1/banderas_error.h"
#include "PARTE_2/ejercicio_2.h"
#include "PARTE_3/ejrcicio_3.h"
#include "PARTE_4/ejercicio_4.h"
#include "PARTE_7/ejercicio_7.h"
#include "PARTE_5/ejercicio_5.h"
#include "PARTE_6/ejercicio_6.h"
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
    //EJERCICIO 4
    try {
        void lanzaExcepcion();
    } catch (const MiExcepcion& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }

    //EJERCICIO 5

    try {
        try {
            lanzaExcepcion();
        }
        catch (const std::runtime_error& e) {
            std::cout << "Excepción capturada y manejada. Reactivando..." << std::endl;
            throw; // Relanza la excepción
        }
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepción reactivada capturada: " << e.what() << std::endl;
    }

    //EJERCICIO 6

    lanzaExcepcion();

//EJERCICIO 7
    std::ofstream file("archivo.txt");

    try {
        file.close(); // Cierra el archivo para simular un error
        escribeEnArchivo(file);
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }

    // Asegurarse de que el archivo esté cerrado
    if (file.is_open()) {
        file.close();
    }
    return 0;
}