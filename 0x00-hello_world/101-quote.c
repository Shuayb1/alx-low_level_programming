#include <stdio.h>

#include <unistd.h>



/**
 *
 *  * main - prints exactly "and that piece of art is useful"
 *
 *   * - Dora Korpar, 2015-10-19",
 *
 *    * followed by a new line, to the standard error.
 *
 *     * Return: 0 to end the prog
 */
int main(void)

{

	write(0,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (0);

}
