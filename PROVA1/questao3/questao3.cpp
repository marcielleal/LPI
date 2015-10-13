#include <stdlib.h>
#include "questao3.hpp"
template <typename tipo>
void copia(tipo dest[],tipo origem[],int n){
        int i;
        for(i=0;i<n;i++)
                dest[i]=origem[i];
}
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
bool verificaRepeticao(int S[],int n){
        mergeSort(S,n);
        for(int i=0;i<n-1;i++)
                if(S[i]==S[i+1])
                        return true;
	return false;
}
