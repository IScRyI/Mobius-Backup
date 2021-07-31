#ifndef LECTEUR_DE_MUSIQUE_FENETRE_H
#define LECTEUR_DE_MUSIQUE_FENETRE_H
#include "main.h"
int Fenetre_principal();
SDL_Texture *Image_loader(char *chemin_image,SDL_Renderer *renderer);
int Initialisation_zone_central(SDL_Renderer *renderer);
int Creation_zone_bouton_gestion_fenetre(SDL_Renderer *renderer_fenetre,SDL_Texture *bouton_gestion_fenetre);
int Creation_zone_lecteur(SDL_Renderer *renderer_fenetre);
int Bande_lateral_gauche(SDL_Renderer *renderer_fenetre);
//Couleur prédéfini
#define RENDER_SET_NOIR_PURE(renderer_fenetre)  SDL_SetRenderDrawColor(renderer_fenetre,0,0,0,255);
#define RENDER_SET_NOIR_121212(renderer_fenetre)  SDL_SetRenderDrawColor(renderer_fenetre,18,18,18,255);
#define RENDER_SET_NOIR_181818(renderer_fenetre)  SDL_SetRenderDrawColor(renderer_fenetre,24,24,24,255);
#define RENDER_SET_GRIS_282828(renderer_fenetre)  SDL_SetRenderDrawColor(renderer_fenetre,40,40,40,255);
#define RENDER_SET_BLANC_PURE(renderer_fenetre)  SDL_SetRenderDrawColor(renderer_fenetre,255,255,255,255);
#endif //LECTEUR_DE_MUSIQUE_FENETRE_H