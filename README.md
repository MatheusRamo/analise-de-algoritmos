# Análise de Algoritmos

## Busca Linear

Dado um vetor A[1...n] contendo n números reais e um número k qualquer, descobrir se k está armazenado em A.

Percorra o vetor, comparando cada posição com o valor k.
Se o elemento A[ i ] é igual a k, devolva i. Se nenhum elemento for igual a k, devolva -1.

```c
BuscaLinear(A, n, k)
    i = 1
    enquanto i < n faça
        se A[i] == k então
            devolve i
        i = i + 1
    devolve -1

```

## Implementação em C

```c
int buscaLinear(int arr[], int n, int k)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == k) return i;
    }

    return -1;
}
```

## Busca Em Dados Ordenados

Dado um vetor A[1...n] contendo n números reais em ordem crescente, i.e., A[ i ] <=A[i + 1] para todo 1 <= i < n, e um número real k qualquer, descobrir se k está armazenado em A.

```c
BuscaLinearEmOrdem(A, n, k)
    i = 1
    enquanto i <= n e k >= A[i] faça
        se A[i] == k então
            devolve i
        i = i + 1
    devolve -1
```

## Implementação Em C

```c
int buscaLinearEmOrdem(int arr[], int n, int k)
{
    int i;
    for(i = 0; i < n && k >= arr[i]; i++)
    {
        if(arr[i] == k) return i;
    }

    return -1;
}
```

## Busca Binaria

```c
BuscaBinaria(A, n, k)
    esq = 1
    dir = n
    enquanto esq <= dir faça
        meio = (esq + dir) / 2
        se A[meio] == k então
            devolve meio
        senão se k > A[meio] então
            esq = meio + 1
        senão
            dir = meio - 1
    devolve -1

```
