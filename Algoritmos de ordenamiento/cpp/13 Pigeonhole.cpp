#include <iostream>
using namespace std;

int main() {
    system("title Algoritmos de ordenamientos de datos en C++ / Pigeonhole Sort && cls");

    int cache = 0;

    int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};

    size_t size = sizeof(array) / sizeof(array[0]);

    cout << "\n== Estos son tus valores == \n\n";

    for (int i = 0; i < size; i++) {
        cout << array[i] << "    ";
    }

    cout << "\n\n== Ordenando... ==\n\n";

    int minVal = array[0];
    int maxVal = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }

    int range = maxVal - minVal + 1;
    int* pigeonholes = new int[range]{0};

    for (int i = 0; i < size; i++) {
        pigeonholes[array[i] - minVal]++;
    }

    int index = 0;

    for (int i = 0; i < range; i++) {
        while (pigeonholes[i] > 0) {
            array[index] = i + minVal;
            pigeonholes[i]--;
            index++;

            for (int j = 0; j < size; j++) {
                cout << array[j] << "    ";
            }
            cout << endl;
        }
    }

    delete[] pigeonholes;

    cout << "\n== Estos son tus valores ordenados ==\n\n";

    for (int i = 0; i < size; i++) {
        cout << array[i] << "    ";
    }

    cout << endl << endl;

    system("pause");
    system("cls");
}
