#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    if (newNode != nullptr) {
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
    }
    return newNode;
}

Node* insertNode(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }

    return root;
}

void inOrderTraversal(Node* root, int* array, int* index) {
    if (root == nullptr) {
        return;
    }

    inOrderTraversal(root->left, array, index);
    array[(*index)++] = root->data;
    inOrderTraversal(root->right, array, index);
}

void binaryTreeSort(int array[], size_t size) {
    Node* root = nullptr;

    for (size_t i = 0; i < size; i++) {
        root = insertNode(root, array[i]);
    }

    int index = 0;
    inOrderTraversal(root, array, &index);

    delete root;
}

int main() {
    system("title Algoritmos de ordenamientos de datos en C++ / Binary Tree Sort && cls");

    int array[10] = {2, 3, 1, 923, -23, 9128, 0, 10, 20, 12};
    size_t size = sizeof(array) / sizeof(array[0]);

    cout << "\n== Estos son tus valores == \n\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << "    ";
    }
    cout << endl;

    cout << "\n\n== Ordenando... ==\n\n";

    binaryTreeSort(array, size);

    cout << "\n== Estos son tus valores ordenados ==\n\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << "    ";
    }

    cout << endl << endl;

    system("pause");
    system("cls");
}
