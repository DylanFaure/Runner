/*
** EPITECH PROJECT, 2020
** create_dynorun.c
** File description:
** create dynorun.c
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_dynorun(void)
{
    sfTexture *t_dynorun;
    sfSprite *s_dynorun;

    t_dynorun = sfTexture_createFromFile("assets/dynorun.png", NULL);
    s_dynorun = sfSprite_create();
    sfSprite_setTexture(s_dynorun, t_dynorun, sfTrue);
    sfSprite_setPosition(s_dynorun, (sfVector2f){0, 900});
    return (s_dynorun);
}
