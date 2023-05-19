#include <iostream>
using namespace std;

int main() {
    system("title Algoritmos de ordenamientos de datos en C++ / Insertionsort&& cls");

    int cache = 0;

    int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};

    size_t size = sizeof(array)/sizeof(array[0]);

    cout << "\n== Estos son tus valores == \n\n";

    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << "	";
    }

    cout << "\n\n== Ordenando... ==\n\n";

    for ( int i = 1; i < size; i++ ) {

        cache = array[i];
        int j = i - 1;
        
        while ( j >= 0 && array[j] > cache ) {
            array[j + 1] = array[j];
            j = j - 1;
        }
    
        array[j + 1] = cache;
        for ( int i = 0; i < size; i++ ) {
            cout << array[i] << "	";
        }
        cout << endl;
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