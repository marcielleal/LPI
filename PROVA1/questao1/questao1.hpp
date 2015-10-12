#ifndef QUESSTAO1_HPP
#define QUESSTAO1_HPP

/*Todas sao recursao de cauda */
template <typename tipo>
int buscaSequencialR(tipo k,tipo v[],int n);

template <typename tipo>
int buscaBinariaAux(tipo num,tipo v[],int e,int d);
template <typename tipo>
int buscaBinariaR(tipo num,tipo *v,int tamanho);

#endif
