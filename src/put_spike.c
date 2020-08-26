/*
** EPITECH PROJECT, 2020
** put_spike.c
** File description:
** put spike
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void put_spike(sfSprite *s_spike)
{
    static float vitesse = -3;

    vitesse -= 0.01;
    if (vitesse <= -35)
        vitesse = -35;
    sfSprite_setTextureRect(s_spike, (sfIntRect){0, 0, 146, 75});
    sfSprite_move(s_spike, (sfVector2f){vitesse, 0});
    if (sfSprite_getPosition(s_spike).x <= -400)
        sfSprite_setPosition(s_spike, (sfVector2f){1920, 940});
}
