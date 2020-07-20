#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

//Firma de la función recursiva
long binario(long num);

int main(int argc, char** argv) {
	
	//Solicita el numero al usuario
	long a;
	cout<<"Ingrese un numero entre 0 y 1023 en base decimal para obtenerlo en base binaria"<<endl;
	cin>>a;
	
	//Calcula e imprimer el numero en binario
	cout<<"El numero en binario es: "<<binario(a)<<endl;
	
	return 0;
}

//Funcion recursiva
long binario(long num){
	
	if(num == 0)
	{
		//devuelve el valor del final de la recursion
		return 0;
	}
	else {
		for(int i = 0; i < num; i++) {
			if(pow(2,i) > num) {
				//devuelve el cálculo recursivo
				return 1 * pow(10,i-1) + binario( num - pow(2,i-1) );
			}	
		}
	}
}
