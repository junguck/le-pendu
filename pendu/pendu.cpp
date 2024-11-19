#include <iostream>
 #include <cstdlib>
  #include"BIBLI.h"
 #include <ctime>
const char *bibliotheque[100] = { "ordinateur", "programme", "jeu", "console", "pendu", "c++", "java", "python", "developpeur", "ingenieur", "logiciel", "materiel", "reseau", "internet", "serveur", "client", "base", "donnees", "application", "systeme", "interface", "utilisateur", "algorithme", "composant", "electronique", "robot", "intelligence", "artificielle", "machine", "apprentissage", "big", "data", "analyse", "traitement", "texte", "image", "video", "audio", "code", "debogage", "compiler", "interpreter", "script", "saisir", "source", "version", "controle", "configuration", "projet", "documentation", "ressource", "memoire", "stockage", "disque", "dur", "affichage", "graphique", "ecran", "tactile", "clavier", "souris", "interface", "utilisateur", "reseau", "local", "wifi", "bluetooth", "protocol", "transmission", "donnees", "securite", "cryptographie", "authentification", "encryption", "protection", "pare", "feu", "virus", "logiciel", "malveillant", "phishing", "spam", "pare", "parefeu", "firewall", "routeur", "switch", "serveur", "proxy", "vpn", "intranet", "extranet" }; 
const int TAILLE = 100;
const int MAX_ERREURS = 6;
const char *mot = choisir_mot(bibliotheque, TAILLE); 
int longueur_mot = longueur(mot);
char affichage[100];  
int erreurs = 0; 
bool gagne = false;
char caractere;
int rep;
char ecris[100]="_";
int main(int argc,char** argv){
    for (int i = 0; i < longueur_mot; i++) { 
        affichage[i] = '_'; 
    }
    affichage[longueur_mot] = '\0';
    while(erreurs<MAX_ERREURS && !gagne){
         afficher_pendu(erreurs);
        std::cout <<"Mot : " << affichage << std::endl;
        std::cout <<"Nombre d'erreurs : " << erreurs << std::endl;
        std::cout <<"Entrez un caractere : ";
        std::cin >> caractere;
       if (!verifier_caractere(mot, affichage, caractere)) {
        erreurs++; 
        } 
        gagne = (changement(mot, affichage) == 0);
        system("CLS");
        animation_chargement(1);
        system("CLS");
    }
if (gagne) { 
   std::cout << "Felicitations ! Vous avez trouve le mot : " << mot << std::endl;
} else {
   std::cout << "Desole, vous avez perdu. Le mot etait : " << mot << std::endl;
}
std::cin>>rep;
return 0;
}  