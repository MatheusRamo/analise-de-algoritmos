
# Problema Simples

Dado um vetor A[1...n] contendo n números reais e um número k qualquer, descobrir se k está armazenado em A.

# Busca Linear

Percorra o vetor, comparando cada posiçaõ com o valor k.
Se o elemento A[i] é igual a k, devolva i. Se nenhum elemento for igual a k, devolva -1.

```
BuscaLiner(A, n, k)
    i = 1
    enquanto i < n faça
        se A[i] == k então
            devolve i
        i = i + 1
    devolve -1

```