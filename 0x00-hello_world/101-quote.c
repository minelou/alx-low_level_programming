#include <unistd.h>
/**main - printd " and that piece of art is useful" - Dora Korpar, 2015-10-19
 * followed by a newline, to standar error.
 * Return: always 1.
 */

int main(void)

{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
