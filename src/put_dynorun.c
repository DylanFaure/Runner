/*
** EPITECH PROJECT, 2019
** put_dynorun.c
** File description:
** putdynorun
*/

#include "../include/my.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

void put_dynorun(sfSprite *s_dynorun, sfClock *clock)
{
    static int xrect = 0;

    sfSprite_setTextureRect(s_dynorun, (sfIntRect){xrect, 0, 173, 120});
    if (sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.1) {
        sfClock_restart(clock);
        xrect = xrect + 173;
        if (xrect == 1384)
            xrect = 0;
    }
    gestion_space(s_dynorun);
}
