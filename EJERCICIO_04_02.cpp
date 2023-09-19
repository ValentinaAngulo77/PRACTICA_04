// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 18/07/2023

// Fecha modificaci�n: 20/09/2023

// N�mero de ejericio: 2

// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>

int main() {
    // Obtener la fecha actual
    int a�oActual, mesActual, diaActual;

    std::cout << "Ingresa la fecha actual (a�o mes d�a): ";
    std::cin >> a�oActual >> mesActual >> diaActual;

    // Solicitar la fecha de nacimiento al usuario
    int a�oNacimiento, mesNacimiento, diaNacimiento;
    std::cout << "Ingresa tu fecha de nacimiento (a�o mes d�a): ";
    std::cin >> a�oNacimiento >> mesNacimiento >> diaNacimiento;

    // Calcular la edad
    int edad = a�oActual - a�oNacimiento;

    // Ajustar la edad si el cumplea�os a�n no ha ocurrido este a�o
    if (mesNacimiento > mesActual || (mesNacimiento == mesActual && diaNacimiento > diaActual)) {
        edad--;
    }

    std::cout << "Tu edad es: " << edad << " a�os." << std::endl;

    return 0;
}
