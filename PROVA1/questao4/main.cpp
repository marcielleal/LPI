#include <iostream>
#include "questao4.cpp"
int main(void){
	int n,i;
	std::cin>>n;
	int *S=new int[n];					//Sequencia S de matriculas
	
	for(i=0;i<n;i++){
		S[i]=i;					//Preenchendo a sequencia
		std::cout<<S[i];
	}	
	S[i]=i;
	S[i]=i;
	DictAluno *novo=new DictAluno(6);
	for(i=0;i<n;i++)
		if(!novo->inserir(S[i])) std::cout<<"OLHA A MERDA"<<std::endl;
	
	novo->imprimeMelhor();
	std::cout<<*novo<<std::endl;

	return 0;
}
