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
    int cache, min = 0;
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

    // Recorre el array
    for ( int i = 0; i < size; i++ ) {

        // Asigna el valor i como el minimo
        min = i;

        // Recorre los valores del array desde 1 buscando el mas pqeuqño
        for ( int j = i + 1; j < size; j++ ) {

            // Compara el valor actual con el minimo, si es mas pequeño entonces
            if ( array[j] < array[min] ) {

                // Lo guarda en min
                min = j;

            }

        }
        
        // Si min es distinto entonces
        if ( min != i ) {
        
            // Guarda el valor actual en una variable temporal
            int cache = array[i];
            
            // Asigna el valor mínimo al índice actual
            array[i] = array[min];
            
            // Asigna el  al índice del valor mínimo
            array[min] = cache;

        }

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