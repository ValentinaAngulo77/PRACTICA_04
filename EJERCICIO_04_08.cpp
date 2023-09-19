// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 19/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 8

// Problema planteado: Escribir un programa que lea el salario de un empleado y mediante una función
// efectué un incremento salarial en base a la siguiente escala:
// • Si el salario es menor < 1000 Bs. incremente en un 20%
// • Si el salario es mayor o igual a 1000 pero es menor a 3000 Bs. Incremente en
// un 15%
// • Si el salario es mayor o igual a 3000 pero es menor a 6000 Bs. Incremente en
// un 10%
// • Si el salario es mayor o igual a 6000 Bs. Incremente en un 5%
// La función debe obtener el incremento y el nuevo salario.
#include <iostream>

// Función para calcular el incremento y el nuevo salario
void calcularIncremento(double salario, double &incremento, double &nuevoSalario) {
    if (salario < 1000) {
        incremento = salario * 0.20;
    } else if (salario < 3000) {
        incremento = salario * 0.15;
    } else if (salario < 6000) {
        incremento = salario * 0.10;
    } else {
        incremento = salario * 0.05;
    }

    nuevoSalario = salario + incremento;
}

int main() {
    double salario, incremento, nuevoSalario;

    // Pedir al usuario que ingrese el salario
    std::cout << "Ingrese el salario del empleado en Bs.: ";
    std::cin >> salario;

    // Calcular el incremento y el nuevo salario
    calcularIncremento(salario, incremento, nuevoSalario);

    // Mostrar resultados
    std::cout << "El incremento es de: " << incremento << " Bs." << std::endl;
    std::cout << "El nuevo salario es de: " << nuevoSalario << " Bs." << std::endl;

    return 0;
}
