/*
** EPITECH PROJECT, 2020
** gestionspace.c
** File description:
** gestionspace
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void gestion_space(sfSprite *s_dynorun)
{
    static int hauteur = 0;
    static int count = 0;

    if (sfKeyboard_isKeyPressed(sfKeySpace) && hauteur == 0)
        hauteur = 1;
    if (hauteur == 1 && count < 35) {
        sfSprite_move(s_dynorun, (sfVector2f){0, -5});
        count++;
        if (count == 35)
            hauteur = 2;
    } else if (hauteur == 2 && count > 0) {
        sfSprite_move(s_dynorun, (sfVector2f){0, 5});
        count--;
        if (count == 0)
            hauteur = 0;
    }
}
