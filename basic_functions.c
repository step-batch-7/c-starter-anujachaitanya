#include <stdio.h>
unsigned char is_even(int);
unsigned char is_odd(int);
long int square(int);
long int cube(int);
int gcd(int, int);
int lcm(int, int);
float simple_interest(int, int, float);
float fahrenheit_to_centigrade(int);
float centigrade_to_fahrenheit(int);
float average(int, int, int);

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
  return ((temperature - 32) * 5) / 9.00;
}

float centigrade_to_fahrenheit(int temperature)
{
  return ((temperature * 9 / 5.00) + 32);
}

float average(int no1, int no2, int no3)
{
  int sum = no1 + no2 + no3;
  return sum / 3.00;
}

int getGreater(int no1, int no2)
{
  return (no1 > no2) ? no1 : no2;
}

int greatest_of_three(int no1, int no2, int no3)
{
  return getGreater(getGreater(no1, no2), no3);
}

int main(void)
{
  int number, no2, no3, principle, noOfYear, temperature;
  float rate;
  printf("Enter the number ");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_even(number) ? "even" : "not even");
  printf("%d is %s \n", number, is_odd(number) ? "odd" : "not odd");
  printf("Square of %d is %lu \n", number, square(number));
  printf("Cube of %d is %lu \n", number, cube(number));
  printf("\nEnter two numbers for calculating G.C.D. and L.C.M. ");
  scanf("%d %d", &no2, &no3);
  printf("G.C.D. of %d and %d is %d \n", no2, no3, gcd(no2, no3));
  printf("L.C.M. of %d and %d is %d \n", no2, no3, lcm(no2, no3));
  printf("\nEnter the 1. principle amount, \n2. number of years \n3. rate of interest \nto calculate simple and compound interest \n");
  scanf("%d %d %f", &principle, &noOfYear, &rate);
  printf("Simple interest is %f \n", simple_interest(principle, noOfYear, rate));
  printf("\nEnter temperature to convert into celsius ");
  scanf("%d", &temperature);
  printf("%d fahrenheit is %f centigrade\n", temperature, fahrenheit_to_centigrade(temperature));
  printf("\nEnter the temperature to convert into fahrenheit ");
  scanf("%d", &temperature);
  printf("%d centigrade is %f fahrenheit\n", temperature, centigrade_to_fahrenheit(temperature));
  printf("\nEnter three numbers to calculate the average and greater of them ");
  scanf("%d %d %d", &number, &no2, &no3);
  printf("Average of %d %d and %d is %f\n ", number, no2, no3, average(number, no2, no3));
  printf("Greatest no between %d %d and %d is %d", number, no2, no3, greatest_of_three(number, no2, no3));
}