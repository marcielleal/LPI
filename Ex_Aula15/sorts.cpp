#include <iostream>
#include <stdlib.h>
#include "biblioteca.hpp"

//Bubble
void bubble(int v[],int n){	
	int i=n-1,j;
	while(i--){		//Executa n-1 vezes
		for(j=0;j<n-1;j++){	//j vai ate o penultimo elemento
			if(v[j]>v[j+1]) 
				std::swap(v[j],v[j+1]);
		}
	}
}

void selection(int v[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(v[i]>v[j]) 
				std::swap(v[i],v[j]);
		}
	}
}

void insertion(int v[],int n){
	int i,j,atual;
	for(i=1;i<n;i++){
		atual=v[i];
		for(j=i-1;(j>=0)&&(atual<v[j]);j--)
			v[j+1]=v[j];
		v[j+1]=atual;
	}
}

//Merge Sort---------------
void merge(int v[],int n){
	int m=n/2;
	int i,j,k;
	int *w;

	w=new int[n];
	if(w==NULL) exit(1);
	
	for(i=0,j=m,k=0;i<m&&j<n;){
		if(v[i]<=v[j]) w[k++]=v[i++];
		else w[k++]=v[j++];
	}
	if(i<m) while(i<m) w[k++]=v[i++];
	if(j<n) while(j<n) w[k++]=v[j++];
	
	copia(v,w,n);
	delete w;
}

void mergeSort(int v[],int n){
	int m;
	if(n>1){
		m=n/2;
		mergeSort(v,m);
		mergeSort(v+m,n-m);
		merge(v,n);
	}
}
//----------------------
