/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_runner.h"

void window_close(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event))
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
}

void load_games(sfRenderWindow *window, sfEvent event,
                    images game)
{
    sfClock *clock = NULL;
    sfMusic *aquaticrace = NULL;

    clock = sfClock_create();
    aquaticrace = set_music(aquaticrace);
    while (sfRenderWindow_isOpen(window)) {
        window_close(window, event);
        put_last_background(game.s_last_background);
        put_mid_background(game.s_mid_background);
        put_first_background(game.s_first_background);
        put_dynorun(game.s_dynorun, clock);
        put_spike(game.s_spike);
        verif_colision(game.s_dynorun, game.s_spike, window);
        maj1(window, game.s_last_background,
                game.s_mid_background, game.s_first_background);
        maj2(window, game.s_dynorun, game.s_spike);
    }
    end_game(aquaticrace, game);
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = NULL;
    sfEvent event;
    images game;

    window = sfRenderWindow_create(mode, "my_runner",
                                    sfResize | sfClose, NULL);
    game = create_images(game);
    sfRenderWindow_setFramerateLimit(window, 60);
    load_games(window, event, game);
    sfRenderWindow_destroy(window);
    return (0);
}
