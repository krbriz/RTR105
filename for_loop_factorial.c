#include<stdio.h>


int main()
{
  int i,f=1,num;
  char izvelne;


  printf("Lietotaj, izvelies, kādā datu tipu attēlot fakteriaalu. 1 - int, 2 - long long, 3 - char: ");
  scanf("%d", &izvelne);

  switch(izvelne)
    {
      case 1:
        printf("Lietotaj, ievadi skaitli: ");
        scanf("%d",&num);
        if(num<8)
        {
        
 
        for(i=1;i<=num;i++)
        f=f*i;
 
        printf("Factorial of %d is: %d",num,f);
        return 0;
        }
        else
            printf("Taa nevar. Juus izveelejaaties int. Skaitlim jaabuut pozitiivam un rezultaatam jaatbilst int datu tipam.");
        break;

        case 2:
        printf("Lietotaaj, ievadi skaitli: ");
        scanf("%d",&num);
        if(num<20)
        {
        for(i=1;i<=num;i++)
        f=f*i;
 
        printf("Factorial of %d is: %d",num,f);
        return 0;
        }
        else
            printf("Taa nevar. Juus izveelejaaties long long. Skaitlim jaabuut pozitiivam un rezultaatam jaatbilst long long datu tipam.");
        break;

        case 3:
        printf("Lietotaaj, ievadi skaitli: ");
        scanf("%d",&num);
        if(num<5)
        {
        for(i=1;i<=num;i++)
        f=f*i;
 
        printf("Factorial of %d is: %d",num,f);
        return 0;
        }
        else
            printf("Taa nevar. Juus izveelejaaties char. Skaitlim jaabuut pozitiivam un rezultaatam jaatbilst char datu tipam.");
        break;

    }
        
}