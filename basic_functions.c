#include <stdio.h>
unsigned char is_even(int);
unsigned char is_odd(int);
long int square(int);
long int cube(int);
int gcd(int, int);
int lcm(int, int);
float simple_interest(int, int, float);
float fahrenheit_to_centigrade(int);

unsigned char is_even(int number)
{
  return number % 2 == 0;
}

unsigned char is_odd(int number)
{
  return !is_even(number);
}

long int square(int number)
{
  return number * number;
}

long int cube(int number)
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

int lcm(int number1, int number2)
{
  return number1 * number2 / gcd(number1, number2);
}

float simple_interest(int p, int n, float r)
{
  return (p * n * r) / 100;
}

float fahrenheit_to_centigrade(int temperature)
{
  return (temperature - 32) * 5 / 9;
}

int main(void)
{
  int number, number1, number2, principle, noOfYear, temperature;
  float rate;
  printf("Enter the number ");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_even(number) ? "even" : "not even");
  printf("%d is %s \n", number, is_odd(number) ? "odd" : "not odd");
  printf("Square of %d is %lu \n", number, square(number));
  printf("Cube of %d is %lu \n", number, cube(number));
  printf("\nEnter two numbers for calculating G.C.D. and L.C.M. ");
  scanf("%d %d", &number1, &number2);
  printf("G.C.D. of %d and %d is %d \n", number1, number2, gcd(number1, number2));
  printf("L.C.M. of %d and %d is %d \n", number1, number2, lcm(number1, number2));
  printf("\nEnter the 1. principle amount, \n2. number of years \n3. rate of interest \nto calculate simple and compound interest \n");
  scanf("%d %d %f", &principle, &noOfYear, &rate);
  printf("Simple interest is %f \n", simple_interest(principle, noOfYear, rate));
  printf("\nEnter temperature to convert into fahrenheit");
  scanf("%d", &temperature);
  printf("%d fahrenheit is %f centigrade\n", temperature, fahrenheit_to_centigrade(temperature));
}