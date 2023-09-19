// Materia: Programación I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creación: 19/07/2023

// Fecha modificación: 20/09/2023

// Número de ejericio: 12

// Problema planteado: Construir las funciones para ordenar un vector de N elementos aleatorios y los ordene por.
// • Por selección
// • Por inserción
// • Por el método burbuja
// • Por el método Shell
// • Por QuickSort
#include <iostream>
#include <vector>
#include <cstdlib>

// Función para imprimir un vector
void imprimirVector(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Función de ordenamiento por selección
void ordenamientoSeleccion(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}

// Función de ordenamiento por inserción
void ordenamientoInsercion(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Función de ordenamiento por el método burbuja
void ordenamientoBurbuja(std::vector<int>& arr) {
    int n = arr.size();
    bool intercambio;
    do {
        intercambio = false;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                intercambio = true;
            }
        }
    } while (intercambio);
}

// Función de ordenamiento por el método Shell
void ordenamientoShell(std::vector<int>& arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

// Función de ordenamiento QuickSort
int particion(std::vector<int>& arr, int bajo, int alto) {
    int pivote = arr[alto];
    int i = (bajo - 1);
    for (int j = bajo; j <= alto - 1; j++) {
        if (arr[j] < pivote) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[alto]);
    return (i + 1);
}

void ordenamientoQuickSort(std::vector<int>& arr, int bajo, int alto) {
    if (bajo < alto) {
        int indiceParticion = particion(arr, bajo, alto);
        ordenamientoQuickSort(arr, bajo, indiceParticion - 1);
        ordenamientoQuickSort(arr, indiceParticion + 1, alto);
    }
}

int main() {
    const int N = 10; // Tamaño del vector
    std::vector<int> vectorAleatorio(N);

    // Generar números aleatorios (usando una semilla constante)
    for (int i = 0; i < N; i++) {
        vectorAleatorio[i] = std::rand() % 100; // Valores aleatorios entre 0 y 99
    }

    std::cout << "Vector original: ";
    imprimirVector(vectorAleatorio);

    // Copiar el vector original para cada método de ordenamiento
    std::vector<int> vectorSeleccion = vectorAleatorio;
    std::vector<int> vectorInsercion = vectorAleatorio;
    std::vector<int> vectorBurbuja = vectorAleatorio;
    std::vector<int> vectorShell = vectorAleatorio;
    std::vector<int> vectorQuickSort = vectorAleatorio;

    // Ordenar usando cada método
    ordenamientoSeleccion(vectorSeleccion);
    ordenamientoInsercion(vectorInsercion);
    ordenamientoBurbuja(vectorBurbuja);
    ordenamientoShell(vectorShell);
    ordenamientoQuickSort(vectorQuickSort, 0, N - 1);

    // Mostrar los vectores ordenados
    std::cout << "Ordenado por selección: ";
    imprimirVector(vectorSeleccion);

    std::cout << "Ordenado por inserción: ";
    imprimirVector(vectorInsercion);

    std::cout << "Ordenado por burbuja: ";
    imprimirVector(vectorBurbuja);

    std::cout << "Ordenado por Shell: ";
    imprimirVector(vectorShell);

    std::cout << "Ordenado por QuickSort: ";
    imprimirVector(vectorQuickSort);

    return 0;
}
