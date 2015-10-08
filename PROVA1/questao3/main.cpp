#include <iostream>
#include "questao3.cpp"

int main(void){
	int n,i;
	std::cin>>n;
	int *S=new int[n];
	if (!S) return 1;
	
	for(i=0;i<n;i++)
		std::cin>>S[i];
	
	std::cout<<(verificaRepeticao(S,n)? "EXISTE PELO MENOS DOIS ELEMENTOS IGUAIS":"NÃO EXISTE ELEMENTOS IGUAIS");
	
	return 0;
}
