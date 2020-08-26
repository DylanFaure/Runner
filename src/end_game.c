/*
** EPITECH PROJECT, 2019
** end_game.c
** File description:
** end_game
*/

#include "../include/my.h"
#include "../include/my_runner.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void end_game(sfMusic *aquaticrace, images game)
{
    sfMusic_destroy(aquaticrace);
    sfSprite_destroy(game.s_first_background);
    sfSprite_destroy(game.s_mid_background);
    sfSprite_destroy(game.s_last_background);
    sfSprite_destroy(game.s_spike);
    sfSprite_destroy(game.s_dynorun);
}
