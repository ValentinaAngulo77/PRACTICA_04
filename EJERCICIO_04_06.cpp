// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 18/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 6

// Problema planteado: Escriba un programa que mediante una función determine el pago por el servicio de
// estacionamiento de coches en un parqueo, teniendo en cuenta que la primera hora de
// estadía se paga 8 Bs., y las restantes 3 Bs. c/hora. Si el uso del servicio es menor a una
// hora se cobra por la hora y de igual manera si excede la hora se cobra por la hora
// siguiente.
// Verificar con los siguientes casos:
// Hora Entrada Minuto de entrada Hora Salida Minuto Salida Tiempo Pago
// 09 35 10 15 1 hora 08 Bs.
// 11 10 12 20 2 horas 11 Bs
// 17 55 21 30 4 horas 17 Bs.
#include <iostream>

// Función para calcular el pago por estacionamiento
double calcularPagoEstacionamiento(int horaEntrada, int minutoEntrada, int horaSalida, int minutoSalida) {
    // Calcular la duración de la estadía en minutos
    int duracionMinutos = (horaSalida - horaEntrada) * 60 + (minutoSalida - minutoEntrada);

    // Verificar si la duración es menor a 60 minutos
    if (duracionMinutos <= 60) {
        return 8.0; // Cobrar 8 Bs. por la primera hora completa
    } else {
        // Calcular el número de horas adicionales después de la primera hora completa
        int horasAdicionales = (duracionMinutos - 60) / 60;

        // Calcular el pago total
        double pago = 8.0 + (horasAdicionales * 3.0);
        return pago;
    }
}

int main() {
    int horaEntrada, minutoEntrada, horaSalida, minutoSalida;

    std::cout << "Hora de entrada: ";
    std::cin >> horaEntrada;

    std::cout << "Minuto de entrada: ";
    std::cin >> minutoEntrada;

    std::cout << "Hora de salida: ";
    std::cin >> horaSalida;

    std::cout << "Minuto de salida: ";
    std::cin >> minutoSalida;

    double pago = calcularPagoEstacionamiento(horaEntrada, minutoEntrada, horaSalida, minutoSalida);

    std::cout << "El pago por el servicio de estacionamiento es: " << pago << " Bs." << std::endl;

    return 0;
}
