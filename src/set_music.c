/*
** EPITECH PROJECT, 2020
** set_music.c
** File description:
** set music
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_runner.h"

sfMusic *set_music(sfMusic *aquaticrace)
{
    aquaticrace = sfMusic_createFromFile("assets/aquaticrace.ogg");
    sfMusic_play(aquaticrace);
    sfMusic_setLoop(aquaticrace, sfTrue);
    return (aquaticrace);
}
