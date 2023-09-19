// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 18/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 5

// Problema planteado:Elabore un programa para registro académico de la UCB, que solicite el nombre de una
// materia, el paralelo, el docente y sus correspondientes notas de periodo. Al final, se
// muestra la nota final y si aprobó o reprobo el curso. (realizar con estructuras)


#include <iostream>
#include <string>

// Definición de la estructura Materia
struct Materia {
    std::string nombre;
    std::string paralelo;
    std::string docente;
    double notaPeriodo1;
    double notaPeriodo2;
    double notaPeriodo3;
};

int main() {
    Materia materia;

    // Solicitar información de la materia
    std::cout << "Ingrese el nombre de la materia: ";
    std::cin.ignore(); // Limpiar el búfer de entrada antes de leer una cadena
    std::getline(std::cin, materia.nombre);

    std::cout << "Ingrese el paralelo: ";
    std::cin >> materia.paralelo;

    std::cout << "Ingrese el nombre del docente: ";
    std::cin.ignore();
    std::getline(std::cin, materia.docente);

    // Solicitar las notas de los tres periodos
    std::cout << "Ingrese la nota del periodo 1: ";
    std::cin >> materia.notaPeriodo1;

    std::cout << "Ingrese la nota del periodo 2: ";
    std::cin >> materia.notaPeriodo2;

    std::cout << "Ingrese la nota del periodo 3: ";
    std::cin >> materia.notaPeriodo3;

    // Calcular la nota final
    double notaFinal = (materia.notaPeriodo1 + materia.notaPeriodo2 + materia.notaPeriodo3) / 3.0;

    // Determinar si aprobó o reprobó
    bool aprobo = notaFinal >= 60.0;

    // Mostrar resultados
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Registro Académico de la UCB" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Materia: " << materia.nombre << " (Paralelo " << materia.paralelo << ")" << std::endl;
    std::cout << "Docente: " << materia.docente << std::endl;
    std::cout << "Nota del periodo 1: " << materia.notaPeriodo1 << std::endl;
    std::cout << "Nota del periodo 2: " << materia.notaPeriodo2 << std::endl;
    std::cout << "Nota del periodo 3: " << materia.notaPeriodo3 << std::endl;
    std::cout << "Nota Final: " << notaFinal << std::endl;

    if (aprobo) {
        std::cout << "¡Aprobado!" << std::endl;
    } else {
        std::cout << "Reprobado" << std::endl;
    }

    return 0;
}
