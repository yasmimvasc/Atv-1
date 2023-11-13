#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;

int dobro(int N);
void extenso(int dia ,int mes, int ano );
int pn (float n);
int qp(int n);
float vEsfera(float R);
int converteSegundos(int h, int m, int s);

float vEsfera(float R){
	float V = 4.0/3.0 * M_PI * pow(R,3);
	return V;
}
int qp(int n){
	if(n < 0 ){
		return 0;
	}
	
	float rq = sqrt(n);	
	if(rq - int(rq) == 0){
		return 1;
	}
	
	return 0;
	
}
int converteSegundos(int h, int m, int s){
	int r;
	r = s;
	r += m * 60;
	r += h * 3600;
	return r;
}

void extenso(int dia ,int mes, int ano ){
	if(dia < 1 or dia > 31){
		cout << "Data invalida";
		return;
	}
	if(mes < 1 or mes > 12){
		cout << "Data invalida";
		return;
	}
	if(ano < 1 or ano > 9999){
		cout << "Data invalida";
		return;
	}
	
	string m[12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
	string s;
	char buffer[5];
	sprintf(buffer,"%2d",dia);
	s += buffer;
	s += " de ";
	s += m[mes-1];
	s += " de ";
	sprintf(buffer,"%4d",ano);
	s += buffer;
	
	cout << s;
	
}


int dobro(int N){
	int d;
	d = N+N;
	return d;
}

int pn (float n){
	if (n > 0){
		return 1;
	}else{
		if (n < 0){
			return -1;
		}else{
			return 0;
		}
	}
}
