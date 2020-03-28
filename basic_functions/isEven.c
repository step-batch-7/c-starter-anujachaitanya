#include <stdio.h>

int isEven(int);

int isEven(int number)
{
  return number % 2 == 0;
}

int main(void)
{
  int number;
  printf("Enter the number");
  scanf("%d", &number);
  int result = isEven(number);
  if (result == 0)
  {
    printf("%d is not even number ", number);
  }
  else
  {
    printf("%d is even number", number);
  }
}