#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float numero1,numero2,suma,resta,multiplicacion,division;
	
	cout<<"Digite un numero: ";
	cin>>numero1;
	
	cout<<"Digite otro numero: ";
	cin>>numero2;
	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	
	cout<<"\nLa suma da "<<suma<<endl;
	cout<<"La resta da "<<resta<<endl;
	cout<<"La multiplicacion da "<<multiplicacion<<endl;
	cout<<"La division da "<<division<<endl;
	
	return 0;
	getch();
}
