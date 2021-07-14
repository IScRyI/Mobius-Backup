#include "main.h"
int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_AUDIO | SDL_INIT_VIDEO) != 0) {
        fprintf(stderr,"Impossible d'initialiser la SDL erreur : %s",SDL_GetError());
        SDL_erreur_gestion();
    }
    Fenetre_principal();    
    SDL_Quit();
    return EXIT_SUCCESS;

}
void SDL_erreur_gestion() {
//a finir
}

