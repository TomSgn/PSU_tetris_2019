/*
** EPITECH PROJECT, 2019
** PSU_bstetris_2019
** File description:
** open_read.c
*/

#include "./include/tetris.h"

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        my_putstr("FAILURE\n");
        exit (84);
    } else {
        return (fd);
    }
    return (0);
}

char *get_first_line(char *str)
{
    int j = 0;
    char *dest = NULL;
    int a = 0;

    for (; str[a] != '\n'; a++);
    dest = malloc(sizeof(char) * a + 1);
    for (int i = 0; str[i] != '\n'; i++) {
        dest[j] = str[i];
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

char *get_block(char *str)
{
    int j = 0;
    char *dest = NULL;
    int a = 0;
    int i = 0;

    for (; str[a] != '\n'; a++);
    i = a;
    for (; str[i] != '\0'; i++) {
        dest[j] = str[i];
        j++;
    }
    dest[j] = '\0';
    return (dest);
}

char **fs_read_file(struct stat *file_i, char const *filepath)
{
    int fd = fs_open_file(filepath);
    stat(filepath, file_i);
    int size = file_i->st_size;
    char *buffer = malloc(sizeof(char) * size);
    char *result;
    char **tab;

    read(fd, buffer, size);
    result = get_first_line(buffer);
    tab = word_array(result, ' ');
    return (tab);
}

char *parsing_star(struct stat *file_i, char *filepath)
{
    int fd = fs_open_file(filepath);
    stat(filepath, file_i);
    int size = file_i->st_size;
    char *buffer = malloc(sizeof(char) * size);
    char *result;
    char **tab;

    read(fd, buffer, size);
    result = get_block(buffer);
    return (result);
}