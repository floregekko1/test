
#ifndef SNOWBALLEDGE_H
#define SNOWBALLEDGE_H
#include <iostream>
#include <fstream>
#include <string.h>

using namespace :: std;
class Fichier{
     ofstream *fd ;  // pointeur sur les fichiers
     char *s;     //pointeur sur les chaines de caractères
     int resulat;
     private:
        char *nomFichier;
     public:
     //constructeur 
        Fichier(void);//constructeur par defaut
        Fichier(fstream *fd);

     //autres methodes
        //void afficher_fichier(char *nomFichier);
        void transferer_fichier();
        void recup_resultat(void);
     //destructeurs
        //~Fichier();
          
     //accesseur 
     void setnom(char *nomFichier);
     void getnom(char *nomFichier);

 };
 #endif

