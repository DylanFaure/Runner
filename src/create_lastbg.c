/*
** EPITECH PROJECT, 2020
** create_lastbg.c
** File description:
** create lastbg.c
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_lastbg(void)
{
    sfTexture *t_lastbg;
    sfSprite *s_lastbg;

    t_lastbg = sfTexture_createFromFile("assets/paralaxenuage.png", NULL);
    s_lastbg = sfSprite_create();
    sfSprite_setTexture(s_lastbg, t_lastbg, sfTrue);
    return (s_lastbg);
}
