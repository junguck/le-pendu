#ifndef __BIBLI_H_INCLUDED__
#define __BIBLI_H_INCLUDED__
const char* choisir_mot(const char* mots[], int taille);
int longueur(const char *chaine);
void copie(char *dest, const char *chaine);
void concatene(char *dest, const char *source);
int compare(const char *chaine,const char *chaine2);
void inverse(char *chaine);
void to_upper(char *chaine);
void to_lower(char *chaine);
char *cherche_char(const char *phrase, char caractere);
char *cherche_mot(const char *phrase,const char *mot);
void sous_chaine(const char *source ,char *dest ,int debut,int longueur);
void supprime_caractere(char *chaine,char caractere);
int compte_mots(const char *phrase);
void afficher_pendu(int erreurs);
void concatenev(char *dest,char source);
char *affich(char *affichage,const char *mot,char caractere,char *ecris);
void verification(char *affichage,int erreurs,bool gagne,char caractere,char *ecris,const char *mot);
bool gain(bool gagne,const char *mot,char *affichage);
bool verifier_caractere(const char* mot, char* affichage, char caractere);
int changement(const char *str1, const char *str2);
void animation_chargement(int secondes);
void afficher_menu();
#endif