#include <iostream>
#include "questao4.cpp"
int main(void){
	int n,i;
	std::cin>>n;
	int *S=new int[n];				//Sequencia S de matriculas

	for(i=0;i<n;i++)
        	std::cin>>S[i];				//Peenchendo sequencia
        	
	DictAluno *novo=new DictAluno;			//Criando um objeto lista de alunos
	
	for(i=0;i<n;i++)				//Preenchendo a lista de alunos
		if(!novo->inserir(S[i])) 
			std::cout<<"ERRO AO INSERIR O ELEMENTO"<<i<<"NA LISTA DE ALUNOS"<<std::endl;
	

	novo->imprimeMelhor();				//Imprime o aluno com mais votos
	std::cout<<*novo<<std::endl;			//Imprime a lista de alunos e seus respectivos votos

	return 0;
}
