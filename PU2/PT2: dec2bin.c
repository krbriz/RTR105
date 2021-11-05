#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
    int num, index, i;
    int bin[INT_SIZE];

    printf("Lietotaj, ievadi skaitli: ");
    scanf("%d", &num);

    index = INT_SIZE - 1;

    while(index >= 0)
    {
        bin[index] = num & 1;

        index--;
  
        num >>= 1;
    }

    printf("Binaarais skaitlis ir: ");
    for(i=0; i<INT_SIZE; i++)
    {
        printf("%d", bin[i]);
    }

    return 0;
}
