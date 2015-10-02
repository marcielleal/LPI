#ifndef QUESTAO4_HPP
#define QUESTAO4_HPP
/*
void selectionSort(int v[],int n);
void imprime(int v[],int n);

void contagem(int v[],int n,int votos[],int mat[]);

/*Retorna o indice do maior item do vetor
int procuraMaior(int v[],int n);
void imprimeLista(int votos[],int mat[],int n);*/

class Aluno{
	int matricula;
	int votos;
	public:
		Aluno(int mat){this->matricula=mat;}
		void add(){votos++;}
		
		inline friend
		std::ostream &operator <<(std::ostream &_os,const Aluno &_obj){
			_os<<"Matrícula: "<<_obj.matricula<<", Votos: "<<_obj.votos<<std::endl;
			return _os;
		}
};
#endif
