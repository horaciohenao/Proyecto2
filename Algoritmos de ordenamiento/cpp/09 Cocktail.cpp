#include <iostream>
using namespace std;

int main() {
    system("title Algoritmos de ordenamientos de datos en C++ / Cocktail Sort && cls");

    int cache = 0;

    int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};

    size_t size = sizeof(array) / sizeof(array[0]);

    cout << "\n== Estos son tus valores == \n\n";

    for ( int i = 0; i < size; i++ ) {
        cout << array[i] << "    ";
    }

    cout << "\n\n== Ordenando... ==\n\n";

    int start = 0;
    int end = size - 1;

    while (start < end) {
        bool swapped = false;

        for (int i = start; i < end; i++) {
            if (array[i] > array[i + 1]) {
                cache = array[i];
                array[i] = array[i + 1];
                array[i + 1] = cache;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }

        end--;

        for (int i = end - 1; i >= start; i--) {
            if (array[i] > array[i + 1]) {
                cache = array[i];
                array[i] = array[i + 1];
                array[i + 1] = cache;
                swapped = true;
            }
        }

        start++;
        
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
