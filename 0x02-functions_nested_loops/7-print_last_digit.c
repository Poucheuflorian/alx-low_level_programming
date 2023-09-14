#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @number: The number we want the last digit.
 *
 * Return: The last digit of the number.
 */

int print_last_digit(int number)
{ 
	int r;
  if(number > 0)
	r=number -10*(number/10);
  else
	  r=10*(number/10) - number;

	  _putchar('0' + r);
	 return r;
}
