#include "questao2.hpp"
void maxAux(int v[],int n,int &res){
	int m=n/2;
	int aux;

	if(v[0]>=v[m]) aux=v[0];
	else aux=v[m];

	if(aux>res) res=aux;
}

void max(int v[],int n,int &res){
	int m;
	if(n>1){
		m=n/2;
		max(v,m,res);
		max(v+m,n-m,res);
		maxAux(v,n,res);
	}
}
//Considerando ini e fim o primeiro e o ultimo indice do vetor
void maximo(int v[],int ini,int fim,int *resultado){
	max(v,fim+1,*resultado);
}
