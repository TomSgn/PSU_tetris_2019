/*
** EPITECH PROJECT, 2019
** PSU_bstetris_2019
** File description:
** display.c
*/

#include "./include/tetris.h"

void display_debug(void)
{
    my_printf("*** DEBUG ***\n");
    my_printf("KEY_LEFT : %s\n", "^EOD");
    my_printf("KEY_RIGHT : %s\n", "^EOC");
    my_printf("KEY_TURN : %s\n", "(space)");
    my_printf("KEY_DROP : %s\n", "x");
    my_printf("KEY_QUIT : %s\n", "q");
    my_printf("KEY_PAUSE : %s\n", "p");
    my_printf("NEXT : %s\n", "Yes");
    my_printf("LEVEL : %s\n", "1");
    my_printf("Size : %s*%s\n", "20", "10");
    my_printf("Tetriminos : %s\n", "7");
}

char *name_pars(char *filename, tab_t *data) 
{
    int j = 0;
    char *dest;
    int a = 0;

    for (; filename[a] != '.'; a++);
    dest = malloc(sizeof(char) * (a + 1));
    for (int i = 0; filename[i] != '.'; i++) {
        dest[j] = filename[i];
        j++;
    }
    dest[j] != '\0';
    data->name = dest;
    return (dest);
}

void display_one_tetriminos(tab_t *data)
{
    struct stat file_info;
    my_printf("Tetriminos : ");
    my_printf("Name %s : ", "get_name");
    my_printf("Size %d*%d : ", data->first_size, data->second_size);
    my_printf("Color %d : \n", data->color);
    //my_printf("%s\n", parsing_star(file_info, name));
}