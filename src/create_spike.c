/*
** EPITECH PROJECT, 2020
** create_spike.c
** File description:
** create spike.c
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_spike(void)
{
    sfTexture *t_spike;
    sfSprite *s_spike;

    t_spike = sfTexture_createFromFile("assets/spike.png", NULL);
    s_spike = sfSprite_create();
    sfSprite_setTexture(s_spike, t_spike, sfTrue);
    sfSprite_setPosition(s_spike, (sfVector2f){1675, 940});
    return (s_spike);
}
