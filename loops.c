#include <stdio.h>

unsigned long int factorial(int);
int fibonacci(int);
int print_evens(int);
unsigned char is_even(int);
int print_odds(int);
int print_multiplication_table(int, int);
long int add_numbers(int, int);
long int multiply_numbers(int, int);

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

int print_odds(int upto)
{
  printf("\nOdd numbers between %d and %d are:\n", 1, upto);
  for (int number = 1; number <= upto; number++)
  {
    !is_even(number) && printf("%d\n", number);
  }
  return 0;
}

int print_multiplication_table(int m, int n)
{
  printf("\nMultiplication table of %d upto %d:\n", m, n);
  for (int index = 1; index <= n; index++)
  {
    printf("%d x %d = %d\n", m, index, m * index);
  }
  return 0;
}

long int add_numbers(int start, int end)
{
  long int sum = 0;
  for (int number = start; number <= end; number++)
  {
    sum += number;
  }
  return sum;
}

long int multiply_numbers(int start, int end)
{
  long int product = 1;
  for (int num = start; num <= end; num++)
  {
    product *= num;
  }
  return product;
}

int print_nth_number(int step, int start, int end)
{
  printf("\nEvery %dth number between %d and %d are:\n", step, start, end);
  for (int number = start; number <= end; number += step)
  {
    printf("%d\n", number);
  }
  return 0;
}

long int add_evens(int start, int end)
{
  long int sum = 0;
  for (int number = start; number <= end; number++)
  {
    is_even(number) && (sum += number);
  }
  return sum;
}

int print_odds_backwards(int start)
{
  printf("\nOdds between %d and 1 in reverse order are:\n", start);
  for (int number = start; number >= 1; number--)
  {
    !is_even(number) && printf("%d\n", number);
  }
  return 0;
}

int main(void)
{
  int number, upto, step;
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

  printf("\nEnter two numbers to get multiplication table ");
  scanf("%d %d", &number, &upto);
  print_multiplication_table(number, upto);

  printf("\nEnter two numbers to get addition ");
  scanf("%d %d", &number, &upto);
  printf("Addition from %d to %d is %ld\n", number, upto, add_numbers(number, upto));

  printf("\nEnter two numbers to get multiplication ");
  scanf("%d %d", &number, &upto);
  printf("Multiplication from %d to %d is %ld\n", number, upto, multiply_numbers(number, upto));

  printf("\nEnter the start and ending of series with step ");
  scanf("%d%d%d", &number, &upto, &step);
  print_nth_number(step, number, upto);

  printf("\nEnter two numbers to get addition of even numbers ");
  scanf("%d %d", &number, &upto);
  printf("Addition of evens from %d to %d is %ld\n", number, upto, add_evens(number, upto));

  printf("\nEnter the number to get all odds in reverse order : ");
  scanf("%d", &number);
  print_odds_backwards(number);
  return 0;
}
