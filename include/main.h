#ifndef LECTEUR_DE_MUSIQUE_MAIN_H
#define LECTEUR_DE_MUSIQUE_MAIN_H
//bibliotéque inclue
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#define NOM_LOGICIEL "Lecteur de Musique"
#define DIMENSION_W 1600
#define DIMENSION_H 900
void SDL_erreur_gestion();
//code erreur
#define ERROR_INIT_SDL 0x0
#define ERROR_LOAD_MAIN_SCREEN 0x1
#define ERROR_LOAD_MAIN_RENDERER 0x2
#endif //LECTEUR_DE_MUSIQUE_MAIN_H
