#include "main.h"
/**
 * main - comment
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
		_puchar(letter);
	_puchar('\n');
}


