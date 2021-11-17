#include<stdio.h>
#include<math.h>

int main()
{
   int n, i, f;
   f=i=1;
   char izvelne;

   printf("Lietotaj, izvelies, kādā datu tipu attēlot fakteriaalu. 1 - int, 2 - long long, 3 - char: ");
   scanf("%d", &izvelne);

   switch(izvelne)
    {
      case 1:
        printf("Lietotaj, ievadi skaitli: ");
        scanf("%d", &n);
        if (n<8 && n>0)
         {
            while(i<=n)
            {
            f*=i;
            i++;
            }
            printf("Skaitla %d faktoriaals ir : %d",n,f);
            return 0;
         }
         else
         printf("Taa nevar. Juus izveelejaaties int. Skaitlim jaabuut pozitiivam un rezultaatam jaatbilst int datu tipam.");
         break;

      case 2:
      printf("Lietotaaj, ievadi skaitli: ");
      scanf("%d", &n);
        if (n<20 && n>0)
         {
            while(i<=n)
            {
            f*=i;
            i++;
            }
            printf("Skaitla %d faktoriaals ir : %d",n,f);
            return 0;
         }
         else
         printf("Taa nevar. Juus izveelejaaties long long. Skaitlim jaabuut pozitiivam un rezultaatam jaatbilst long long datu tipam.");
         break;

      case 3:
      printf("Lietotaaj, ievadi skaitli: ");
      scanf("%d", &n);
         if (n<5 && n>0)
         {
            while(i<=n)
            {
            f*=i;
            i++;
            }
            printf("Skaitla %d faktoriaals ir : %d",n,f);
            return 0;
         }
         else
         printf("Taa nevar. Juus izveelejaaties char. Skaitlim jaabuut pozitiivam un rezultaatam jaatbilst char datu tipam.");
         break;

      default: 
      printf("Nepareiza izvēle");
       }
}