#include "sorts.cpp"
#include "utilitarios.cpp"

int main(void){
	int n=7;
	int v[]={12,7,22,30,40,6,10};
	
	quick_aux(v,0,n-1);
	imprime(v,n);
	
	return 0;
}
