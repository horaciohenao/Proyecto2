// Importar los headers necesarios
#include <iostream>
using namespace std;

// Int main
int main() {
    // Titulo para el cmd
    system("title Algoritmos de ordenamientos de datos en C++ / Insertionsort&& cls");

    // Variables
    int array[10];
    // Valores de ejemplo, comentar este o el codigo de Ingresar valores
    // int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};
    int cache, cache2 = 0;
    size_t size = sizeof(array)/sizeof(array[0]);

    //Ingresar valores
    cout << "== Ingrese 10 valores... ==\n";
    for ( int i = 0; i < size; i++ ) {
        cout << "Valor " << i+1 << ": ";
        cin >> cache;
        array[i] = cache;
    }

    cout << "\n== Estos son tus valores == \n\n";

    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << " ";
    }

    cout << "\n\n== Ordenando... ==\n\n";

    // Recorre el array a partir del segundo valor
    for ( int i = 1; i < size; i++ ) {

        // Guarda el valor actual del elemento en una variable 
        cache = array[i];

        // Guarda el valor anterior al actual
        int cache2 = i - 1;

        // Recorre el array inversamente para dejar el valor en la posicion correcta
        while ( cache2 > -1 && cache < array[cache2] ) {

            // Mueve el valor a la derecha
            array[cache2+1] = array[cache2];

            // Disminuye el valor para continuar con las siguientes comparaciones 
            cache2--;
        }

        // Inserta el elemento actual en la posicion correcta
        array[cache2+1] = cache;

        // Imprime el valor actual del array
        for ( int i = 0; i < size; i++ ) {
            cout << array[i] << " ";
        }
        cout << endl;

    }


    // Imprime los valores ordenados
    cout << "\n== Estos son tus valores ordenados ==\n\n";

    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << " ";
    }
    
    cout << endl;

    cout << endl;

    // "Presione una tecla para continuar"
    system("pause");
    system("cls");
    
}

/*

-lstdc++

*/