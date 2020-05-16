#include<iostream>

using namespace std;


int longitud(char *A){
	int z= 0;
	while(*(A++) != char(0))
		z++;
	return z;
}


void concatenar(char *B , char *A ){
	int tam = (longitud(A)-1)+(longitud(B)-1);
	char *c = new char[tam]; 
	char  *b , * resul;
	for( resul = c , b = B ; (*resul = *b ) != char(0) ; resul++ ,  b ++  );
	for(b = A ; (*resul = *b)!= char(0); resul++ , b++ ); 
	cout<<c;	

}


int main(){
	char *b = new char[50];
	char *a = new char[25];
	
	b = "hola como ";
	a = "te fue hoy?";
	concatenar(b,a);
	
	cout<<"\n\n";
	
	
	system("pause");
	return 0;
}
