#include <iostream>

int buscaSequencialI(int num,int *v,int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		if(*(v+i)==num) return i;
	}
	return -1;
}

int buscaSequencialR(int num, int *v,int tamanho){
	if(tamanho<=0) return -1;
	else if(*(v+(tamanho-1))==num) return (tamanho-1);
	
	return buscaSequencialR(num,v,tamanho-1);
}

int buscaBinariaI(int num,int *v, int tamanho){
	int e,m,d;
	e=-1; d=tamanho;
	while(e<d-1){
		m=(e+d)/2;
		if(*(v+m)<num) e=m;
		else if(*(v+m)>num) d=m;
		else return m;
	}
	return -1;
}
int buscaBinariaR2(int num,int *v, int e,int d){
	if(e>=d-1) return -1;
	else{
		int m=(e+d)/2;
		if(*(v+m)<num) return buscaBinariaR2(num,v,m,d);
		else if(*(v+m)<num) return buscaBinariaR2(num,v,e,m);
		else return m;
	}
}
int buscaBinariaR(int num,int *v, int tamanho){
	return buscaBinariaR2(num,v,-1,tamanho);
}
int main(){
	int a[9]={12, 15, 16, 20, 22, 28, 40, 60, 90};
	std::cout<< buscaBinariaR(12,a,9)<<std::endl;
	return 0;
}
