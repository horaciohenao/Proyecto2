#include <iostream>
#include <string>

using namespace std;

void printarray(int* array, int size ) {
    cout << endl << "[ ";
    for (int i = 0; i < size; i++){
        if(array[i]==0) {
            cout << "_" << " ";
        } else {
            cout << array[i] << " ";
        }
    }
    cout << "]" << endl << endl;
}

/*
void bubbleSort(int* array, int size) {
    int isize = 0;
    
    cout << "\n== Estos son tus valores == \n\n";
    
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            break;
        }
        cout << array[i] << "    ";
        isize++;
    }

    cout << "\n\n== Ordenando (BubbleSort)... ==\n\n";

    for (int i = 0; i < isize - 1; i++) {

        for (int j = 0; j < isize - i - 1; j++) {

            if (array[j + 1] < array[j]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

        for (int k = 0; k < isize; k++) {
            cout << array[k] << "    ";
        }
        cout << endl;
    }
    
    cout << "\n== Estos son tus valores ordenados == \n\n";
    
    for (int i = 0; i < isize; i++) {
        cout << array[i] << "    ";
    }
    cout << endl << endl;
}

void insertionSort(int* array, int size) {
    int cache = 0;
    int isize = 0;

    cout << "\n== Estos son tus valores == \n\n";
    
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            break;
        }
        cout << array[i] << "    ";
        isize++;
    }

    cout << "\n\n== Ordenando (InsertionSort)... ==\n\n";

    for (int i = 1; i < isize; i++) {
        cache = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > cache) {
            array[j + 1] = array[j];
            j = j - 1;
        }

        array[j + 1] = cache;

        for (int k = 0; k < isize; k++) {
            cout << array[k] << "    ";
        }
        cout << endl;
    }
    
    cout << "\n== Estos son tus valores ordenados == \n\n";
    
    for (int i = 0; i < isize; i++) {
        cout << array[i] << "    ";
    }
    cout << endl << endl;
}

void selectionSort(int* array, int size) {
    int cache = 0;
    int isize = 0;
    
    cout << "\n== Estos son tus valores == \n\n";
    
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            break;
        }
        cout << array[i] << "    ";
        isize++;
    }

    cout << "\n\n== Ordenando (SelectionSort)... ==\n\n";

    for ( int i = 0; i < isize - 1; i++ ) {
        int minIndex = i;

        for ( int j = i + 1; j < isize; j++ ) {
            if ( array[j] < array[minIndex] ) {
                minIndex = j;
            }
        }

        if ( minIndex != i ) {
            cache = array[i];
            array[i] = array[minIndex];
            array[minIndex] = cache;
        }

        for (int k = 0; k < isize; k++) {
            cout << array[k] << "    ";
        }
        cout << endl;
    }
    
    cout << "\n== Estos son tus valores ordenados == \n\n";
    
    for (int i = 0; i < isize; i++) {
        cout << array[i] << "    ";
    }
    cout << endl << endl;
}
*/

void control(int* array, char ope, int x) {
    if ( ope == 'i' ){
        int ansx;
        cout << endl << "Ingrese el valor que desea introducir: ";
        cin >> ansx;
        if(ansx==0){cout << endl << "0 no se permite en este programa"<<endl;return;}
        cout << endl << "Ingrese el valor que desea introducir: ";
        for (int i = 0; i < x; i++){
            if(array[i]==0) {
                array[i] = ansx;
                return;
            }
        }
    }
	else if ( ope == 'e' ){
        for (int i = 0; i < x; i++){
            if(array[i]!=0) {
                array[i] = 0;
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
            if(array[0]==0) {
                cout << "La lista esta vacia" <<endl;
                return;
            }
            if(array[i]==0) {
                cout << "El tamnño de la lista es " << i-1<<endl;
                return;
            }
        }
    }
	else if ( ope == 'a' ){
        int ansx;
        cout << "Ingrese una posicion para obtener el valor: ";
        cin >> ansx;
        
            if(array[ansx]!=0) {
                cout << endl << "El valor en la posicion " << ansx <<" es:" <<  array[ansx] << endl;
            } else {
                cout << endl << "El valor en la posicion " << ansx <<" esta vacio" << endl;
            }
    }
    else if ( ope == 'f' ) {
        int codigo, pcompra, pventa, dmaximo, unie;
        string nombre, marca, mmedida;
        // , , ,  (kg, litros, metros, unidad) y categoría.
        cout << "Introduzca el codigo"<<endl;
        cin >> codigo;
        cout << "Introduzca el nombre"<<endl;
        cin >> nombre;
        cout << "Introduzca el marca"<<endl;
        cin >> marca;
        cout << "Introduzca el precio de compra"<<endl;
        cin >> pcompra;
        cout << "Introduzca el precio de venta"<<endl;
        cin >> pventa;
        cout << "Introduzca el porcentaje de descuento máximo"<<endl;
        cin >> dmaximo;
        cout << "Introduzca las unidades en existencia"<<endl;
        cin >> unie;
        cout << "Introduzca las métricas de medida"<<endl;
        cin >> mmedida;
        
    }
    else {
        cout << endl << "OPERACION NO VALIDA" << endl;
    }
    /* else if (ope == 'u') {bubbleSort(array, x);}
    else if (ope == 'n') {insertionSort(array, x);}
    else if (ope == 'l') {selectionSort(array, x);}*/
    
}

int main() {

    int x = 15;
    char ansx;
    
    // cout << "Introduzca el tamano para la lista"<<endl;
    // cin >> x;

    int codigo[x];
    string nombre[x];
    string marca[x];
    string color[x];
    int preCompra[x];
    int preVenta[x];
    int porcenDesMax[x];
    int unidExis[x];
    string metrica[x];
    string categoria[x];

    for ( int i = 0; i < x; i++){codigo[i] = 0; }
    for ( int i = 0; i < x; i++){nombre[i] = "null"; }
    for ( int i = 0; i < x; i++){marca[i] = "null"; }
    for ( int i = 0; i < x; i++){color[i] = "null"; }
    for ( int i = 0; i < x; i++){preCompra[i] = 0; }
    for ( int i = 0; i < x; i++){preVenta[i] = 0; }
    for ( int i = 0; i < x; i++){porcenDesMax[i] = 0; }
    for ( int i = 0; i < x; i++){unidExis[i] = 0; }
    for ( int i = 0; i < x; i++){metrica[i] = "null"; }
    for ( int i = 0; i < x; i++){categoria[i] = "null"; }
    
    if(1==1) {
        codigo[0] = 5050;
    }

    while (true) {
    
    cout << "= Lista de compras ="<<endl<<endl;
    
    cout << "Introduzca la operacion a realizar"<<endl;

    printarray(codigo, x);
    
    cout << "f | realizar compra" << endl;
    
    /*
    cout << "i | insertar valor" << endl;
    cout << "e | eliminar valor" << endl;
    cout << "b | buscar valor" << endl;
    cout << "t | obtener tamano de la lista" << endl;
    cout << "a | acceder a un valor en una posicion" << endl<< endl;
    cout << "u | aplicar bubble sort" << endl;
    cout << "n | aplicar insertion sort" << endl;
    cout << "l | aplicar selection sort" << endl;*/

    cin >> ansx;

    control(codigo, ansx, x);
        
    }
    
    return 0;
}