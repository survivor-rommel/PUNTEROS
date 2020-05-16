#include<iostream>

using namespace std;


void ascendente(int *lista , int size){
	int aux;
	for(int i = 0 ; i < size ; i++){
		for(int j = 0 ; j < size-1 ; j++){
			if(*(lista+j) > *(lista+j+1)){
				aux  = *(lista+j);
				*(lista+j) = *(lista+j+1);
				*(lista+j+1) = aux;
			}
		}
	}
}

int main(){
	int  n ;
	cout<<"Cantidad de Elementos ? :\n";cin>>n;
	int *lista = new int[n];
	for(int i = 0 ; i <  n ; i ++ ){
		cout<<"Number?\n";
		cin>>*(lista+i);
	}
	ascendente(lista,n);
	for(int i = 0 ; i < n ; i++){
		cout<<*(lista++)<<" ";
	}
	
	return 0;
}
