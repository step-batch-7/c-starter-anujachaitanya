#include <stdio.h>
unsigned char is_even(int);
unsigned char is_odd(int);

unsigned char is_even(int number)
{
  return number % 2 == 0;
}

unsigned char is_odd(int number)
{
  return !is_even(number);
}

int main(void)
{
  int number;
  printf("Enter the number ");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_even(number) ? "even" : "not even");
  printf("%d is %s \n", number, is_odd(number) ? "odd" : "not odd");
}