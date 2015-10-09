#include "questao4.hpp"
template <typename tipo>
void copia(tipo dest[],tipo origem[],int n){
	int i;
	for(i=0;i<n;i++)
		dest[i]=origem[i];
}

void DictAluno::_merge(Aluno v[],int n){
	int m=n/2;
	int i,j,k;
	
	Aluno *w=new Aluno[n];;
	if(w==NULL) return;
	
	for(i=0,j=m,k=0;i<m&&j<n;){
		if(v[i].votos<=v[j].votos) w[k++]=v[i++];
		else w[k++]=v[j++];
	}
	
	if(i<m) while(i<m) w[k++]=v[i++];
	if(j<n) while(j<n) w[k++]=v[j++];
	
	copia(v,w,n);
	
	delete w;
}
void DictAluno::_mergeSort(Aluno v[],int n){
	int m;
	if(n>1){
		m=n/2;
		_mergeSort(v,m);
		_mergeSort(v+m,n-m);
		_merge(v,n);
	}
}
int DictAluno::_search(int _key) const{
	for(int i=0;i<tamanho;i++)
		for(int j=0;j<tamanho;j++)
			if(this->pt_alunos[i].matricula==_key)
				return i;
	return -1;
}
bool DictAluno::inserir(int _mat){
	if(!this->pt_alunos) return false;	//Se ocorreu erro na alocacao do vetor||se ja existe este aluno no vetor
	if(this->tamanho>=this->capacidade) 						//Se nao tiver local no vetor para armazenar
		if(!this->_duplica()) return false;						//Se tiver ocorrido erro na duplicacao do vetor
	
	int aux=this->_search(_mat);
	if(aux>-1)							//Se achou, adiciona um voto
		this->pt_alunos[aux].votos++;
	else{
		this->pt_alunos[tamanho].matricula=_mat;
		this->pt_alunos[tamanho].votos++;
		this->tamanho++;
	}
	return true;
}
bool DictAluno::_duplica(){				//Duplicar o vetor caso tenha enchido
	Aluno *aux=pt_alunos;
	Aluno *novo=new Aluno[this->capacidade*2];
	if(!novo) return false;
	pt_alunos=novo;
	delete [] aux;
	return true;
}

void DictAluno::ordenar(){
	this->_mergeSort(this->pt_alunos,this->tamanho);
}
