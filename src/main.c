#include "main.h"
int main(int argc, char* argv[]) {
    //gestion des erreur a terminer
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
    TTF_Init();
    (!SDL_WasInit(SDL_INIT_VIDEO | SDL_INIT_EVENTS)) ? fprintf(stderr,"Impossible d'initialiser la SDL erreur : %s\n",SDL_GetError()):NULL;
    (!TTF_WasInit()) ? fprintf(stderr,"Impossible d'initialiser SDL_TTF: %s\n", TTF_GetError()):NULL;
    //création et gestion de l'interface utilisateur de l'application
    Fenetre_principal();
    //fin d'execution du programme
    TTF_Quit();
    SDL_Quit();
    return EXIT_SUCCESS;
}
void SDL_erreur_gestion() {

//a finir
//intéressant pour limité le nombre d'entré de la fonction ainsi que le risque d'erreur il exisite potenciellement la meme chose pour le rendu.
//SDL_GetWindowFlags(SDL_Window* window)
}

