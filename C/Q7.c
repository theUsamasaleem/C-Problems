#include <stdio.h>
#include<stdbool.h>  

void main()
{
  int vaccinated_age;
  bool urban=true;
  bool rural=true;

  printf("Input the age of the person : ");
  scanf("%d",&vaccinated_age);

  if (vaccinated_age<18 && rural)
     {
       printf("Not Eligible for the vaccine. Kindly wait for the vaccination\n");
       printf("You would be able to get vaccinated after %d year.\n",18-vaccinated_age);
     }
  else if(vaccinated_age>=18 && urban)
     printf("Eligible for the vaccine. Kindly proceed for the vaccination\n");
}
