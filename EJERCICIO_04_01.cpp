// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 18/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 1

// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto

#include <iostream>

int main() {
    int año;

    std::cout << "Ingresa un año: ";
    std::cin >> año;

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        std::cout << año << " es un año bisiesto." << std::endl;
    } else {
        std::cout << año << " no es un año bisiesto." << std::endl;
    }

    return 0;
}
