// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 18/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 4

// Problema planteado:Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango
// de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones. La
// entrada de valores es para las calificaciones, debe hacerlo mediante una función.

#include <iostream>

// Función para ingresar N calificaciones y calcular la sumatoria y el promedio
void calcularSumaYPromedio(int n, double &suma, double &promedio) {
    suma = 0.0;
    promedio = 0.0;

    for (int i = 0; i < n; ++i) {
        double calificacion;
        do {
            std::cout << "Ingresa la calificación #" << i + 1 << " (entre 1 y 100): ";
            std::cin >> calificacion;
        } while (calificacion < 1 || calificacion > 100);

        suma += calificacion;
    }

    promedio = suma / n;
}

int main() {
    int n;
    double suma, promedio;

    std::cout << "Ingrese la cantidad de calificaciones a procesar: ";
    std::cin >> n;

    calcularSumaYPromedio(n, suma, promedio);

    std::cout << "La sumatoria de las calificaciones es: " << suma << std::endl;
    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;

    return 0;
}
