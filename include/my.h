/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** compilation of fonction
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "./my_runner.h"

#ifndef MY_H_
#define MY_H_

void maj1(sfRenderWindow *window, sfSprite *s_last_background,
            sfSprite *s_mid_background, sfSprite *s_first_background);
void maj2(sfRenderWindow *window, sfSprite *s_dynorun, sfSprite *s_spike);
void end_game(sfMusic *aquaticrace, images game);
void put_dynorun(sfSprite *s_dynorun, sfClock *clock);
void put_first_background(sfSprite *s_first_background);
void put_mid_background(sfSprite *s_mid_background);
void put_last_background(sfSprite *s_last_background);
void put_spike(sfSprite *s_spike);
sfSprite *create_dynorun(void);
sfSprite *create_firstbg(void);
sfSprite *create_midbg(void);
sfSprite *create_lastbg(void);
sfSprite *create_spike(void);
void gestion_space(sfSprite *s_dynorun);
void verif_colision(sfSprite *s_dynorun, sfSprite *s_spike,
                    sfRenderWindow *window);
images create_images(images game);
sfMusic *set_music(sfMusic *aquaticrace);

#endif
