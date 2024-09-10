#include <iostream>
#include "calculadora.h"
using namespace std;
/* Estructura de archivos 1main.cpp 2 calculadora.h 3 calculadora.cpp
esta dividida en 3 modulos .
El main.cpp manejara la entrada de usuario y mostrara los resultados.
Para compilar comando: g++ main.cpp calculadora.cpp -o calculadora
Para ejecutar: ./calculadora*/
int main(){
double a, b;
char operacion;

cout<<"Ingresar primer numero: ";
cin>>a;

cout<< "Elegir operacion (+,-,*,/): ";
cin>> operacion;

cout<<"Ingresar segundo numero: ";
cin>>b;

double resultado;

switch (operacion){
case '+': 
      resultado = suma (a,b);
      break;
case '-':
      resultado = resta (a,b);
      break;
case '*':
      resultado = multiplicacion (a,b);
      break;
case '/':
      resultado = division (a,b);
      break;
}
cout<<"El resultado es:  "<< resultado << endl;
return 0;
}