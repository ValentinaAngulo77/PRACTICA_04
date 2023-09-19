// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 18/07/2023

// Fecha modificaci�n: 20/09/2023

// N�mero de ejericio: 1

// Problema planteado: Lee por teclado un a�o y calcula y muestra si es bisiesto

#include <iostream>

int main() {
    int a�o;

    std::cout << "Ingresa un a�o: ";
    std::cin >> a�o;

    if ((a�o % 4 == 0 && a�o % 100 != 0) || (a�o % 400 == 0)) {
        std::cout << a�o << " es un a�o bisiesto." << std::endl;
    } else {
        std::cout << a�o << " no es un a�o bisiesto." << std::endl;
    }

    return 0;
}
