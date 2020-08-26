/*
** EPITECH PROJECT, 2020
** create_images.c
** File description:
** create_images
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_runner.h"

images create_images(images game)
{
    game.s_last_background = create_lastbg();
    game.s_mid_background = create_midbg();
    game.s_first_background = create_firstbg();
    game.s_dynorun = create_dynorun();
    game.s_spike = create_spike();
    return (game);
}
