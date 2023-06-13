#include <iostream>
#include <string>

using namespace std;

const int x = 15;
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

void printInt(int* array, int size ) {
    cout << endl << "[ ";
    for (int i = 0; i < size; i++){
        if(array[i]==0) {
            cout << "_" << " ";
        } else if (array[i]==-1) {
            cout << "0" << " ";
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
            cout << "_" << " ";
        } else {
            cout << array[i] << " ";
        }
    }
    cout << "]" << endl << endl;
}


int bcontrol(int* array, char ope, int x, int val) {

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
        if(t==false){cout << endl << "Comando deshabilitado"<<endl;return;}
        for (int i = 0; i < x; i++){
            if(array[i]!=0) {
                array[i] = 0;
                return;
            }
        }
    }
	else if ( ope == 'b' ){
        if(t==false){cout << endl << "Comando deshabilitado"<<endl;return;}
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
	else if ( ope == 'a' ){
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
        int codigov, pcompra, pventa, dmaximo, unie, cachein;
        string nombrev, marcav, mmedida, colorv, categ;
        cout << "Introduzca el codigo"<<endl;
        cin >> codigov;
        
        if ( bcontrol(array, 'b', x, codigov)==0 ) {
        cout << "El producto ya parece existir"<<endl;
        return;
        }
        cout << "Introduzca el nombre"<<endl;
        cin >> nombrev;
        cout << "Introduzca el marca"<<endl;
        cin >> marcav;
        cout << "Introduzca el color"<<endl;
        cin >> colorv;
        cout << "Introduzca el precio de compra"<<endl;
        cin >> pcompra;
        cout << "Introduzca el precio de venta"<<endl;
        cin >> pventa;
        cout << "Introduzca el porcentaje de descuento máximo"<<endl;
        cout << "SI EL DESCUENTO ES 0 INTRODUZCA -1"<<endl;
        cin >> dmaximo;
        cout << "Introduzca las unidades en existencia"<<endl;
        cin >> unie;
        cout << "Introduzca las métricas de medida"<<endl;
        cin >> mmedida;
        cout << "Introduzca la categoria"<<endl;
        cin >> categ;
        cachein = bcontrol(array, 't', x, codigov);

        codigo[cachein] = codigov ;
        nombre[cachein] = nombrev ;
        marca[cachein] = marcav ;
        color[cachein] = colorv ;
        preCompra[cachein] = pcompra ;
        preVenta[cachein] = pventa ;
        porcenDesMax[cachein] = dmaximo ;
        unidExis[cachein] = unie ;
        metrica[cachein] = mmedida ;
        categoria[cachein] = categ ;

    }
    else {
        cout << endl << "OPERACION NO VALIDA" << endl;
    }
    
}

int main() {

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
        nombre[0] = "zapato" ;
        marca[0] = "zap" ;
        color[0] = "rojo" ;
        preCompra[0] = 10000 ;
        preVenta[0] = 12000 ;
        porcenDesMax[0] = -1 ;
        unidExis[0] = 45 ;
        metrica[0] = "talla" ;
        categoria[0] = "calzado" ;
    }

    while (true) {
    
    cout << "= Lista de compras ="<<endl<<endl;
    
    cout << "Introduzca la operacion a realizar"<<endl;

    printInt(codigo, x);
    printArr(nombre, x);
    printArr(marca, x);
    printArr(color, x);
    printInt(preCompra, x);
    printInt(preVenta, x);
    printInt(porcenDesMax, x);
    printArr(metrica, x);
    printArr(categoria, x);
    
    cout << "f | realizar compra" << endl;

    cin >> ansx;

    control(codigo, ansx, x, false);
        
    }
    
    return 0;
}