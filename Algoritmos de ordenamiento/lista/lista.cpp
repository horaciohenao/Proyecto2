#include <iostream>
#include <vector>

int main() {
    std::vector<int> lista; // Crear una lista vacía

    // Agregar elementos a la lista
    lista.push_back(10);
    lista.push_back(20);
    lista.push_back(30);

    // Acceder a elementos individuales
    std::cout << "Elemento en la posición 1: " << lista[0] << std::endl;
    std::cout << "Elemento en la posición 2: " << lista[1] << std::endl;
    std::cout << "Elemento en la posición 3: " << lista[2] << std::endl;

    return 0;
}
