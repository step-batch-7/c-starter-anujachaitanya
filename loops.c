#include <stdio.h>

unsigned long int factorial(int);

unsigned long int factorial(int number)
{
  if (number == 1)
  {
    return 1;
  }
  else
  {
    return number * factorial(number - 1);
  }
}

int main(void)
{
  int number;
  printf("Enter the number to get factorial ");
  scanf("%d", &number);
  printf("Factorial of %d is %lu\n", number, factorial(number));
  return 0;
}
