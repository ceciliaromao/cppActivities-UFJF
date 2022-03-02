## DCC013 - Estrutura de Dados / DCC107 - Laboratório de Programação II
# Atividade 5 - Lista contígua

Implementar a operação ListaCont* ListaCont::retornaPares(); que retorna uma nova lista com os elementos pares de uma lista contígua. Os elementos pares devem ser removidos da lista original. Para isso, deve ser usado um vetor auxiliar para que não seja necessário ficar “puxando” elemento a elemento. Se a lista não possuir nenhum valor par, deve ser retornado NULL. Ao final, as listas não devem possuir “folga”, ou seja, o valor de max deve ser igual ao valor de n em ambas as listas. A operação deve percorrer a lista original no máximo 2 vezes.

Exemplo: Considere uma lista com os valores [3, 2, 5, 4, 9]. A lista resultante é [3, 5, 9] e a nova lista é [2, 4].
