

/**
 * print_name - prints a name using the provided function pointer
 * @name: name of the person
 * @f: function pointer to the desired print function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
