#include "questao4.hpp"
/*Ordena a sequencia 
void selectionSort(int v[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(v[i]>v[j])
				std::swap(v[i],v[j]);
		}
	}
}

void imprime(int v[],int n){
	int i;
	for(i=0;i<n;i++)
		std::cout<<v[i]<<" ";
	std::cout<<std::endl;
}

void contagem(int v[],int n,int votos[],int mat[]){
	int i=0,j,k=0,l=0;
	for(j=1;i<n;j++){
		if(v[i]!=v[j]){
			votos[k]=l;
			mat[k]=v[i];
			i=j; k++; l=0;
		}
		l++;
	}
}
Retorna o indice do maior item do vetor
int procuraMaior(int v[],int n){
	int i,maior=-1,im;
	for(i=0;i<n;i++){
		if(v[i]>maior){ 
			maior=v[i];
			im=i;
		}
	}
	return im;
}


void imprimeLista(int votos[],int mat[],int n){
	int i,a;
	for(i=0;i<n;i++){
		a=procuraMaior(votos,n);
		if(mat[a]!=0){
			std::cout<<"Aluno de matrícula: "<<mat[a]<<" Pontuação: "<<votos[a]<<std::endl;
			votos[a]=-1;
		}
	}
}
*/
void DictAluno::_copia(int dest[],int origem[],int n){
	int i;
	for(i=0;i<n;i++)
		dest[i]=origem[i];
}
void DictAluno::merge(int v[],int n){
	int m=n/2;
	int i,j,k;
	int *w;
	
	w=new int[n];
	if(w==NULL) exit(1);
	
	for(i=0,j=m,k=0;i<m&&j<n;){
		if(v[i]<=v[j]) w[k++]=v[i++];
		else w[k++]=v[j++];
	}
	
	if(i<m) while(i<m) w[k++]=v[i++];
	if(j<n) while(j<n) w[k++]=v[j++];
	
	copia(v,w,n);
	
	delete w;
}
void mergeSort(int v[],int n){
int m;
if(n>1){
m=n/2;
mergeSort(v,m);
mergeSort(v+m,n-m);
merge(v,n);
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
		pt_alunos[aux].votos++;
	else{
		this->pt_alunos[tamanho].matricula=_mat;
		this->pt_alunos[tamanho].votos++;
		tamanho++;
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
