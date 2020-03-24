/*
** EPITECH PROJECT, 2019
** PSU_TETRIS_2019
** File description:
** project_name.h
*/

#ifndef MY_TETRIS_H_
#define MY_TETRIS_H_

#include "my.h"
#include "../lib/my/my_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <curses.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


typedef struct tab_s {
    int first_size;
    int second_size;
    int color;
    char *name;
}tab_t;

char **fs_read_file(struct stat *file_i, char const *filepath);
void recup_tab(char **tab, tab_t *data);
char *recup_filename(char **tab, tab_t *data);
void display_one_tetriminos(tab_t *data);
void display_debug(void);
char *get_block(char *str);
char **parsing_number(char *buffer);
char *parsing_star(struct stat *file_i, char *filepath);
char *name_pars(char *filename, tab_t *data);

#endif /*MY_H*/