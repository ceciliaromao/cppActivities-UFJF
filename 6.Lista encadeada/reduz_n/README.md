## DCC013 - Estrutura de Dados / DCC107 - Laboratório de Programação II
# Atividade 6 - Lista encadeada

Implementar a operação void ListaEncad::reduz_n(int n1); para diminuir o valor de n para o novo valor n1, onde n é o número de nós de uma lista simplesmente encadeada com descritor. O parâmetro n1 tem que estar entre 0 e n. Não basta apenas atribuir à n o seu novo valor n1, um número adequado de nós deve ser liberado para que a quantidade de nós alocados fique coerente com o novo valor para n. Desalocar os últimos nós da lista de forma que ela fique com os primeiros n1 nós. Emitir a mensagem "Valor invalido" caso n1 não esteja entre 0 e n. A operação reduz_n  tem que ser O(n).

Exemplo: Considere a lista simplesmente encadeada com descritor L com os valores L = [36 41 26 15 45]:
  O comando L.reduz_n(2) torna L = [36 41].
  O comando L.reduz_n(0) torna L = [] (	).

