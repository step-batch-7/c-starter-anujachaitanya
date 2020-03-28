#include <stdio.h>
unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
int gcd(int, int);

unsigned char is_even(int number)
{
  return number % 2 == 0;
}

unsigned char is_odd(int number)
{
  return !is_even(number);
}

int square(int number)
{
  return number * number;
}

int cube(int number)
{
  return square(number) * number;
}

int gcd(int number1, int number2)
{
  if (number2 != 0)
  {
    return gcd(number2, number1 % number2);
  }
  else
  {
    return number1;
  }
}

int main(void)
{
  int number, number1, number2;
  printf("Enter the number ");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_even(number) ? "even" : "not even");
  printf("%d is %s \n", number, is_odd(number) ? "odd" : "not odd");
  printf("Square of %d is %d \n", number, square(number));
  printf("Cube of %d is %d \n", number, cube(number));
  printf("Enter Two Numbers ");
  scanf("%d %d", &number1, &number2);
  printf("G.C.D. of %d and %d is %d", number1, number2, gcd(number1, number2));
}