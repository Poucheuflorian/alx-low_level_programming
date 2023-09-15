#include "main.h"
/**
 * times_table -  print in the standart output the table of 9 formatted
 *
 */
void times_table(void)
{
	int line;
	int column;

	for (line = 0 ; line <= 9 ; line++)
	{
		_putchar('0');
		_putchar(',');
		for  (column = 1 ; column <= 9 ; column++)
		{
			if (line * column < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + line * column);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + line * column / 10);
				_putchar('0' + (line * column) % 10);
			}
			if (column > 8)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
