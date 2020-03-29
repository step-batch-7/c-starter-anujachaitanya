#include <stdio.h>

unsigned long int factorial(int);
int fibonacci(int);
int print_evens(int);
unsigned char is_even(int);
int print_odds(int);
int print_multiplication_table(int, int);
long int add_numbers(int, int);

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

int print_odds(int endingAt)
{
  printf("\nOdd numbers between %d and %d are:\n", 1, endingAt);
  for (int num = 1; num <= endingAt; num++)
  {
    !is_even(num) && printf("%d\n", num);
  }
  return 0;
}

int print_multiplication_table(int m, int n)
{
  printf("\nMultiplication table of %d upto %d:\n", m, n);
  for (int i = 1; i <= n; i++)
  {
    printf("%d x %d = %d\n", m, i, m * i);
  }
  return 0;
}

long int add_numbers(int startingAt, int endingAt)
{
  long int sum = 0;
  for (int num = startingAt; num <= endingAt; num++)
  {
    sum += num;
  }
  return sum;
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

  printf("\nEnter the number to get all evens: ");
  scanf("%d", &number);
  print_evens(number);

  printf("\nEnter the number to get all odds: ");
  scanf("%d", &number);
  print_odds(number);

  int upto;
  printf("\nEnter two numbers to get multiplication table ");
  scanf("%d %d", &number, &upto);
  print_multiplication_table(number, upto);

  printf("\nEnter two numbers to get addition ");
  scanf("%d %d", &number, &upto);
  printf("Addition from %d to %d is %ld", number, upto, add_numbers(number, upto));
  return 0;
}
