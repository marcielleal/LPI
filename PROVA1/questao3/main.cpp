#include <iostream>
#include "questao3.hpp"

int main(void){
	int n,i;
	std::cin>>n;
	int *S=new int[n];
	
	for(i=0;i<n;i++)
		std::cin>>S[i];
	
	std::cout<<(verificaRepeticao(S,n)? "EXISTE PELO MENOS DOIS ELEMENTOS IGUAIS":"NÃO EXISTE ELEMENTOS IGUAIS");
	
	return 0;
}
