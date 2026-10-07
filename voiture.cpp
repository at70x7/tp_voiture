#include "voiture.h"

void Voiture::accelerer(int x, Voiture &car){
   printf("Acceleration: +%d.\n",x);
   car.Vitesse += x;
};
void Voiture::ralentir(int x, Voiture &car){
   printf("Deceleration: -%d.\n",x);
   car.Vitesse -= x;
}

void Voiture::affiche(Voiture &car){
   printf("%s\n%d\n%s\n%d\n%d\n\n",
   car.Carburant,
   car.Modele,
   car.Marque,
   car.Puissance,
   car.Vitesse);
}

void Voiture::arreter(Voiture &car){
   car.Vitesse = 0;
   printf("bruit de pneu qui traine sur la route???\n");
}

void Voiture::demarrer(Voiture &car){
   /* Pas sur de ce qu'il faut
   mettre dedans. Il faut "démarrer"
   la voiture, mais il n'y a rien à
   fair pour la "démarrer". */
   printf("vroum vroum???\n");
}
