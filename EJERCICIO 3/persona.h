#include<iostream>
using namespace std;
class Persona{
	private:
		int dia,mes,year;
		string nombre;
	public:
		Persona(int x,int y,int z,string a){
			nombre=a;
			dia=x;
			mes=y;
			year=z;
		}
		void edad(){
			int dia1,mes1,year1;
			cout<<"ingrese mes actual: ";cin>>mes1;
			cout<<"ingrese dia actual: ";cin>>dia1;
			cout<<"ingrese año actual: ";cin>>year1;
			cout<<"usted tiene "<<year1-year<<" años"<<endl;	
		}
		~Persona(){
			cout<<"se borra";
		}
};
