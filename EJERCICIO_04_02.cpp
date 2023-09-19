// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 18/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 2

// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>

int main() {
    // Obtener la fecha actual
    int añoActual, mesActual, diaActual;

    std::cout << "Ingresa la fecha actual (año mes día): ";
    std::cin >> añoActual >> mesActual >> diaActual;

    // Solicitar la fecha de nacimiento al usuario
    int añoNacimiento, mesNacimiento, diaNacimiento;
    std::cout << "Ingresa tu fecha de nacimiento (año mes día): ";
    std::cin >> añoNacimiento >> mesNacimiento >> diaNacimiento;

    // Calcular la edad
    int edad = añoActual - añoNacimiento;

    // Ajustar la edad si el cumpleaños aún no ha ocurrido este año
    if (mesNacimiento > mesActual || (mesNacimiento == mesActual && diaNacimiento > diaActual)) {
        edad--;
    }

    std::cout << "Tu edad es: " << edad << " años." << std::endl;

    return 0;
}
