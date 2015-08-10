#include <iostream>

int buscaSequencialI(int num,int *p,int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		if(*(p+i)==num) return i;
	}
	return -1;
}

int buscaSequencialR(int num, int *p,int tamanho){
	if(tamanho<=0) return -1;
	else if(*(p+(tamanho-1))==num) return (tamanho-1);
	
	return buscaSequencialR(num,p,tamanho-1);
}

int buscaBinariaI(int num,int *p, int tamanho){
	int e,m,d;
	e=-1; d=tamanho;
	while(e<d-1){
		m=(e+d)/2;
		if(*(p+m)<num) e=m;
		else if(*(p+m)>num) d=m;
		else return m;
	}
	return -1;
}
int buscaBinariaR(int num,int *p, int tamanho){
	if(tamanho<=0) return -1;
	
	return 0;
}
int main(){
	int a[9]={12, 15, 16, 20, 22, 28, 40, 60, 90};
	std::cout<< buscaBinariaI(90,a,9)<<std::endl;
	return 0;
}
