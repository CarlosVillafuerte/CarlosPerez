#include <iostream>
#include <string>

using namespace std;

//DEclaramos la clase Doctor

class Doctor{
	public:
		//Atributos de la clase 
		string edad;
		string recetar;
		string operar;
		string especialidades;
		
		
		//constructor para inicializar atributos
		Vehiculo(string _edad, string _recetar, string _operar, string _especialidades){
			edad = _edad;
			recetar = _recetar;
			operar = _operar;
			especialidades = _especialidades;
			/*Imprimimos menaseje para indicar que el objeto Doctor se creee*/
			
			cout<<"se creo el objeto Doctor"<<endl;
			
		}
		/*Destructor se ejecuta cuando se destruye un objeto de la clase*/
	
	~ Doctor () {
		//Imprimimos un mensaje
		cout<<"Se destruyo el objeto Doctor." <<endl;
	}
	//Agregamos Metodo y acciones del objeto
	//metodo que representa la accion de Doctor hace cirugias
	void hacercirugias(){
		cout<<"El Doctor hacer cirugias." <<endl;
	}
	
	
};

	//hacemos un llamado a los metodos creados
	Doctor.hacercirugias();
	
	
	
	return 0;
}