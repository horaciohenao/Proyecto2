#include <iostream>
using namespace std;

int main() {
    system("title Algoritmos de ordenamientos de datos en C++ / Bubblesort&& cls");

    int cache = 0;

    int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};

    size_t size = sizeof(array)/sizeof(array[0]);

    // int array[10];
    // cout << "== Ingrese 10 valores... ==\n";
    // for ( int i = 0; i < size; i++ ) {
    //     cout << "Valor " << i+1 << ": ";
    //     cin >> cache;
    //     array[i] = cache;
    // }

    cout << "\n== Estos son tus valores == \n\n";

    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << "	";
    }

    cout << "\n\n== Ordenando... ==\n\n";

    for ( int i = 0; i < size; i++ ) {

        for ( int j = 0; j < size - i; j++ ) {

            if ( array[j+1] < array[j] ) {

                int cache = array[j+1];
                array[j+1] = array[j];
                array[j] = cache;
                
            }
            for ( int i = 0; i < size; i++ ) {
                cout << array[i] << "	";
            }
            cout << endl;
        }
    }

    cout << "\n== Estos son tus valores ordenados ==\n\n";

    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << "	";
    }
    
    cout << endl;

    cout << endl;

    system("pause");
    system("cls");
    
}

/*
-lstdc++
*/