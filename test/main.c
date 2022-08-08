/**
 * main - sample main program
 * Return: 0 on sucess
 */
int main(void)
{
	_printf("\n\n\nHere's some examples of what you could do with this custom_printf function!\n\n\n");
	sleep(1);
	_printf("\nPrinting Strings, Characters, and Numbers...... %s %c%drld\n\n", "Hello", 'W', 0);
	sleep(1);
	_printf("Printing Reverse...... %r \n\n", "Hello");
	sleep(1);
	_printf("Printing Binary (base 2)...... %b \n\n", "Hello");
	sleep(1);
	_printf("Printing Octal (base 8)...... %o \n\n", "Hello");
	sleep(1);
	_printf("Printing Rot13 (encrypt)...... %R \n\n", "Hello");
	sleep(1);
	_printf("\n\n             = )                  \n\n\n");
	return (0);
}
