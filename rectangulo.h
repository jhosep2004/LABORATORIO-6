#include<iostream>
using namespace std;

class Rectangulo{
	private:
		int ancho,largo;
	public:
		Rectangulo(int a,int b){
			ancho=a;
			largo=b;
		}
		void area(){
			cout<<"el area de el rectangulo es: "<<largo*ancho<<endl;
		}
		void perimetro(){
			cout<<"el perimetro es: "<<2*largo+2*ancho<<endl;
		}
		~Rectangulo(){
			cout<<"se borra ";
		}
};
