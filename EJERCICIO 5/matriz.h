#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class matriz{
	private:
		int m[3][3];
	public:
		int crearmatriz(){
			int ran;
			srand(time(NULL));
			for(int i=0;i<3;i++){
				for (int j=0;j<3;j++){
					ran=1+rand()%(10-1);
					m[i][j]=ran;
				}
			}
		}
		int mostrar(){
			for(int i=0;i<3;i++){
				for (int j=0;j<3;j++){
					cout<<m[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		int buscar(){
			int numbus,a=-1,b=-1;
			cout<<"ingrese numero a buscar: ";
			cin>>numbus;
			int cont=0;
			for(int i=0;i<3;i++){
				for (int j=0;j<3;j++){
					if(m[i][j]==numbus){
						a=i;
						b=j;	
					}
				}
			}
			if(a!=-1 and b!=-1){
				cout<<"el numero si se encontro en la posicion: ["<<a+1<<"]["<<b+1<<"]"<<endl;
			}
			else{
				cout<<"el numero no se encontro"<<endl;
			}
		}
		~matriz(){
			cout<<"se borra todo";
		}
		
};
