#include <stdio.h>

int buscaLinearEmOrdem(int arr[], int n, int k)
{
    int i;
    for(i = 0; i < n && k >= arr[i]; i++)
    {
        if(arr[i] == k) return i;
    }

    return -1;
}

int main(void)
{
    int array[10];
    int n, k, check;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    printf("\nDigite os elementos do array de forma ordenada\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nDigite k: ");
    scanf("%d", &k);

    check = buscaLinearEmOrdem(array, n, k);

    if(check != -1)
    {
        printf("\nO valor %d existe no array\n", k);
    }
    else
    {
        printf("\nO elemento %d não existe no array\n", k);
    }

    return 0;
}