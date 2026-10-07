#pragma once
#include <stdio.h>
#include <string.h>

class Voiture {
   public:
   char Carburant [24];
   char Marque[24];
   int Modele ;
   int Puissance;
   int Vitesse;
   void accelerer(int x, Voiture &car);
   void ralentir(int x, Voiture &car);
   void affiche(Voiture &car);
   void arreter(Voiture &car);
   void demarrer(Voiture &car);
};