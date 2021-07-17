#include "Fenetre.h"
int Fenetre_principal() {
    SDL_Window *fenetre = SDL_CreateWindow(NOM_LOGICIEL,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,DIMENSION_W,DIMENSION_H,SDL_WINDOW_RESIZABLE);
    SDL_Renderer *renderer_fenetre = SDL_CreateRenderer(fenetre,-1,SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(renderer_fenetre,255,255,255,255);
    SDL_Rect rectangle = {200,400,300,400};
    SDL_Rect rectangle1 = {300,100,300,400};
    SDL_Point point = {0, 0};
    SDL_bool test(rectangle,rectangle1); {
        (((rectangle.x-rectangle1.x)<0) && ((rectangle.x-rectangle1.x)>rectangle.w)) && (((rectangle.y-rectangle1.y)<0) && ((rectangle.y-rectangle1.y)>rectangle.h));
};
    (test != 0) ? printf("Les 2 rectangle ce touche\n"):printf("Les 2 rectangle ne ce touche pas\n");
    SDL_RenderClear(renderer_fenetre);
    SDL_RenderPresent(renderer_fenetre);
    SDL_Delay(30000);
    SDL_DestroyRenderer(renderer_fenetre);
    SDL_DestroyWindow(fenetre);
    return EXIT_SUCCESS;
}