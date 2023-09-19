// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 19/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 11

// Problema planteado:A un trabajador se le paga según las horas que trabaja en la semana, una tarifa de
// pago por hora. Si la cantidad de horas trabajadas es mayor a 40, la tarifa se incrementa
// en un 50%. Calcular el salario total del trabajador, además considere que si existe un
// anticipo se debe restar este valor al salario total. Al total debe descontar un 10% para
// el pago de impuestos. Se debe obtener:
// - Total ganado
// - Total descuentos
// - Pago neto
#include <iostream>

int main() {
    double tarifaHora, horasTrabajadas, anticipo;

    // Pedir al usuario que ingrese la tarifa por hora
    std::cout << "Ingrese la tarifa por hora: ";
    std::cin >> tarifaHora;

    // Pedir al usuario que ingrese las horas trabajadas
    std::cout << "Ingrese las horas trabajadas: ";
    std::cin >> horasTrabajadas;

    // Pedir al usuario que ingrese el anticipo (si existe)
    std::cout << "Ingrese el anticipo (si no hay, ingrese 0): ";
    std::cin >> anticipo;

    // Calcular el salario total antes de impuestos y descuentos
    double salarioTotal;
    if (horasTrabajadas > 40) {
        salarioTotal = 40 * tarifaHora + (horasTrabajadas - 40) * tarifaHora * 1.5;
    } else {
        salarioTotal = horasTrabajadas * tarifaHora;
    }

    // Restar el anticipo al salario total
    salarioTotal -= anticipo;

    // Calcular los descuentos (10% para impuestos)
    double impuestos = salarioTotal * 0.10;
    double descuentos = impuestos + anticipo;

    // Calcular el pago neto
    double pagoNeto = salarioTotal - descuentos;

    // Mostrar resultados
    std::cout << "Total ganado: $" << salarioTotal << std::endl;
    std::cout << "Total descuentos: $" << descuentos << std::endl;
    std::cout << "Pago neto: $" << pagoNeto << std::endl;

    return 0;
}
