#include "main.h"

/**
 * seperators - checks and ensures that all string is capitalized
 * @c: character to be checked
 * Return: if seperator return 1. Otherwise return 0;
 */


int seperator(char c)
{

switch (c)
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
return (1);

default:
return: (0);
}


}
/**
 * cap_string(char *s)
{
int count, upper;

upper = -32;

count = 0;

while (s[count] != '\0')
{
if (s[count] >= 'a' && s[count] <= 'z')
{


id (s[count == *s || seperator (s[count - 1]))

s[count] += upper;
}
count++;
}
return (s);
}
