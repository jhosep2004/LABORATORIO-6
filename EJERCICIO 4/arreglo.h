#include<iostream>
using namespace std;
class Arreglo{
	private:
		int array[5]={2,5,1,6,0};
	public:
		void agregar(){
			int cont=0;
			for(int i=0;i<5;i++){
				if(array[i]==0){
					cout<<"la posicion ["<<i+1<<"] esta vacio, si es posible agregarle numero "<<endl;
					cout<<"ingrese numero que decea agregar: ";
					cin>>array[i];
				}
				else{
					cont=cont+1;
				}
			}
			if(cont==5){
				cout<<"el arreglo esta lleno"<<endl;
			}
		}
		void eliminar(){
			int sacar;
			int cnt=0;
			for(int i=0;i<5;i++){
				if(array[i]!=0){
					cnt=cnt+1;
				}
		    }
		    if(cnt!=0){
		    	cout<<"si hay numeros para eliminar"<<endl;
		    	int sum=0;
		    	do{
		    		cout<<"ingrese numero a eliminar: ";
		    		cin>>sacar;
		    		for(int i=0;i<5;i++){
		    			if (array[i]==sacar){
		    				sum=sum+1;
						}
					}
				}while(sum==0);
				for(int j=0;j<5;j++){
					if (array[j]==sacar){
						array[j]=0;
					}
				}
			}
		}
		void mostrar(){
			cout<<"el arreglo es : ";
			for(int i=0;i<5;i++){
				cout<<array[i]<<" ";
			}
			cout<<endl;
		}
		~Arreglo(){
			cout<<"se borra todo";
		}
};
