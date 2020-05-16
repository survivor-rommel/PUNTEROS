#include<iostream>
//
using namespace std;

int ArrSum(int *lista ,const int si_ze){
	int sum = 0 ;
	for(int i = 0 ; i < si_ze ; i++ )
		sum+=(*lista++);
	return sum;
}


// RECURSIVA  XDDDDDDD
int Arreglosuma(const *lista,  int tam){
	if(tam == 1) 
		return *lista;
	else 
		return *lista + Arreglosuma(++lista,--tam); 
}



int main(){
	int  n ;
	cout<<"Cantidad de Elementos ? :\n";cin>>n;
	int *lista = new int[n];
	for(int i = 0 ; i < n ; i++){
		cout<<"Elemento : \n";
		cin>>*(lista+i);
	}
	
	cout<<"Suma con funcion iterativa\n\n";
	cout<<ArrSum(lista,n)<<"\n\n";
	cout<<"Suma con funcion recursiva\n\n";
	cout<<Arreglosuma(lista,n)<<"\n\n";
	
	
	return 0;
}
