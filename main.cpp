#include "Miclase.h"

#include <iostream>
using namespace std;

int main(){
	MiClase* objeto=new MiClase(1,8000,"Juan pable");

	cout<<"Nombre:"<<objeto->getNombre()<<endl;

	cout<<(*objeto).getNombre()<<endl;
	
	MiClase objeto2(2,9000,"pedro");

	MiClase& referencia=objeto2;
	
	cout<<"Salario:"<<referencia.getSalario()<<endl;
	
	cout<<"Referencia"<<&objeto2<<endl;	
	
	delete objeto;
return 0;
}
