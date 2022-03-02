## DCC013 - Estrutura de Dados / DCC107 - Laboratório de Programação II
# Atividade 1 - Ponteiros e alocação dinâmica de memória

A) Crie uma função int* intercala(int v1[], int v2[], int n, int *t); que recebe como parâmetros dois vetores de números inteiros vet1 e vet2 e um tamanho n (comum aos dois vetores), e retorna um novo vetor com os elementos dos dois vetores intercalados (1º valor de vet1, 1º valor de vet2, 2º valor de vet1, 2º valor de vet2 e assim sucessivamente). Caso os vetores possuam elementos iguais em alguma posição, o novo vetor só deve receber um valor (e não dois iguais). O novo vetor deve ser alocado com o número adequado de posições (atenção aos valores iguais em uma mesma posição dos vetores originais). O tamanho do novo vetor deve ser armazenado em t.

B) Crie um programa (função main) que aloque dois vetores de inteiros com um tamanho (igual para os dois) lido do teclado. Em seguida, faça a leitura dos elementos dos vetores e chame a função intercala. Ao final, imprima os elementos do vetor retornado. Certifique-se de que toda memória seja apropriadamente desalocada ao final do programa.
