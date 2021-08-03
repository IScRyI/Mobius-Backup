#ifndef LECTEUR_DE_MUSIQUE_FENETRE_H
#define LECTEUR_DE_MUSIQUE_FENETRE_H
#include "main.h"
//prototype de fonction
int Fenetre_principal();
SDL_Texture *Image_loader(char *chemin_image,SDL_Renderer *renderer);
_Bool Initialisation_interface(SDL_Renderer *renderer_fenetre,SDL_Texture *data_img);
SDL_Texture *Police_rendu_texture(TTF_Font* police,int quality,char *texte,SDL_Color couleur_police,SDL_Color couleur_fond_shaded,SDL_Rect *dimension_texture,SDL_Renderer *renderer_fenetre);
//qualité de rendu des police
#define SOLID (0x1)
#define SHADED (0x2)
#define BLENDED (0x3)
//Couleur prédéfini pour le renderer
#define RENDER_SET_NOIR_PURE(renderer_fenetre)  SDL_SetRenderDrawColor((renderer_fenetre),0,0,0,255);
#define RENDER_SET_NOIR_121212(renderer_fenetre)  SDL_SetRenderDrawColor((renderer_fenetre),18,18,18,255);
#define RENDER_SET_NOIR_181818(renderer_fenetre)  SDL_SetRenderDrawColor((renderer_fenetre),24,24,24,255);
#define RENDER_SET_GRIS_282828(renderer_fenetre)  SDL_SetRenderDrawColor((renderer_fenetre),40,40,40,255);
#define RENDER_SET_BLANC_PURE(renderer_fenetre)  SDL_SetRenderDrawColor((renderer_fenetre),255,255,255,255);
//couleurs
#define NOIR_PURE {0,0,0,255}
#define NOIR_121212 {18,18,18,255}
#define NOIR_181818 {24,24,24,255}
#define GRIS_282828 {40,40,40,255}
#define BLANC_PURE {255,255,255,255}
#define TRANSPARENT {0,0,0,0}
#endif //LECTEUR_DE_MUSIQUE_FENETRE_H