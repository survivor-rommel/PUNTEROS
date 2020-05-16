#include<iostream>

using namespace std;

void reverse(int lista[] , int size){
	for(int i = size-1;i >=0 ; i--)
		cout<<*(lista+i)<<" ";
}

//  EL RECURSIVO XD
void reverse2(int *lista , int size){
	if( size >= 0){
		cout<<*(lista+size)<<" ";
		reverse2(lista,--size);
	}
	
	
}

int main(){
	int  n ;
	cout<<"Cantidad de Elementos ? :\n";cin>>n;
	int *lista = new int[n];
	for(int i = 0 ; i < n ; i++){
		cout<<"Elemento : "<<endl;
		cin>>*(lista+i);
	}
	for(int i = 0 ; i < n ; i++ )
		cout<<lista[i]<<" ";
	
	cout<<"\n\nIterativo";
	cout << "\n\n";
	reverse(lista,n);
	
	cout<<"\n\nRecursivo\n";
	reverse2(lista,n-1);
	
	
	return 0;
}
