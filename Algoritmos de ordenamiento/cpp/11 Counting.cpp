#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("title Algoritmos de ordenamientos de datos en C++ / Countingsort && cls");

    int cache = 0;

    int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};
    size_t size = sizeof(array) / sizeof(array[0]);

    cout << "\n== Estos son tus valores == \n\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << "    ";
    }

    cout << "\n\n== Ordenando... ==\n\n";

    int minValue = array[0];
    int maxValue = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < minValue) {
            minValue = array[i];
        }
        if (array[i] > maxValue) {
            maxValue = array[i];
        }
    }

    int range = maxValue - minValue + 1;
    vector<int> count(range, 0);

    for (int i = 0; i < size; i++) {
        count[array[i] - minValue]++;

        for (int i = 0; i < size; i++) {
            cout << array[i] << "    ";
        }
        cout << endl;
    }

    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            array[index++] = i + minValue;
            count[i]--;

            for (int i = 0; i < size; i++) {
                cout << array[i] << "    ";
            }
            cout << endl;
        }
    }

    cout << "\n== Estos son tus valores ordenados ==\n\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << "    ";
    }

    cout << endl << endl;

    system("pause");
    system("cls");
}
