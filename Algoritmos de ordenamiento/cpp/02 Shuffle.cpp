#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("title Algoritmos de ordenamientos de datos en C++ / Shufflesort&& cls");

    int cache, cache2 = 0;

    int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};

    size_t size = sizeof(array)/sizeof(array[0]);

    srand(time(NULL));

    cout << "\n== Estos son tus valores == \n\n";

    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << "	";
    }

    cout << "\n\n== Desordenando... ==\n\n";

    for ( int i = 0; i < size ; i++) {
        cache2 = rand() % (size-i) + i;

        int cache = array[i];

        array[i] = array[cache2];

        array[cache2] = cache;

        for ( int i = 0; i < size; i++ ) {
            cout << array[i] << "	";
        }
        cout << endl;

    }
    cout << "\n== Bubblesort ==\n\n";

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