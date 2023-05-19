#include <iostream>
using namespace std;

int main() {
    system("title Algoritmos de ordenamientos de datos en C++ / Selectionsort && cls");

    int cache = 0;

    int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};

    size_t size = sizeof(array) / sizeof(array[0]);

    cout << "\n== Estos son tus valores == \n\n";

    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << "    ";
    }

    cout << "\n\n== Ordenando... ==\n\n";

    for ( int i = 0; i < size - 1; i++ ) {
        int minIndex = i;

        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[minIndex] ) {
                minIndex = j;
            }
        }

        if ( minIndex != i ) {
            cache = array[i];
            array[i] = array[minIndex];
            array[minIndex] = cache;
        }

        for ( int i = 0; i < size; i++ ) {
            cout << array[i] << "    ";
        }
        cout << endl;
    }

    cout << "\n== Estos son tus valores ordenados ==\n\n";

    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << "    ";
    }

    cout << endl << endl;

    system("pause");
    system("cls");

}

/*
-lstdc++
*/