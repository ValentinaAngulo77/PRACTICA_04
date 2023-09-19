// Materia: Programaci�n I, Paralelo 4

// Autor: Valentina Jazmin Angulo Burgoa

// Fecha creaci�n: 19/07/2023

// Fecha modificaci�n: 20/09/2023

// N�mero de ejericio: 12

// Problema planteado: Construir las funciones para ordenar un vector de N elementos aleatorios y los ordene por.
// � Por selecci�n
// � Por inserci�n
// � Por el m�todo burbuja
// � Por el m�todo Shell
// � Por QuickSort
#include <iostream>
#include <vector>
#include <cstdlib>

// Funci�n para imprimir un vector
void imprimirVector(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Funci�n de ordenamiento por selecci�n
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

// Funci�n de ordenamiento por inserci�n
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

// Funci�n de ordenamiento por el m�todo burbuja
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

// Funci�n de ordenamiento por el m�todo Shell
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

// Funci�n de ordenamiento QuickSort
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
    const int N = 10; // Tama�o del vector
    std::vector<int> vectorAleatorio(N);

    // Generar n�meros aleatorios (usando una semilla constante)
    for (int i = 0; i < N; i++) {
        vectorAleatorio[i] = std::rand() % 100; // Valores aleatorios entre 0 y 99
    }

    std::cout << "Vector original: ";
    imprimirVector(vectorAleatorio);

    // Copiar el vector original para cada m�todo de ordenamiento
    std::vector<int> vectorSeleccion = vectorAleatorio;
    std::vector<int> vectorInsercion = vectorAleatorio;
    std::vector<int> vectorBurbuja = vectorAleatorio;
    std::vector<int> vectorShell = vectorAleatorio;
    std::vector<int> vectorQuickSort = vectorAleatorio;

    // Ordenar usando cada m�todo
    ordenamientoSeleccion(vectorSeleccion);
    ordenamientoInsercion(vectorInsercion);
    ordenamientoBurbuja(vectorBurbuja);
    ordenamientoShell(vectorShell);
    ordenamientoQuickSort(vectorQuickSort, 0, N - 1);

    // Mostrar los vectores ordenados
    std::cout << "Ordenado por selecci�n: ";
    imprimirVector(vectorSeleccion);

    std::cout << "Ordenado por inserci�n: ";
    imprimirVector(vectorInsercion);

    std::cout << "Ordenado por burbuja: ";
    imprimirVector(vectorBurbuja);

    std::cout << "Ordenado por Shell: ";
    imprimirVector(vectorShell);

    std::cout << "Ordenado por QuickSort: ";
    imprimirVector(vectorQuickSort);

    return 0;
}
