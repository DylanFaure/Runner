/*
** EPITECH PROJECT, 2019
** maj1.c
** File description:
** maj 1
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void maj1(sfRenderWindow *window, sfSprite *s_last_background,
            sfSprite *s_mid_background, sfSprite *s_first_background)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, s_last_background, NULL);
    sfRenderWindow_drawSprite(window, s_mid_background, NULL);
    sfRenderWindow_drawSprite(window, s_first_background, NULL);
}
