#ifndef QUESTAO4_HPP
#define QUESTAO4_HPP
#include <iostream>
/*
void selectionSort(int v[],int n);
void imprime(int v[],int n);

void contagem(int v[],int n,int votos[],int mat[]);

Retorna o indice do maior item do vetor
int procuraMaior(int v[],int n);
void imprimeLista(int votos[],int mat[],int n);*/

class DictAluno{
	protected:
		struct Aluno{
			int matricula;
			int votos;
		};
		Aluno *pt_alunos;
		int tamanho;
		int capacidade;

		int _search(int _key) const;
		bool _duplica();
		void _merge(void);
		void _mergeSort(void);
		void _copia(int dest[],int origem[],int n);
	public:
		DictAluno(int _MaxSz=50){pt_alunos=new Aluno[_MaxSz]; if(pt_alunos){this->capacidade=_MaxSz;this->tamanho=0;}};
		~DictAluno(){delete [] pt_alunos;};
		bool inserir(int _mat);
		void ordenar();

		inline friend
		std::ostream &operator <<(std::ostream &_os,const DictAluno &_obj){
			_os<<"{";
			for(int i=0;i<_obj.tamanho;i++)
				_os<<"Matrícula: "<<_obj.pt_alunos[i].matricula<<"Votos: "<<_obj.pt_alunos[i].votos<<std::endl;
			_os<<"}";
			return _os;
		}
};
#endif
