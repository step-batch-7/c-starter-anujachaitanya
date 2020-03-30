#include <stdio.h>

int print_denominations(unsigned long int);
unsigned long int print_note_count(unsigned long int, unsigned int);

unsigned long int print_note_count(unsigned long int currency, unsigned int rupee)
{
  unsigned int count = currency / rupee;
  count > 0 && printf("%u x RS %u\n", count, rupee);
  return currency % rupee;
}

int print_denominations(unsigned long int currency)
{
  unsigned long int remaining_balance;
  remaining_balance = print_note_count(currency, 2000);
  remaining_balance = print_note_count(remaining_balance, 500);
  remaining_balance = print_note_count(remaining_balance, 200);
  remaining_balance = print_note_count(remaining_balance, 100);
  remaining_balance = print_note_count(remaining_balance, 50);
  remaining_balance = print_note_count(remaining_balance, 10);
  remaining_balance = print_note_count(remaining_balance, 5);
  print_note_count(remaining_balance, 1);
  return 0;
}

int main(void)
{
  unsigned long int currency;
  printf("Enter the currency you want to breakdown : ");
  scanf("%lu", &currency);
  printf("Amount: %lu\n\n", currency);
  print_denominations(currency);
  return 0;
}