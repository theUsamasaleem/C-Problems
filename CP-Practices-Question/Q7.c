#include <stdio.h>
void main()
{
  int vaccinated_age;

  printf("Input the age of the candidate : ");
  scanf("%d",&vaccinated_age);
  if (vaccinated_age<18)
     {
       printf("Not Eligible for the vaccine. Kindly wait for the vaccination\n");
       printf("You would be able to get vaccinated after %d year.\n",18-vaccinated_age);
     }
  else
     printf("Eligible for the vaccine. Kindly proceed for the vaccination\n");
}