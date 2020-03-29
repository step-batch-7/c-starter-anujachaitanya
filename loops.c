#include <stdio.h>

unsigned long int factorial(int);
int fibonacci(int);

unsigned long int factorial(int number)
{
  return (number == 1) ? 1 : number * factorial(number - 1);
}

int fibonacci(int length)
{
  int first = 0, second = 1;
  printf("\nFibonacci Series:\n");
  for (int index = 1; index <= length; index++)
  {
    printf("%d\n", first);
    int temp = second;
    second += first;
    first = temp;
  }
  return 0;
}

int main(void)
{
  int number;
  printf("Enter the number to get factorial ");
  scanf("%d", &number);
  printf("Factorial of %d is %lu\n", number, factorial(number));

  printf("Enter the number to get fibonacci series : ");
  scanf("%d", &number);
  fibonacci(number);
  return 0;
}
