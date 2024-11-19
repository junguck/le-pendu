#include "BIBLI.h"
#include<iostream>
#include<ctime>
#include<stdlib.h>
 #include <chrono>
  #include <thread>
const char *choisir_mot(const char* mots[], int taille) {
        srand(time(0)); // Initialisation du générateur de nombres aléatoires 
        int index = rand() % taille;
        return mots[index];//retour du mot;
          } 
void afficher_pendu(int erreurs) { 
switch (erreurs) {
    case 0: std::cout << " +---+\n |\n |\n |\n |\n |\n=========" << std::endl;
    break;
    case 1: std::cout << " +---+\n O  |\n |\n |\n |\n |\n=========" << std::endl;
    break;
    case 2: std::cout << " +---+\n O |\n | |\n |\n |\n |\n=========" << std::endl;
    break;
    case 3: std::cout << " +---+\n O |\n/| |\n |\n |\n |\n=========" << std::endl;
    break;
    case 4: std::cout << " +---+\n O |\n/|\\ |\n |\n |\n |\n=========" << std::endl;
    break;
    case 5: std::cout << " +---+\n O |\n/|\\ |\n/ |\n |\n |\n=========" << std::endl;
    break;
    case 6: std::cout << " +---+\n O |\n/|\\ |\n/ \\ |\n |\n |\n=========" << std::endl;
    break;
   }
                                        }
bool gain(bool gagne,const char *mot,char *affichage){
    int z=0,i,l;
    for(i=0;i<l;i++){
        if(affichage[i]==mot[i]){
            z++;
        }
    }
    if(z==l){
        return true;
    }else{
        return false;
    }

}
void animation_chargement(int secondes) { 
    const char* animation = "|/-\\";
     int nombre_de_tours = secondes * 10;
      // 10 itérations par seconde 
      for (int i = 0; i < nombre_de_tours; i++) {
         std::cout << "\r" << animation[i % 4] << std::flush;
          std::this_thread::sleep_for(std::chrono::milliseconds(100));
           } std::cout << "\r " << std::flush;
            // Efface le dernier caractère de l'animation 
            }
bool verifier_caractere(const char* mot, char* affichage, char caractere) { 
            bool trouve = false;
             for (int i = 0; mot[i] != '\0'; i++) {
                if (mot[i] == caractere) { 
                    affichage[i] = caractere;
                     trouve = true; 
                     } } return trouve;
                      } 
// void afficher_menu() {
//      std::cout << "=====================\n";
//       std::cout << " JEU DU PENDU \n";
//        std::cout << "=====================\n";
//         std::cout << "1. Jouer maintenant\n";
//          std::cout << "2. Quitter\n";
//           std::cout << "=====================\n";
//            std::cout << "Choisissez une option : "; 
//            }
int changement(const char *str1, const char *str2) {
     while (*str1 && (*str1 == *str2)) {
         str1++;
          str2++;
           } return *(unsigned char*)str1 - *(unsigned char*)str2; 
}
void verification(char *affichage,int erreurs,char caractere,char *ecris,const char *mot){
    int i=0,j=0,k=0,l=0,m=0,z=0;
     l=longueur(mot);
     k=longueur(ecris);
     char *tmp=affichage;
     for(i=0;i<l;i++){
        for(j=0;j<k;i++){
            if(mot[i]==ecris[j]){
                affichage[i]=ecris[j];
            }
        }
    }
    //verifie erreur
    for(i=0;i<l;i++){
        if(affichage[i]!=tmp[i]){
            m++;
        }
    }
    if(m==0){
        erreurs++;
    }
}
int longueur(const char *chaine){
int longueur = 0;
 while (chaine[longueur] != '\0') { 
    longueur++; 
    } 
    return longueur;
}

void copie(char *dest, const char *chaine){
int i=0;
if(chaine != nullptr){
while(chaine[i] != '\0'){
    dest[i] = chaine[i];
    i++;
}
dest[i]='\0';
}
}

