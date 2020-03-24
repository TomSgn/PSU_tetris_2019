/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** task01
*/

char *my_strcpy(char *dest, char const *src)
{
    int j = 0;
    for (int i = 0; src[i] != '\0'; i++) {
        dest[j] = src[i];
        j++;
    }
    dest[j] = '\0';
    return (dest);
}
