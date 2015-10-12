#include "questao1.hpp"

/*Todas sao recursao de cauda */
template <typename tipo>
int buscaSequencialR(tipo k,tipo v[],int n){
	if(n<=0) return -1;
	if(v[n-1]==k) return n-1;
	return buscaSequencialR(k,v,n-1);
}

template <typename tipo>
int buscaBinariaAux(tipo num,tipo v[],int e,int d){
	if(e<d-1){
		int m=(e+d)/2;
                if(v[m]>num) return buscaBinariaAux(num,v,e,m);
                else if(v[m]<num) return buscaBinariaAux(num,v,m,d);
		else return m;
	}return -1;
}
template <typename tipo>
int buscaBinariaR(tipo num,tipo *v,int tamanho){
        return buscaBinariaAux(num,v,-1,tamanho);
}
