#include <iostream>
#include "Funcoes.h" 
using namespace std;

int fatorial(int n){
	if(n == 1){
		return 1;
	}
	return n * fatorial(n-1);
}

void troca(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	
	int a = 5, b = 6;	
	troca(b,a);
	cout << a << b;
	
	cout << dobro(2);
	extenso(30,10,2023);
	cout << pn(-35.25);
	cout << qp(3);
	cout << vEsfera(12);
	cout << converteSegundos(1,1,1);
	cout << fatorial(17);
	
	
		
	return 0;
}
