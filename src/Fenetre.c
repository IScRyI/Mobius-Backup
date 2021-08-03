#include "Fenetre.h"
int Fenetre_principal() {
    SDL_Window *fenetre = SDL_CreateWindow(NOM_LOGICIEL,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,DIMENSION_W,DIMENSION_H,SDL_WINDOW_BORDERLESS);
    SDL_Renderer *renderer_fenetre = SDL_CreateRenderer(fenetre,-1,SDL_RENDERER_ACCELERATED);
    //importation des image
    SDL_Texture *data_img = Image_loader("image/data_img.bin",renderer_fenetre);
    //Fonction interface
    Initialisation_interface(renderer_fenetre,data_img);
    //Rendu (a supprimer)
    SDL_RenderPresent(renderer_fenetre);
    SDL_Delay(3000);
    SDL_DestroyRenderer(renderer_fenetre);
    SDL_DestroyWindow(fenetre);
    //destruction des texture
    SDL_DestroyTexture(data_img);
    //libération des police
    return EXIT_SUCCESS;
}
_Bool Initialisation_interface(SDL_Renderer *renderer_fenetre,SDL_Texture *data_img) {
    //gestion des erreur a inclure
    //ajouter appel de fonction de correction de resolution
    //Initialisation des polices
    TTF_Font* roboto_bold = TTF_OpenFont("police/Roboto-Bold.ttf",15);
    TTF_Font* roboto_black = TTF_OpenFont("police/Roboto-Black.ttf",15);
    //Structure contenant les couleurs des police et du fond de ses derniers
    const SDL_Color couleur_police = BLANC_PURE;
    const SDL_Color couleur_background_police = TRANSPARENT;
    //Structure contenant les cordonnée et dimension des différente partie fondamental de l'interface
    const SDL_Rect zone_central = {241,0,1359,809};
    const SDL_Rect lecteur = {0,809,1600,91};
    const SDL_Rect bande_lateral_gauche_bouton_gestion_fenetre[2] = {{0,0,240,808},{1465,0,135,31}};
    //Structure contenant les cordonnée et les dimension des Texture lié au image
    const SDL_Rect dst_zone_bouton_gestion_fenetre = {1475,5,116,21};
    const SDL_Rect dst_icone_option = {16,13,32,21};
    const SDL_Rect dst_bouton_creation_playlist = {10,103,214,37};
    const SDL_Rect dst_search_bar = {10,54,221,41};
    const SDL_Rect dst_bouton_skip_left = {24,841,21,29};
    const SDL_Rect dst_bouton_skip_right = {118,841,21,29};
    const SDL_Rect dst_bouton_play = {67,839,30,35};
    const SDL_Rect dst_bar_lecteur = {150,848,1227,14};
    const SDL_Rect dst_afficher_file_attente = {1541,834,40,40};
    const SDL_Rect dst_bouton_rejouer = {1445,835,40,40};
    const SDL_Rect dst_bouton_randomizer_file_attente = {1495,836,37,37};
    const SDL_Rect dst_bouton_volume = {1393,834,40,40};
    const SDL_Rect dst_bouton_liaison_compte = {1307,12,130,36};
    //const SDL_Rect dst_bouton_active_accueil = {341,10,83,44};
    //Structure contenant la position des images
    const SDL_Rect src_zone_bouton_gestion_fenetre = {314,41,116,21};
    const SDL_Rect src_icone_option = {688,46,32,21};
    const SDL_Rect src_bouton_creation_playlist = {40,34,214,37};
    const SDL_Rect src_search_bar = {739,37,221,41};
    const SDL_Rect src_bouton_skip = {587,40,21,29};
    const SDL_Rect src_bouton_play = {444,35,30,35};
    const SDL_Rect src_bar_lecteur = {40,10,1227,14};
    const SDL_Rect src_afficher_file_attente = {266,33,40,40};
    const SDL_Rect src_bouton_rejouer = {533,34,40,40};
    const SDL_Rect src_bouton_randomizer_file_attente = {490,35,37,37};
    const SDL_Rect src_bouton_volume = {623,35,40,40};
    const SDL_Rect src_bouton_liaison_compte = {1070,38,130,36};
    //const SDL_Rect src_bouton_active_accueil = {973,34,83,44};
    //Structure contenant la position des textures lié au chaines de caractères
    SDL_Rect dst_text_bar_recherche = {55,66};
    SDL_Rect dst_text_accueil = {357,23};
    SDL_Rect dst_text_playlists = {452,23};
    SDL_Rect dst_text_artistes = {552,23};
    SDL_Rect dst_text_albums = {650,23};
    SDL_Rect dst_text_list_titre = {759,23};
    //Initialisation de la zone principal
    RENDER_SET_NOIR_121212(renderer_fenetre)
    SDL_RenderFillRect(renderer_fenetre,&zone_central);
    //Initialisation du lecteur
    RENDER_SET_GRIS_282828(renderer_fenetre)
    SDL_RenderDrawLine(renderer_fenetre,0,808,1600,808);
    RENDER_SET_NOIR_181818(renderer_fenetre)
    SDL_RenderFillRect(renderer_fenetre,&lecteur);
    //Initialisation de la bande lateral gauche et de la zone du bouton de gestion de fenetre
    RENDER_SET_NOIR_181818(renderer_fenetre)
    SDL_RenderDrawLine(renderer_fenetre,240,0,240,807);
    RENDER_SET_NOIR_PURE(renderer_fenetre)
    SDL_RenderFillRects(renderer_fenetre,bande_lateral_gauche_bouton_gestion_fenetre,2);
    RENDER_SET_GRIS_282828(renderer_fenetre)
    SDL_RenderDrawLine(renderer_fenetre,24,148,217,148);
    //géneration des textures contenant les chaines de caractères
    SDL_Texture* texture_text_bar_recherche = Police_rendu_texture(roboto_bold,BLENDED,"Rechercher",couleur_police,couleur_background_police,&dst_text_bar_recherche,renderer_fenetre);
    SDL_Texture* texture_text_accueil = Police_rendu_texture(roboto_black,BLENDED,"Accueil",couleur_police,couleur_background_police,&dst_text_accueil,renderer_fenetre);
    SDL_Texture* texture_text_playlists = Police_rendu_texture(roboto_black,BLENDED,"Playlists",couleur_police,couleur_background_police,&dst_text_playlists,renderer_fenetre);
    SDL_Texture* texture_text_artistes = Police_rendu_texture(roboto_bold,BLENDED,"Artistes",couleur_police,couleur_background_police,&dst_text_artistes,renderer_fenetre);
    SDL_Texture* texture_text_text_albums = Police_rendu_texture(roboto_black,BLENDED,"Albums",couleur_police,couleur_background_police,&dst_text_albums,renderer_fenetre);
    SDL_Texture* texture_text_list_titre = Police_rendu_texture(roboto_black,BLENDED,"Titre",couleur_police,couleur_background_police,&dst_text_list_titre,renderer_fenetre);
    //affichage des images
    SDL_RenderCopy(renderer_fenetre,data_img,&src_icone_option,&dst_icone_option);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_bouton_creation_playlist,&dst_bouton_creation_playlist);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_search_bar,&dst_search_bar);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_zone_bouton_gestion_fenetre,&dst_zone_bouton_gestion_fenetre);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_bouton_skip,&dst_bouton_skip_left);
    SDL_RenderCopyEx(renderer_fenetre,data_img,&src_bouton_skip,&dst_bouton_skip_right,0,NULL,SDL_FLIP_HORIZONTAL);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_bouton_play,&dst_bouton_play);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_bar_lecteur,&dst_bar_lecteur);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_afficher_file_attente,&dst_afficher_file_attente);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_bouton_rejouer,&dst_bouton_rejouer);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_bouton_randomizer_file_attente,&dst_bouton_randomizer_file_attente);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_bouton_volume,&dst_bouton_volume);
    SDL_RenderCopy(renderer_fenetre,data_img,&src_bouton_liaison_compte,&dst_bouton_liaison_compte);
    //SDL_RenderCopy(renderer_fenetre,data_img,&src_bouton_active_accueil,&dst_bouton_active_accueil);
    //affichage des textures contenant les chaines de caractères
    SDL_RenderCopy(renderer_fenetre,texture_text_bar_recherche,NULL,&dst_text_bar_recherche);
    SDL_RenderCopy(renderer_fenetre,texture_text_accueil,NULL,&dst_text_accueil);
    SDL_RenderCopy(renderer_fenetre,texture_text_playlists,NULL,&dst_text_playlists);
    SDL_RenderCopy(renderer_fenetre,texture_text_artistes,NULL,&dst_text_artistes);
    SDL_RenderCopy(renderer_fenetre,texture_text_text_albums,NULL,&dst_text_albums);
    SDL_RenderCopy(renderer_fenetre,texture_text_list_titre,NULL,&dst_text_list_titre);
    //déchargement des polices
    TTF_CloseFont(roboto_bold);
    TTF_CloseFont(roboto_black);
}
SDL_Texture *Image_loader(char *chemin_image,SDL_Renderer *renderer_fenetre) {
    //gestion des erreur a inclure
    SDL_Surface *image_surface = IMG_Load(chemin_image);
    SDL_Texture *image_texture = SDL_CreateTextureFromSurface(renderer_fenetre,image_surface);
    SDL_FreeSurface(image_surface);
    SDL_SetTextureBlendMode(image_texture,SDL_BLENDMODE_BLEND);
    return image_texture;
}
SDL_Texture *Police_rendu_texture(TTF_Font* police,int quality,char *texte,SDL_Color couleur_police,SDL_Color couleur_fond_shaded,SDL_Rect *dimension_texture,SDL_Renderer *renderer_fenetre) {
    SDL_Surface* surface_police;
    if(quality == SOLID) {
        surface_police = TTF_RenderUTF8_Solid(police,texte,couleur_police);
    }
    else if(quality == SHADED) {
        surface_police = TTF_RenderUTF8_Shaded(police,texte,couleur_police,couleur_fond_shaded);
    }
    else if(quality == BLENDED) {
        surface_police = TTF_RenderUTF8_Blended(police,texte,couleur_police);
    }
    else {
        return NULL;
    }
    SDL_Texture *texture_police = SDL_CreateTextureFromSurface(renderer_fenetre,surface_police); 
    SDL_FreeSurface(surface_police);
    SDL_SetTextureBlendMode(texture_police,SDL_BLENDMODE_BLEND);
    int x,y;
    SDL_QueryTexture(texture_police,NULL,NULL,&(dimension_texture->w),&(dimension_texture->h));
    return texture_police;
}