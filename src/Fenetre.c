#include "Fenetre.h"
int Fenetre_principal() {
    SDL_Window *fenetre = SDL_CreateWindow(NOM_LOGICIEL,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,DIMENSION_H,DIMENSION_W,SDL_WINDOW_RESIZABLE | SDL_WINDOW_BORDERLESS);
    //création de la fenetre principale
    if (fenetre == NULL) {
        fprintf(stderr,"Impossible de d\'afficher une Fenêtre erreur : %s",SDL_GetError());
        return EXIT_FAILURE;
    }
    //conditionnel de gestion d'erreur a supprimer voir git hub
        
SDL_Delay(3000);
SDL_DestroyWindow(fenetre);
return EXIT_SUCCESS;
}
//macro structure dimension standard ecran