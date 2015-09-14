#include <iostream>
#include "biblioteca.hpp"

//----------------------
void copia(int dest[],int origem[],int n){
	int i;
	for(i=0;i<n;i++)
		dest[i]=origem[i];
}

void imprime(int v[],int n){
	int i;
	for(i=0;i<n;i++)
		std::cout<<v[i]<<" ";
	std::cout<<std::endl;
}

void bagunca(int v[],int n){
	int i,j,m=n/2;
	for(i=0,j=m;i<m&&j<n;i++,j++)
		std::swap(v[i],v[j]);
}
//-----------------------
