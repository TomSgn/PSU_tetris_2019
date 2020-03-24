/*
** EPITECH PROJECT, 2019
** PSU_bstetris_2019
** File description:
** main.c
*/

#include "./include/tetris.h"

void recup_tab(char **tab, tab_t *data)
{
    data->first_size = my_getnbr(tab[0]);
    data->second_size = my_getnbr(tab[1]);
    data->color = my_getnbr(tab[2]);
}

void help(void)
{
my_printf("    Usage: ./tetris [options]\n");
my_printf("Options:\n");
my_printf("--help Display this help\n");
my_printf("-L --level={num} Start Tetris at level num (def: 1)\n");
my_printf("-l --key-left={K} Move the tetrimino LEFT using the K key (def: left arrow)\n");
my_printf("-r --key-right={K} Move the tetrimino RIGHT using the K key (def: right arrow)\n");
my_printf("-t --key-turn={K} TURN the tetrimino clockwise 90d using the K key (def: top\n");
my_printf("arrow)\n");
my_printf("-d --key-drop={K} DROP the tetrimino using the K key (def: down arrow)\n");
my_printf("-q --key-quit={K} QUIT the game using the K key (def: ‘q’ key)\n");
my_printf("-p --key-pause={K} PAUSE/RESTART the game using the K key (def: space bar)\n");
my_printf("--map-size={row,col} Set the numbers of rows and columns of the map (def: 20,10)\n");
my_printf("-w --without-next Hide next tetrimino (def: false)\n");
my_printf("-D --debug Debug mode (def: false)\n");
}


int main(int ac, char **av)
{
//    if (ac != 1){
//        if(av[1] == "--help" || "-h");
//        help();
//        return (0);
//    }
//    if (ac == 0) {
//    struct stat file_info;
//    char **map = fs_read_file(&file_info, "./tetrimino/6.tetrimino");
//    for (int i = 0; map[i]; i++)
//        printf("[%s]\n", map[i]);
//    }
    struct stat file_info;
    tab_t *data = malloc(sizeof(tab_t));
    char **tab = fs_read_file(&file_info, "./tetrimino/6.tetrimino");
    recup_filename(tab, data);
}