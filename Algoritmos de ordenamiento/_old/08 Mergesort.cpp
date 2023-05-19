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
    int cache = 0;
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