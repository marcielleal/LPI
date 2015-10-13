#ifndef QUESTAO4_HPP
#define QUESTAO4_HPP
#include <iostream>
template <typename tipo>
void copia(tipo dest[],tipo origem[],int n);

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
                bool _duplica(void);
                void _merge(Aluno v[],int n);
                void _mergeSort(Aluno v[],int n);
	public:
		DictAluno(int _MaxSz=50);
		~DictAluno(void);
		bool inserir(int _mat);
		void ordenar(void);
		void imprimeMelhor(void);

                inline friend
                std::ostream &operator <<(std::ostream &_os,const DictAluno &_obj){
                        _os<<"[";
                        for(int i=0;i<_obj.tamanho;i++)
                                _os<<"{Matrícula: "<<_obj.pt_alunos[i].matricula<<" Votos: "<<_obj.pt_alunos[i].votos<<"}";
                        _os<<"]"<<std::endl;
                        return _os;
                }
};
#endif
