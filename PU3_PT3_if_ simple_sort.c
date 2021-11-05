#include <stdio.h>
#include <math.h>

int main ()
{  
  int a, b, c;
  char izvelne;
  
  printf("Lietotaj, 1 = augosha, 2 = dilstosha seciba, izvelies: ");
  scanf("%d", &izvelne);
  switch(izvelne)
    {
    case 1:
        printf("Lietotaj, ievadi 3 skaitlus: ");
        scanf("%d %d %d",&a,&b,&c);
  
        if (a <= b && b <= c)
            {
                printf("%d, %d, %d",a,b,c);
            }
        else if (b <= a && a <= c)
            {
                printf("%d, %d, %d",b,a,c);
            }
        else if(c <= a && a <= b)
            {
                printf("%d, %d, %d",c,a,b);
            }
        else if(c <= b && b <= a)
            {
                printf("%d, %d, %d",c,b,a);
            }
        else if(a <= c && c <= b)
            {
                printf("%d, %d, %d",a,c,b);
            }
        else
            {
                printf("%d, %d, %d",b,c,a);
            }
        break;
        
    case 2:
    printf("Lietotaj, ievadi 3 skaitlus: ");
    scanf("%d %d %d",&a,&b,&c);

        if (a >= b && b >= c)
            {
                printf("%d, %d, %d",a,b,c);
            }
        else if (b >= a && a >= c)
            {
                printf("%d, %d, %d",b,a,c);
            }
        else if(c >= a && a >= b)
            {
                printf("%d, %d, %d",c,a,b);
            }
        else if(c >= b && b >= a)
            {
                printf("%d, %d, %d",c,b,a);
            }
        else if(a >= c && c >= b)
            {
                printf("%d, %d, %d",a,c,b);
            }
        else
            {
                printf("%d, %d, %d",b,c,a);
            }

    }
}