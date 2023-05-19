#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bucketSort(int array[], int size) {
    const int numBuckets = 10; 
    vector<vector<int>> buckets(numBuckets);  

    for (int i = 0; i < size; i++) {
        int bucketIndex = (array[i] * numBuckets) / 100;  
        buckets[bucketIndex].push_back(array[i]);  

        for (int i = 0; i < size; i++) {
            cout << array[i] << "    ";
        }
        cout << endl;
    }

    for (int i = 0; i < numBuckets; i++) {
        sort(buckets[i].begin(), buckets[i].end()); 

        for (int i = 0; i < size; i++) {
            cout << array[i] << "    ";
        }
        cout << endl;
    }

    int index = 0;
    for (int i = 0; i < numBuckets; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            array[index++] = buckets[i][j];  

            for (int i = 0; i < size; i++) {
                cout << array[i] << "    ";
            }
            cout << endl;
        }
    }
}


int main() {
    system("title Algoritmo de ordenamiento de datos en C++ / Bucket Sort && cls");

    int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};

    size_t size = sizeof(array) / sizeof(array[0]);

    cout << "\n== Estos son tus valores == \n\n";

    for (int i = 0; i < size; i++) {
        cout << array[i] << "    ";
    }

    cout << "\n\n== Ordenando... ==\n\n";

    // Llama la funcion
    bucketSort(array, size);

    cout << "\n== Estos son tus valores ordenados ==\n\n";

    for (int i = 0; i < size; i++) {
        cout << array[i] << "    ";
    }

    cout << endl;

    system("pause");
    system("cls");

    return 0;
}

/*
-lstdc++
*/
