
/**
 * _isalpha - Determine if a caracter is alphabetic
 * @c : The caracter
 *
 * Return: 1 if is the caracter is alphabetic and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
