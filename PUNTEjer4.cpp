 #include<iostream>
// 4 
using namespace std;

int tamanio(const char *c){
	int a = 0;
	while(*(c++) != char(0)){
		a++;
	}
	return a;
}
int tamanio2(const char *c){
	int suma = 0;
	if(*c == char(0))
		return suma;
	return (suma+=1)  + tamanio2(++c);	
}

int main(){

	char  const *cad = "holamundoquetal";
	
	cout<<"La cadena tiene : "<<tamanio(cad)<<" elementos "<<endl;
	cout<<"\n\nUso de la funcion Recursiva\n\nLa cadena tiene : "<<tamanio2(cad)<<" elementos "<<endl;
	
	return 0;
}

