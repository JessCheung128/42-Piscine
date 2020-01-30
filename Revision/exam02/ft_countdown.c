/*Write a program that displays all digits in descending order, followed by a
newline.*/

#include <unistd.h>

int main(void)
{
	write(1, "9876543210\n",11);
	return(0);
}
