#include <stdio.h>

unsigned long int factorial(int);
int fibonacci(int);
int print_evens(int);
unsigned char is_even(int);

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

unsigned char is_even(int number)
{
  return number % 2 == 0;
}

int print_evens(int length)
{
  printf("\nEven numbers between 1 and %d are:\n", length);
  for (int num = 1; num <= length; num++)
  {
    is_even(num) && printf("%d\n", num);
  }
  return 0;
}

int main(void)
{
  int number;
  printf("Enter the number to get factorial ");
  scanf("%d", &number);
  printf("Factorial of %d is %lu\n", number, factorial(number));

  printf("\nEnter the number to get fibonacci series : ");
  scanf("%d", &number);
  fibonacci(number);

  printf("\nEnter the number to get all the evens: ");
  scanf("%d", &number);
  print_evens(number);
  return 0;
}
