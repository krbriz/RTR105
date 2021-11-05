#include<stdio.h>

int main(){
    long long a, b;

    printf("Ievadi skaitli 400000 un 100000\n");
    scanf("%lli %lli", &a, &b);
    printf("Skaitla %lli un %lli reizinajums ir %lli\n", a, b, (a*b));
    return 0;
}