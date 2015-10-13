#include <iostream>
#include "questao1.cpp"

int main(void){
	int v[]={10,20,40,56,80};
	
	std::cout<<buscaSequencialR(40,v,5)<<std::endl;
	std::cout<<buscaSequencialR(50,v,5)<<std::endl;
	std::cout<<buscaBinariaR(80,v,5)<<std::endl;
	std::cout<<buscaBinariaR(12,v,5)<<std::endl;
	
	return 0;
}
