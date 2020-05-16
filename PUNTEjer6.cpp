#include<iostream>

using namespace std;

 
void copiar( char *a ,const char *b ){
	char *p;
	for( p = a , b ; (*p = *b )!= '\0' ; p++ , b++ );
	cout<<a;
}


int main(){
	const char *b = new char[50];
	char *a = new char[50];
	b = "hola mundo";	
	copiar(a,b); // tomar en cuenta que la cadena a  esta vacia 
	return 0;
}
