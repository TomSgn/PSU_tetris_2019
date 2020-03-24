/*
** EPITECH PROJECT, 2020
** PSU_bstetris_2019
** File description:
** get.filename
*/

#include "./include/tetris.h"


char *check_filename(char *filename, tab_t *data) 
{
    struct stat file_info;
    struct dirent *dir;
    if (filename[0] != '.') {
        display_one_tetriminos(data);
    }
}

char *recup_filename(char **tab, tab_t *data)
{
    DIR* dirp;
    char * filename;
    struct dirent *dir ;
    int i;
    int j = 0;
    dirp = opendir( "./tetrimino/" );
    if (dirp) {
        while ((dir = readdir(dirp)) != NULL) {
            recup_tab(tab, data);
            check_filename(dir->d_name, data);
        }
    }
    closedir(dirp);
}