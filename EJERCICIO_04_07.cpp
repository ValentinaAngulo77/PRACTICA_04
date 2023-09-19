// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 18/07/2023

// Fecha modificaci�n: 20/09/2023

// N�mero de ejericio: 7

// Problema planteado:Una empresa efect�a el control de asistencia de sus empleados mediante un lector
// biom�trico, el horario en la entrada es a las 8:00 a.m y la salida es a las 16:00 p.m. El empleado
// tiene una tolerancia de 10 minutos en la entrada, si llega m�s all� de los 10 minutos de tolerancia
// se penaliza todos los minutos de atraso (es decir si llega a las 8:12 se penalizan los 12 minutos).
// De igual forma no puede salir antes del horario establecido en la salida, (si lo hace se penaliza
// los minutos faltantes), pero si el empleado entra antes o sale despu�s de sus horarios el sistema
// solo toma en cuenta las 8 horas laborales de trabajo.
// El problema consiste en determinar los minutos de penalizaci�n para el empleado en cualquier
// d�a laboral, verifique el funcionamiento con los siguientes datos de prueba:
//  C�digo Empleado Hora Entrada Hora Salida Penalizaci�n Fecha
// 101045           7:55          16:15          0        12/01/2011
// 223032           8:11          16:00         11        12/01/2011
// 334009           8:30          16:20         30        12/01/2011
// 443283           8:05          16:10          0        12/01/2011
#include <iostream>
#include <string>
using namespace std;

// Funci�n para calcular la penalizaci�n de un empleado
int calcularPenalizacion(int horaEntrada, int minutoEntrada, int horaSalida, int minutoSalida) {
    const int horaEntradaEsperada = 8;
    const int minutoEntradaEsperada = 0;
    const int horaSalidaEsperada = 16;
    const int minutoSalidaEsperada = 0;
    const int toleranciaEntrada = 10;

    int penalizacion = 0;

    // Calcular la hora y minutos de llegada a la oficina
    int horaLlegada = horaEntrada * 60 + minutoEntrada;

    // Calcular la hora y minutos de salida de la oficina
    int horaSalidaOficina = horaSalida * 60 + minutoSalida;

    // Calcular penalizaci�n en la entrada
    if (horaLlegada > horaEntradaEsperada * 60 + minutoEntradaEsperada) {
        penalizacion += horaLlegada - (horaEntradaEsperada * 60 + minutoEntradaEsperada);
    }

    // Calcular penalizaci�n en la salida
    if (horaSalidaOficina < horaSalidaEsperada * 60 + minutoSalidaEsperada) {
        penalizacion += (horaSalidaEsperada * 60 + minutoSalidaEsperada) - horaSalidaOficina;
    }

    // Si la penalizaci�n excede las 8 horas de trabajo, limitarla a 8 horas
    if (penalizacion > 8 * 60) {
        penalizacion = 8 * 60;
    }

    return penalizacion;
}

int main() {
    int codigoEmpleado;
    int horaEntrada, minutoEntrada, horaSalida, minutoSalida;
    string fecha;

    cout << "Ingrese el c�digo del empleado: ";
    cin >> codigoEmpleado;

    cout << "Ingrese la hora de entrada (HH MM): ";
    cin >> horaEntrada >> minutoEntrada;

    cout << "Ingrese la hora de salida (HH MM): ";
    cin >> horaSalida >> minutoSalida;

    cout << "Ingrese la fecha (DD/MM/AAAA): ";
    cin >> fecha;

    int penalizacion = calcularPenalizacion(horaEntrada, minutoEntrada, horaSalida, minutoSalida);

    cout << "Penalizaci�n: " << penalizacion << " minutos" << endl;

    return 0;
}
