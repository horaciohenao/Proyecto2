#include <iostream>
using namespace std;

int main() {
    system("title Algoritmos de ordenamientos de datos en C++ / Shellsort && cls");

    int cache, gap = 0;

    int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};

    size_t size = sizeof(array) / sizeof(array[0]);

    cout << "\n== Estos son tus valores == \n\n";

    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << "    ";
    }
    cout << endl;

    cout << "\n\n== Ordenando... ==\n\n";

    gap = size / 2;
    while (gap > 0) {
        for (int i = gap; i < size; i++) {
            int j = i;
            cache = array[i]; 
            
            while (j >= gap && array[j - gap] > cache) {
                array[j] = array[j - gap];
                j -= gap;
            }

            array[j] = cache; 
        }
        
        gap /= 2; 
            
        for (int i = 0; i < size; i++) {
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