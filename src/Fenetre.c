#include "Fenetre.h"
int Fenetre_principal() {
    SDL_Window *fenetre = SDL_CreateWindow(NOM_LOGICIEL,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,DIMENSION_W,DIMENSION_H,SDL_WINDOW_BORDERLESS);
    SDL_Renderer *renderer_fenetre = SDL_CreateRenderer(fenetre,-1,SDL_RENDERER_ACCELERATED);
    //création des texture
    SDL_Texture *bouton_gestion_fenetre = Image_loader("image/bouton_gestion_fenetre.png",renderer_fenetre);
    //Fonction interface
    Initialisation_zone_central(renderer_fenetre);
    Creation_zone_bouton_gestion_fenetre(renderer_fenetre,bouton_gestion_fenetre);
    Creation_zone_lecteur(renderer_fenetre);
    Bande_lateral_gauche(renderer_fenetre);
    SDL_RenderPresent(renderer_fenetre);
    SDL_Delay(3000);
    SDL_DestroyRenderer(renderer_fenetre);
    SDL_DestroyWindow(fenetre);
    //destruction des texture
    SDL_DestroyTexture(bouton_gestion_fenetre);
    return EXIT_SUCCESS;
}
SDL_Texture *Image_loader(char *chemin_image,SDL_Renderer *renderer_fenetre) {
    //gestion des erreur a inclure
    SDL_Surface *image_surface = IMG_Load(chemin_image);
    SDL_Texture *image_texture = SDL_CreateTextureFromSurface(renderer_fenetre,image_surface);
    SDL_FreeSurface(image_surface);
    return image_texture;
}
int Initialisation_zone_central(SDL_Renderer *renderer_fenetre) {
    //gestion des erreur a inclure
    //ajouter appel de fonction de correction de resolution
    const SDL_Rect zone_central = {241,0,1359,809};
    RENDER_SET_NOIR_121212(renderer_fenetre)
    SDL_RenderFillRect(renderer_fenetre,&zone_central);
}
int Creation_zone_bouton_gestion_fenetre(SDL_Renderer *renderer_fenetre,SDL_Texture *bouton_gestion_fenetre) {
    //gestion des erreur a inclure
    //ajouter appel de fonction de correction de resolution
    const SDL_Rect zone_bouton_gestion_fenetre = {1465,0,135,31};
    SDL_Rect dst_zone_bouton_gestion_fenetre = {1475,5,116,21};
    RENDER_SET_NOIR_PURE(renderer_fenetre)
    SDL_RenderFillRect(renderer_fenetre,&zone_bouton_gestion_fenetre);
    SDL_RenderCopy(renderer_fenetre,bouton_gestion_fenetre,NULL,&dst_zone_bouton_gestion_fenetre);
}
int Creation_zone_lecteur(SDL_Renderer *renderer_fenetre) {
    //gestion des erreur a inclure
    //ajouter appel de fonction de correction de resolution
    const SDL_Rect lecteur = {0,809,1600,91};
    RENDER_SET_GRIS_282828(renderer_fenetre)
    SDL_RenderDrawLine(renderer_fenetre,0,808,1600,808);
    RENDER_SET_NOIR_181818(renderer_fenetre)
    SDL_RenderFillRect(renderer_fenetre,&lecteur);
}
int Bande_lateral_gauche(SDL_Renderer *renderer_fenetre) {
    const SDL_Rect bande_lateral_gauche = {0,0,240,808};
    RENDER_SET_NOIR_181818(renderer_fenetre)
    SDL_RenderDrawLine(renderer_fenetre,240,0,240,808);
    RENDER_SET_NOIR_PURE(renderer_fenetre)
    SDL_RenderFillRect(renderer_fenetre,&bande_lateral_gauche);
}