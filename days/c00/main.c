#include <unistd.h>


//ft_putchar - skiped
//ex01: 
void ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n",27);
}

//ex02:
void ft_print_numbers(void)
{
	write(1, "0123456789\n", 11);
}

//ex03:
void ft_is_negative(int n)
{
	if(n < 0)
	{
		write(1, "N", 1);
	} 
	else
	{
		write(1, "P", 1);
	}
	write(1, "\n", 1);
}

//ex04:
void ft_print_combo(void)
{
	int a

int main() 
{
	//ft_print_alphabet();
	//ft_print_numbers();
	ft_is_negative(-4);
}


