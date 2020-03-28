#include <stdio.h>

int isEven(int);
int isOdd(int);

int isEven(int number)
{
  return number % 2 == 0;
}

int isOdd(int number)
{
  return isEven(number);
}

int main(void)
{
  int number;
  printf("Enter the number");
  scanf("%d", &number);
  int result = isEven(number);
  if (result == 0)
  {
    printf("%d is odd number ", number);
  }
  else
  {
    printf("%d is not odd number", number);
  }
}
