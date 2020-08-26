/*
** EPITECH PROJECT, 2020
** verif_colision.c
** File description:
** verif colision
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

void verif_colision(sfSprite *s_dynorun, sfSprite *s_spike,
                    sfRenderWindow *window)
{
    if (sfSprite_getPosition(s_dynorun).y + 100 >=
        sfSprite_getPosition(s_spike).y &&
        sfSprite_getPosition(s_dynorun).x + 80 >=
        sfSprite_getPosition(s_spike).x &&
        sfSprite_getPosition(s_dynorun).x + 80 <=
        sfSprite_getPosition(s_spike).x + 146)
        sfRenderWindow_close(window);
}
