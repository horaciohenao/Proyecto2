#include <iostream>
#include <string>

using namespace std;

const int x = 15;
char ansx;

// cout << "Introduzca el tamano para la lista"<<endl;
// cin >> x;

int fecha[x];
string proveedor[x];
int codigo[x];
int preCompra[x];
int cantidades[x];
char estado[x];
string motivo[x];

void printInt(int* array, int size ) {
    cout << endl << "[ ";
    for (int i = 0; i < size; i++){
        if(array[i]==0) {
            cout << "_ ";
        } else if (array[i]==-1) {
            cout << "0 ";
        } else {
            cout << array[i] << " ";
        }
    }
    cout << "]" << endl << endl;
}

void printArr(string* array, int size ) {
    cout << endl << "[ ";
    for (int i = 0; i < size; i++){
        if(array[i]=="null") {
            cout << "_ ";
        } else {
            cout << array[i] << " ";
        }
    }
    cout << "]" << endl << endl;
}

void printChar(char* array, int size) {
    cout << endl << "[ ";
    for (int i = 0; i < size; i++){
        if (array[i] == '1') {
            cout << "exito ";
        } else if (array[i] == '2') {
            cout << "cancelada ";
        }  else if (array[i] == '3') {
            cout << "esperando ";
        } else {
            cout << "_ ";
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
    int cachein = 0;
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
        cachein = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > cachein) {
            array[j + 1] = array[j];
            j = j - 1;
        }

        array[j + 1] = cachein;

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
    int cachein = 0;
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
            cachein = array[i];
            array[i] = array[minIndex];
            array[minIndex] = cachein;
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

int bcontrol(int* array, char ope, int x, int val) {
    /*if ( ope == 'i' ){
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
	else*/ 
    if ( ope == 'b' ){
        for (int i = 0; i < x; i++){
            if(array[i]==val) {
            return i;
            }
        } 
        return -1;
    }
	else if ( ope == 't' ){
        for (int i = 0; i < x; i++){
            if(array[0]==0) {
                return 0;
            }
            if(array[i]==0) {
                return i;
            }
        }
    }
	/*else if ( ope == 'a' ){
        int ansx;
        cout << "Ingrese una posicion para obtener el valor: ";
        cin >> ansx;
        
            if(array[ansx]!=0) {
                cout << endl << "El valor en la posicion " << ansx <<" es:" <<  array[ansx] << endl;
            } else {
                cout << endl << "El valor en la posicion " << ansx <<" esta vacio" << endl;
            }
    }*/
}

void control(int* array, char ope, int x, bool t) {
    if ( ope == 'i' ){
        if(t==false){cout << endl << "Comando deshabilitado"<<endl;return;}
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
        int ansx;
        cout << "Ingrese un codigo para buscar: ";
        cin >> ansx;
        for (int i = 0; i < x; i++){
            if(array[i]==ansx) {
                cout << "El valor esta en la posicion (primera coincidencia) " << i <<endl;
                cout << "Ingrese la cantidad de productos vendidos (para restar): ";
                cin>>ansx;
                cantidades[i]-=ansx;
            }
        } 
        cout << "El valor no se encontro en la lista"<<endl;
    }
	else if ( ope == 'b' ){
        int ansx;
        cout << "Ingrese un codigo para buscar: ";
        cin >> ansx;
        for (int i = 0; i < x; i++){
            if(array[i]==ansx) {
                cout << "El valor esta en la posicion (primera coincidencia) " << i <<endl;
                cout << "Ingrese el nuevo estado de venta del producto: (1 exito, 2 cancelada)";
                cin>>estado[i];
                if (ansx=='2'){
                    cout << "agregue un motivo para esto"<<endl;
                    cin>>motivo[x];
                } else if (ansx=='1'){
                    motivo[i] = "Na";
                }
                return;
            }
        } 
        cout << "El valor no se encontro en la lista"<<endl;
    }
	else if ( ope == 't' ){
        if(t==false){cout << endl << "Comando deshabilitado"<<endl;return;}
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
	else if ( ope == 'v' ){
        if(t==false){cout << endl << "Comando deshabilitado"<<endl;return;}
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
        int fechav, codigov, pcompra, cantidadesv, unie, cachein;
        string proveedorv, marcav, mmedida, colorv, categ;
        cout << "Introduzca el fecha"<<endl;
        cout << "FORMATO DE FECHA AAMMDD"<<endl;
        cin >> fechav;
        cout << "Introduzca el proveedor"<<endl;
        cin >> proveedorv;
        cout << "Introduzca el codigo"<<endl;
        cin >> codigov;
        if ( bcontrol(array, 'b', x, codigov)==0 ) {
        cout << "El producto ya parece existir"<<endl;
        return;
        }
        cout << "Introduzca el precio de compra"<<endl;
        cin >> pcompra;
        cout << "Introduzca la cantidad en unidad de medida comprada"<<endl;
        cin >> cantidadesv;
        cachein = bcontrol(array, 't', x, fechav);

        fecha[cachein] = fechav ;
        proveedor[cachein] = proveedorv ;
        codigo[cachein] = codigov ;
        preCompra[cachein] = pcompra ;
        cantidades[cachein] = cantidadesv ;
        estado[cachein] = '3';

        cout << "El total a pagar CON IVA es: " << (pcompra*1,19) << endl;
        cout << "El total a pagar SIN IVA es: " << (pcompra) << endl;

        if (cantidades[cachein]<5){cout << "Las unidades disponibles son " << cantidades[cachein] << endl;}
        

    }
    else {
        cout << endl << "OPERACION NO VALIDA" << endl;
    }
    /* else if (ope == 'u') {bubbleSort(array, x);}
    else if (ope == 'n') {insertionSort(array, x);}
    else if (ope == 'l') {selectionSort(array, x);}*/
    
}

int main() {

    for ( int i = 0; i < x; i++){fecha[i] = 0; }
    for ( int i = 0; i < x; i++){proveedor[i] = "null"; }
    for ( int i = 0; i < x; i++){codigo[i] = 0; }
    for ( int i = 0; i < x; i++){preCompra[i] = 0; }
    for ( int i = 0; i < x; i++){cantidades[i] = 0; }
    for ( int i = 0; i < x; i++){estado[i] = '0'; }
    for ( int i = 0; i < x; i++){motivo[i] = "null"; }
    
    if(1==1) {
        fecha[0] = 230501;
        proveedor[0] = "zapato" ;
        codigo[0] = 10000 ;
        preCompra[0] = 12000 ;
        cantidades[0] = 4 ;
        estado[0] = 1;
        motivo[0] = "NA";
    }

    while (true) {
    
    cout << "= Lista de compras ="<<endl<<endl;
    
    cout << "Introduzca la operacion a realizar"<<endl;

    printInt(fecha, x);
    printArr(proveedor, x);
    printInt(codigo, x);
    printInt(preCompra, x);
    printInt(cantidades, x);
    printChar(estado, x);
    printArr(motivo, x);
    
    cout << "f | realizar compra" << endl;
    
    /*
    cout << "i | insertar valor" << endl;*/
    cout << "e | reduciar cantidad producto" << endl;
    cout << "b | buscar venta" << endl;/*
    cout << "t | obtener tamano de la lista" << endl;
    cout << "v | acceder a un valor en una posicion" << endl<< endl;
    cout << "u | aplicar bubble sort" << endl;
    cout << "n | aplicar insertion sort" << endl;
    cout << "l | aplicar selection sort" << endl;*/

    cin >> ansx;

    control(codigo, ansx, x, false);
        
    }
    
    return 0;
}