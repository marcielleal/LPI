/* --------------Segunda questão:------------
 * Considerando a busca binária recursiva, temos:
 * 
 * buscaBinariaR chama buscaBinariaR2 com e=-1 e d=tamanho=6.
 *
 * ##Para num=23:
 * 
 * Primeira chamada
 * m=(e+d)/2 <---> m=(-1+6)/2 <---> m=2
 * O elemento de índice 2 do vetor tem valor igual a 10.
 * Logo, a função buscaBinariaR2 será chamada com e=m=2 e d=6.
 * 
 * Segunda chamada
 * m=(2+6)/2 <---> m=4
 * O elemento de índice 4 do vetor tem valor igual a 23.
 * Logo, a função irá retornar o próprio m, ou seja, 4.
 * E assim, buscaBinariaR retornará 4.
 * 
 * 
 * ##Para num=19
 * Primeira chamada
 * m=(e+d)/2 <---> m=(-1+6)/2 <---> m=2
 * O elemento de índice 2 do vetor tem valor igual a 10.
 * Logo, a função buscaBinariaR2 será chamada com e=m=2 e d=6.
 * 
 * Segunda chamada
 * m=(2+6)/2 <---> m=4
 * O elemento de índice 4 do vetor tem valor igual a 23.
 * Logo, a função buscaBinariaR2 será chamada com e=2 e d=m=4.
 *
 * Terceira chamada
 * m=(2+4)/2 <---> m=3
 * O elemento de índice 3 do vetor tem valor igual a 18.
 * Logo, a função buscaBinariaR2 será chamada com e=3 e d=m=4.
 * 
 * Quarta chamada
 * e==d-1, logo a função retorná -1
 * E assim, buscaBinariaR retornará -1 ao main
 */
