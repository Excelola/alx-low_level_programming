#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
int main()
{
char destination[] = "Hello ";
    char source[] = "World!";
    strcat(destination,source);
    printf("Concatenated String: %s\n", destination);
    return 0;
