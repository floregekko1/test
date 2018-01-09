
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include "snowballedge.h" 


Fichier::Fichier()
{ 
    
    
    return;
}
Fichier::Fichier(fstream *fd){
    int compteur ;
    int ValeurMax =3;

    for (compteur =0;compteur <= ValeurMax; compteur++){
        fd->open("snowball.$compteur.img");
        fd->close();
        }
        cout<<"le fichier en cours :" << fd << endl;
        compteur =compteur +1; 
        cout <<"le prochain fichier est :"<<compteur <<endl;
           
}
void Fichier::setnom(char *nomFichier){
    this->nomFichier=nomFichier;

}
void Fichier::getnom(char *nomFichier){
    this->nomFichier=nomFichier;

}
void Fichier::transferer_fichier(){
    //char *command[10];
   int  system(const char *command);
    do{
    
        system("time aws s3 cp --profile snowballEdge --endpoint http://192.168.106.129:8080  /home/floranana/snowballedge.$compteur s3://hadinger-demo/&nomFichier\n >/home/fcaron/snowballedge.csv");

    }while(true);

    

     
     

}