void concatene(char *dest, const char *source){
int sou=longueur(source);
int des=longueur(dest);
int i=0,j=des;
for(i=0;i<=sou;i++){
dest[j]=source[i];
j++;
}
}
void concatenev(char *dest,char source){
int des=longueur(dest);
dest[des+1]=source;
dest[des+2]='\0';
}

int compare(const char *chaine,const char *chaine2){
int ch1=longueur(chaine);
int ch2=longueur(chaine2);
if(ch1<ch2){
    return 1;
}
else if(ch1>ch2){
    return -1;
}else{
    return 0;
}
}
//
void inverse(char *chaine){
int lon=longueur(chaine);
for (int i = 0; i < lon / 2; i++) {
    char tmp = chaine[i];
    chaine[i] = chaine[lon - 1 - i];
    chaine[lon - 1 - i] = tmp; 
      }
}

char *cherche_char(const char *chaine,char caractere){
   while (*chaine != '\0') {
     if (*chaine == caractere) { 
        return const_cast<char*>(chaine); 
 }
      chaine++; 
   }
       return nullptr;
}
void to_lower(char *chaine){
int i = 0;
 while (chaine[i] != '\0') {
     if (chaine[i] >= 'A' && chaine[i] <= 'Z') { 
        chaine[i] = chaine[i] + ('a' - 'A');
         } i++; 
         }
}
void to_upper(char *chaine){
int i = 0;
 while (chaine[i] != '\0') { 
    if (chaine[i] >= 'a' && chaine[i] <= 'z') {
         chaine[i] = chaine[i] - ('a' - 'A');
          } i++;
           }
            }
// char *cherche_mot(const char *phrase,const char *mot){
// int a=0,b,c,d=0,j=0,i=0,f,g=0;
// int lon = longueur(phrase);
// int lonm = longueur(mot);
// if(phrase[0] =='\0'){
// return nullptr;
// }else{
// for(b=0;b<lon;b++){
//     if(phrase[b]==' '){
//         j=b-1;
//         for(f=i;f<=j;f++){
//             c=0;
//             if(phrase[f]==mot[c]){
//                 d=d+1;
//             }
//             c++;
//         }
//         if(d=lonm){
//             return const_cast<char*>(&phrase[i]);
//         }
//         i=b+1;
//     }
// }
// }
// return nullptr;
// }
char *cherche_mot(const char *phrase, const char *mot) {
     int lon = longueur(phrase);
      int lonm = longueur(mot);
       if (lonm == 0) { 
        return nullptr;
         // Si le mot est vide, retourne nullptr
         } for (int i = 0; i <= lon - lonm; i++) { 
            int j;
             for (j = 0; j < lonm; j++) {
                 if (phrase[i + j] != mot[j]) {
                     break; }
                      } if (j == lonm) {
                         return const_cast<char*>(&phrase[i]);
                          // Trouvé le mot, retourner le pointeur vers le début 
                          } } 
                          return nullptr;
                           // Mot non trouvé 
                           }

void sous_chaine(const char *source ,char *dest ,int debut,int longueur){
int i;
 for (i = 0; i < longueur && source[debut + i] != '\0'; i++) {
     dest[i] = source[debut + i];
      } 
      dest[i] = '\0';
}
 void supprime_caractere(char *chaine,char caractere){
    char tmp[100];
    int i,j=0;
    int lon = longueur(chaine);
    for(i=0;i<lon;i++){
        if(chaine[i]==caractere){
        }else{
            tmp[j]=chaine[i];
            j++;
        }
    }
    for(i=0;i<=longueur(tmp);i++){
        chaine[i]=tmp[i];
    }

 }
// int compte_mots(const char *phrase){
// int i,j,cmt=0;
// for(i=0;i<longueur(phrase);i++){
//     if(*phrase=' '){
//         cmt++;
//         i++;
//         while(phrase[i]=' '){
//             i++;
//         }
//         i--;
//     }
// }
// return cmt;
// }
int compte_mots(const char *phrase) {
     int count = 0;
      bool inWord = false;
       while (*phrase != '\0') {
         if (*phrase == ' ') {
             inWord = false; 
             } else { 
                if (!inWord) {
                     count++; 
                     inWord = true; 
                     } 
                     }
             phrase++; 
                     } return count;
 }