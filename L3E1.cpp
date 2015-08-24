#include <iostream>

int *retorna(int g){ int *p=&g; return p;}	/*Por que return &g nao deu certo?*/

int soma(int *f(int),int inicio, int fim){
	int soma=0;
	for(;inicio<=fim;inicio++){
		soma+=*(f(inicio));
	}
	return soma;
}

int main(void){
	int x;
	std::cin>>x;
	std::cout<<soma(retorna,2,x);
	return 0;
}
