/*
** EPITECH PROJECT, 2019
** put_gyarados.c
** File description:
** put gyarados
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void put_first_background(sfSprite *s_first_background)
{
    sfSprite_move(s_first_background, (sfVector2f){-1, 0});
    if (sfSprite_getPosition(s_first_background).x <= -1920)
        sfSprite_setPosition(s_first_background, (sfVector2f){-1, 0});
}
