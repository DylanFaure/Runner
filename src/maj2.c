/*
** EPITECH PROJECT, 2020
** maj2.c
** File description:
** maj 2
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void maj2(sfRenderWindow *window, sfSprite *s_dynorun, sfSprite *s_spike)
{
    sfRenderWindow_drawSprite(window, s_spike, NULL);
    sfRenderWindow_drawSprite(window, s_dynorun, NULL);
    sfRenderWindow_display(window);
}
