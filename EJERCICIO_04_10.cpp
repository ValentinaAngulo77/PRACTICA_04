// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 19/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 10

// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento que
// dependerá del número de computadoras que compre. Si las computadoras son menos de
// cinco se les dará un 10% de descuento sobre el total de la compra; si el número de
// computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
// descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada
// computadora es un valor que el usuario ingrese desde el teclado. Se debe obtener el
// precio total que el cliente debe pagar y el valor del descuento
#include <iostream>

int main() {
    int cantidadComputadoras;
    double precioComputadora, precioTotal, descuento;

    // Pedir al usuario que ingrese la cantidad de computadoras
    std::cout << "Ingrese la cantidad de computadoras: ";
    std::cin >> cantidadComputadoras;

    // Pedir al usuario que ingrese el precio de cada computadora
    std::cout << "Ingrese el precio de cada computadora: ";
    std::cin >> precioComputadora;

    // Calcular el precio total antes del descuento
    precioTotal = cantidadComputadoras * precioComputadora;

    // Calcular el descuento según la cantidad de computadoras
    if (cantidadComputadoras < 5) {
        descuento = precioTotal * 0.10; // 10% de descuento
    } else if (cantidadComputadoras < 10) {
        descuento = precioTotal * 0.20; // 20% de descuento
    } else {
        descuento = precioTotal * 0.40; // 40% de descuento
    }

    // Calcular el precio total después del descuento
    double precioFinal = precioTotal - descuento;

    // Mostrar resultados
    std::cout << "Precio total antes del descuento: $" << precioTotal << std::endl;
    std::cout << "Descuento aplicado: $" << descuento << std::endl;
    std::cout << "Precio total con descuento: $" << precioFinal << std::endl;

    return 0;
}
