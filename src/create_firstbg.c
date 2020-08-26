/*
** EPITECH PROJECT, 2020
** create_firstbg.c
** File description:
** create firstbg.c
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_firstbg(void)
{
    sfTexture *t_firstbg;
    sfSprite *s_firstbg;

    t_firstbg = sfTexture_createFromFile("assets/paralaxeforet.png", NULL);
    s_firstbg = sfSprite_create();
    sfSprite_setTexture(s_firstbg, t_firstbg, sfTrue);
    return (s_firstbg);
}
