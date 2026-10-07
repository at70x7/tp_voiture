#include "voiture.h"
int main(){
   Voiture voiture{
      "Essence",
      "Peugot",
      208,
      100,
      0,
   };
   demarrer(voiture);
   accelerer(50, voiture);
   affiche(voiture);
   ralentir(20, voiture);
   affiche(voiture);
   arreter(voiture);
   affiche(voiture);
}