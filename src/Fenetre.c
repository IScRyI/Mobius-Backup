#include "Fenetre.h"
int Fenetre_principal() {
    dimension dimension_ecran = {.w = 1280,.h = 720};
    SDL_Window *fenetre = SDL_CreateWindow(NOM_LOGICIEL,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,dimension_ecran.w,dimension_ecran.h,SDL_WINDOW_RESIZABLE);
    if (fenetre == NULL) {
        fprintf(stderr,"Impossible de d\'afficher une Fenêtre erreur : %s",SDL_GetError());
        return EXIT_FAILURE;
    }
SDL_Delay(3000);
SDL_DestroyWindow(fenetre);
return EXIT_SUCCESS;
}