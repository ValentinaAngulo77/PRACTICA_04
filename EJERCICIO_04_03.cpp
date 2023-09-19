// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 18/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 3

// Problema planteado:Leer los datos de doce personas como son: nombre, edad, estatura, peso, posteriormente
// indicar cuál es el nombre de la persona de menor edad, el promedio de las estaturas y el
// de los pesos. (realizar con estructuras)
#include <iostream>
#include <string>

struct Persona {
    std::string nombre;
    int edad;
    double estatura;
    double peso;
};

int main() {
    Persona personas[12]; // Un arreglo de 12 personas

    // Leer los datos de las 12 personas
    for (int i = 0; i < 12; ++i) {
        std::cout << "Ingresa los datos de la persona " << i + 1 << ":" << std::endl;
        std::cout << "Nombre: ";
        std::cin >> personas[i].nombre;
        std::cout << "Edad: ";
        std::cin >> personas[i].edad;
        std::cout << "Estatura (en metros): ";
        std::cin >> personas[i].estatura;
        std::cout << "Peso (en kilogramos): ";
        std::cin >> personas[i].peso;
    }

    // Encontrar la persona de menor edad
    int edadMinima = personas[0].edad;
    std::string nombreMenorEdad = personas[0].nombre;

    for (int i = 1; i < 12; ++i) {
        if (personas[i].edad < edadMinima) {
            edadMinima = personas[i].edad;
            nombreMenorEdad = personas[i].nombre;
        }
    }

    // Calcular el promedio de estaturas y pesos
    double sumaEstaturas = 0.0;
    double sumaPesos = 0.0;

    for (int i = 0; i < 12; ++i) {
        sumaEstaturas += personas[i].estatura;
        sumaPesos += personas[i].peso;
    }

    double promedioEstaturas = sumaEstaturas / 12;
    double promedioPesos = sumaPesos / 12;

    // Mostrar resultados
    std::cout << "La persona de menor edad es: " << nombreMenorEdad << std::endl;
    std::cout << "El promedio de estaturas es: " << promedioEstaturas << " metros." << std::endl;
    std::cout << "El promedio de pesos es: " << promedioPesos << " kilogramos." << std::endl;

    return 0;
}
