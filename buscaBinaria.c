#include <stdio.h>

int buscaBinaria(int arr[], int n, int k)
{
    int left, right, half;
    left = 0;
    right = n;

    while(left <= right)
    {
        half = (left + right) / 2;
        
        if(arr[half] == k)
        {
            return half;
        }
        else if (k > arr[half] )
        {
            left = half + 1;
        }
        else
        {
            right = half - 1;
        }
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

    check = buscaBinaria(array, n, k);

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