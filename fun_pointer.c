#include "main.h"

/**
* handle_print - Handles printing based on format specifier
* @fmt: Format string
* @ind: Pointer to the current format specifier index
* @list: Variable argument list (unused)
* @buffer: Buffer array (unused)
* @flags __attribute__((unused)): Flags (unused)
* @width __attribute__((unused)): Width (unused)
* @precision __attribute__((unused)): Precision (unused)
* @size __attribute__((unused)): Size (unused)
* Return: Number of characters printed
*/
int handle_print(const char *fmt, int *ind,
		va_list list __attribute__((unused)),
		char buffer[] __attribute__((unused)),
		int flags __attribute__((unused)),
		int width __attribute__((unused)),
		int precision __attribute__((unused)),
		int size __attribute__((unused)) )
{
int unknown_len = 0;

unknown_len += write(1, "%", 1);
unknown_len += write(1, &fmt[*ind], 1);
return (unknown_len);
}
