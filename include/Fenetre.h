#ifndef LECTEUR_DE_MUSIQUE_FENETRE_H
#define LECTEUR_DE_MUSIQUE_FENETRE_H
#include "main.h"
//déclaration de structure
typedef struct SDL_Banque_Image_Data {
    //l'utilisation de double pointeurs et du au fais que ce sois des pointeurs qui pointe vers des pointeurs
    SDL_Surface** img;
    unsigned int* nmb_img;
    SDL_Rect** cord_img;
} SDL_Banque_Image_Data;
//initialisation des variables global
//saisir le nombre d'image insérer a la main
unsigned static int nombre_image = 0;
//structure contenant les information de l'image final (Pointeurs vers la tileset,
//le nombre d'image contenu dans cette dernière,ainsi que un tableau contenant les dimension de chacune des image ces dernière étant stocké dans des SDL_Rect) 
SDL_Banque_Image_Data tileset_image_info = {(SDL_Surface *)malloc(sizeof(SDL_Surface) * nombre_image),&nombre_image,(SDL_Rect *)malloc(sizeof(SDL_Rect) * nombre_image)};
//prototype de fonction
int Fenetre_principal();
_Bool Initialisation_interface(SDL_Renderer *renderer_fenetre,SDL_Texture *data_img);
_Bool Initialisation_accueil(SDL_Renderer *renderer_fenetre,SDL_Texture *data_img);
_Bool Nettoyage_renderer(SDL_Renderer *renderer_fenetre);
void *Image_loader(char *chemin_image,SDL_Renderer *renderer,_Bool type_de_donnee);
SDL_Surface *Troncage_sdl_surface(SDL_Surface *surface,SDL_Rect *info_surface);
SDL_Texture *Police_rendu_texture(TTF_Font* police,int quality,char *texte,SDL_Color couleur_police,SDL_Color couleur_fond_shaded,SDL_Rect *dimension_texture,SDL_Renderer *renderer_fenetre);
SDL_Banque_Image_Data Modification_tileset(SDL_Renderer *renderer_fenetre,SDL_Surface *image_source,char *chemin_image_nom_format,char *chemin_image_add,SDL_Rect *information_image_add);
//type de donnée image_loader
//pour renvoyer une SDL_Surface
#define SURFACE (0)
//pour renvoyer une SDL_Texture
#define TEXTURE (1)
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