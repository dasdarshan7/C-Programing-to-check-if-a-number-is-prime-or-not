// C Programing to check if a number is prime or not 

#include <stdio.h>
#include <conio.h>
int main()
  {
      int n,i,m,f=0;
      printf(" Enter a number, to check if its prime or not: ");
      scanf("%d", &n);
      m=n/2;
      if(n==0||n==1)
      {
          printf(" %d is not a prime number",n);
	  }
     
      for(i=2;i<=m;i++)
      {
          if(n%i==0)
          {
          printf(" %d is not a prime number",n);
          f=1;
          break;
        }
    }
     if(f==0)
     {
         printf(" %d is a prime number",n);
        }
      getch();
      return 0;
  }

