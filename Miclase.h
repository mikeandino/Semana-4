#ifndef MICLASE_H
#define MICLASE_H

#include <string>
using namespace std;

class MiClase{
	private:
		int codigo;
		double salario;
		string nombre;
	public:
		MiClase(int,double,string);
		MiClase();
		//getters
		int getCodigo();
		double getSalario();
		string getNombre();
		//setterers
		void setCodigo(int);
		void setSalario(double);
		void setNombre(string);

		~MiClase();//destructor

};

#endif

