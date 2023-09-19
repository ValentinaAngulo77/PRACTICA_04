// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 19/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 13

// Problema planteado: Realice una función que enviándole dos numero calcule el máximo común divisor con el
// algoritmo de Euclides.
#include <iostream>

// Función para calcular el máximo común divisor (MCD) con el algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Pedir al usuario que ingrese dos números
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    // Calcular el MCD usando la función
    int mcd = calcularMCD(num1, num2);

    // Mostrar el resultado
    std::cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << std::endl;

    return 0;
}
