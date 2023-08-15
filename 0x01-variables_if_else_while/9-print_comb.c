#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 * main - Entry point
 * Return (0) Success
 */

int main(void)

{

	int j, k;

	 for (j = '0'; j <= '9'; j++);
	 {
		 for (k = j + 1; k <= '9'; k++);
		 {
			 if (j != k)
			 {
				 putchar(j);
				putchar(k);
				if (j == '8' && k == '9')
				continue;
				putchar(' ,');
				putchar(' ');
			 }
		 }
	 }
	 putchar('\n');
	 return (0);
}

