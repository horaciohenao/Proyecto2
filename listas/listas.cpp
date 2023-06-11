#include <iostream>

using namespace std;

void printarray(int* array, int size ) {
    cout << endl << "[ ";
    for (int i = 0; i < size; i++){
        if(array[i]==-345889306) {
            cout << "_" << " ";
        } else {
            cout << array[i] << " ";
        }
    }
    cout << "]" << endl << endl;
}

void control(int* array, char ope, int x) {
    if ( ope == 'i' ){
        int ansx;
        cout << endl << "Ingrese el valor que desea introducir: ";
        cin >> ansx;
        for (int i = 0; i < x; i++){
            if(array[i]==-345889306) {
                array[i] = ansx;
                return;
            }
        }
    }
	else if ( ope == 'e' ){
        for (int i = 0; i < x; i++){
            if(array[i]!=-345889306) {
                array[i] = -345889306;
                return;
            }
        }
    }
	else if ( ope == 'b' ){
        int ansx;
        cout << "Ingrese un valor para buscar: ";
        cin >> ansx;
        for (int i = 0; i < x; i++){
            if(array[i]==ansx) {
                cout << "El valor esta en la posicion (primera coincidencia) " << i <<endl;
            return;
            }
        } 
        cout << "El valor no se encontro en la lista"<<endl;
    }
	else if ( ope == 't' ){
        for (int i = 0; i < x; i++){
            if(array[0]==-345889306) {
                cout << "La lista esta vacia" <<endl;
                return;
            }
            if(array[i]!=-345889306) {
                cout << "El tamnño de la lista es " << i+1<<endl;
                return;
            }
        }
    }
	else if ( ope == 'a' ){
        int ansx;
        cout << "Ingrese una posicion para obtener el valor: ";
        cin >> ansx;
        
            if(array[ansx]!=-345889306) {
                cout << endl << "El valor en la posicion " << ansx <<" es:" <<  array[ansx] << endl;
            } else {
                cout << endl << "El valor en la posicion " << ansx <<" esta vacio" << endl;
            }
    } 
}

int main() {

    int x = 10000;
    char ansx;
    
    // cout << "Introduzca el tamano para la lista"<<endl;
    // cin >> x;

    int lista[x];

    for ( int i = 0; i < x; i++){lista[i] = -345889306; }

    while (true) {
    
    cout << "Introduzca la operacion a realizar"<<endl;

    // printarray(lista, x);

    cout << "i | insertar valor" << endl;
    cout << "e | eliminar valor" << endl;
    cout << "b | buscar valor" << endl;
    cout << "t | obtener tamano de la lista" << endl;
    cout << "a | acceder a un valor en una posicion" << endl;

    cin >> ansx;

    control(lista, ansx, x);
        
    }
    
    return 0;
}
