#include <iostream>

int compara(void *a,void *b){
	int m=*((int*)a);
	int n=*((int*)b);
	if(m<n) return 1;
	return 0;
}


void selection_sort(int compara(void*,void*),int *v, int tam){
	int i, j, min, aux;
	for (i = 0; i<(tam-1); i++) {
		min = i;
		for (j = (i+1); j <tam; j++) {
			if(compara((v+j),(v+min))) 
				min = j;
		}
		if (i != min) {
		  aux= *(v+i);
		  *(v+i)= *(v+min);
		  *(v+min) = aux;
		}
	}
}
int main(void){
	int a[]={12,14,7,9,10},i;
	selection_sort(compara,a,5);
	for(i=0;i<5;i++){
		std::cout<<a[i]<<std::endl;
	}
	return 0;
}
