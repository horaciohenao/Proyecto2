// Importar los headers necesarios
#include <iostream>
using namespace std;

// Int main
int main() {
    // Titulo para el cmd
    system("title Algoritmos de ordenamientos de datos en C++ / Bubblesort&& cls");

    // Variables
    int array[10];
    // Valores de ejemplo, comentar este o el codigo de Ingresar valores
    // int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};
    int cache, o = 0;
    size_t size = sizeof(array)/sizeof(array[0]);

    // //Ingresar valores
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

        // Recorre el array array menos el ultimo elemento
        for ( int j = 0; j < size - i; j++ ) {

            // Si el elemento siguiente es menor que el elemento actual entonces
            if ( array[j+1] < array[j] ) {

                // Guardar el elemento actual en una variable 
                int cache = array[j+1];

                // Reemplazar el elemento actual por el siguiente
                array[j+1] = array[j];

                // Reemplazar el siguiente elemento por el elemento actual guardado en cache
                array[j] = cache;
                
            }

            // Imprime el valor actual del array
            for ( int i = 0; i < size; i++ ) {
                cout << array[i] << " ";
            }
            cout << endl;
        }
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

gcc "01 Bubblesort.cpp" -o hola.exe -lstdc++

https://www.w3schools.com/cpp/cpp_output.asp
https://www.w3schools.com/cpp/cpp_user_input.asp
https://www.w3schools.com/cpp/cpp_arrays.asp
https://stackoverflow.com/questions/31201631/execute-cmd-commands-using-c
https://www.techiedelight.com/print-contents-array-cpp/

*/