// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 19/07/2023

// Fecha modificaci�n: 20/09/2023

// N�mero de ejericio: 9

// Problema planteado: Una empresa efect�a el control de asistencia de sus empleados mediante un lector
// biom�trico, el horario en la entrada es a las 8:00 a.m y la salida es a las 16:00 p.m. El
// empleado tiene una tolerancia de 10 minutos en la entrada, si llega m�s all� de los 10
// minutos de tolerancia se penaliza todos los minutos de atraso (es decir si llega a las 8:12
// se penalizan los 12 minutos). De igual forma no puede salir antes del horario establecido
// en la salida, (si lo hace se penaliza los minutos faltantes), pero si el empleado entra
// antes o sale despu�s de sus horarios el sistema solo toma en cuenta las 8 horas laborales
// de trabajo.
// El problema consiste en determinar el tiempo trabajado y los minutos de penalizaci�n
// para el empleado en cualquier d�a laboral.
// Resolver este problema para los siguientes casos:
// Empleado Hora Entrada Hora Salida Tiempo Trabajado Penalizaci�n
// 1          7:55          16:15          8:20          0
// 2          8:11          16:00          7:49          11
// 3          8:30          16:20          7:50          30
// 4          8:05          16:10          8:05          0
// Se sugiere leer las horas y minutos de entrada y las horas y minutos de salida.
#include <iostream>

// Funci�n para calcular el tiempo trabajado y los minutos de penalizaci�n
void calcularTiempoPenalizacion(int horaEntrada, int minEntrada, int horaSalida, int minSalida) {
    const int horaEntradaIdeal = 8;  // Hora ideal de entrada
    const int minTolerancia = 10;   // Tolerancia en minutos

    // Calcula el tiempo trabajado en minutos
    int tiempoTrabajado = (horaSalida - horaEntradaIdeal) * 60 + (minSalida - minEntrada);

    // Calcula los minutos de penalizaci�n en la entrada
    int minutosPenalizacionEntrada = 0;
    if (horaEntrada < horaEntradaIdeal || (horaEntrada == horaEntradaIdeal && minEntrada > minTolerancia)) {
        minutosPenalizacionEntrada = (horaEntradaIdeal - horaEntrada) * 60 + (minTolerancia - minEntrada);
    }

    // Calcula los minutos de penalizaci�n en la salida
    int minutosPenalizacionSalida = 0;
    if (horaSalida < 16) {
        minutosPenalizacionSalida = (16 - horaSalida) * 60;
    }

    // Aplica la penalizaci�n m�xima si el tiempo trabajado es negativo
    if (tiempoTrabajado < 0) {
        tiempoTrabajado = 0;
    }

    // Muestra los resultados
    std::cout << "Tiempo trabajado: " << tiempoTrabajado << " minutos" << std::endl;
    std::cout << "Minutos de penalizaci�n en la entrada: " << minutosPenalizacionEntrada << " minutos" << std::endl;
    std::cout << "Minutos de penalizaci�n en la salida: " << minutosPenalizacionSalida << " minutos" << std::endl;
}

int main() {
    // Caso 1
    calcularTiempoPenalizacion(7, 55, 16, 15);

    // Caso 2
    calcularTiempoPenalizacion(8, 11, 16, 15);

    // Caso 3
    calcularTiempoPenalizacion(8, 30, 16, 15);

    // Caso 4
    calcularTiempoPenalizacion(8, 5, 16, 15);

    return 0;
}
