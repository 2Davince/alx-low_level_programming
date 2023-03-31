#include <ctype.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *s)
{
		int cap_next = 1;
		int len = strlen(s);
		
		for (int i = 0; i < len; i++) 
		{
			if (isspace(s[i]) || s[i] == ',' || s[i] == ';' || s[i] == '.' ||
					s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
					s[i] == ')' || s[i] == '{' || s[i] == '}') 
			{
				cap_next = 1;
			} 
			else if (cap_next)
       
	{
		s[i] = toupper(s[i]);
		cap_next = 0;
	}
	}

	return (s);
}


