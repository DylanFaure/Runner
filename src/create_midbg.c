/*
** EPITECH PROJECT, 2020
** create_midbg.c
** File description:
** create midbg.c
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_midbg(void)
{
    sfTexture *t_midbg;
    sfSprite *s_midbg;

    t_midbg = sfTexture_createFromFile("assets/paralaxemontgolfiere.png", NULL);
    s_midbg = sfSprite_create();
    sfSprite_setTexture(s_midbg, t_midbg, sfTrue);
    return (s_midbg);
}
