#include <iostream>
using namespace std;

class Alumno{
	private:
		int cui;
		int nota1,nota2,nota3;
		string nombre;
	public:
		Alumno(int a,int b,int c,int d,string e){
			cui=a;
			nota1=b;
			nota2=c;
			nota3=d;
			nombre=e;
		}
		void nombre1(){
			for (int i=0;i<15;i++){
				cout<<nombre[i];
				if(nombre[i]==' '){
					i=14;
				}
			}
		}

		void aprobar(){
			int prom;
			prom=(nota1+nota2+nota3)/3;
			if (prom>=10.5){
				cout<<endl<<"el alumno aprobo la asignatura de Ciencias de la computacion 2"<<endl;
			}
			else{
				cout<<endl<<"el alumno no aprobo la asignatura de Ciencias de la computacion 2"<<endl;
			}
		}
		void mostrar(){
			cout<<"CUI: "<<cui<<endl;
			cout<<"Primer nombre: ";
		}
		~Alumno(){
			cout<<"se borra todo";
		}
};
