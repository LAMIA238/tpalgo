
#include <stdio.h>

#include <stdlib.h>

flottant T[10] ;

void remplirT() {

int je ;

printf("Veuillez saisir les éléments du tableau : \n");

pour (i=0; i<10; i++) {

printf ("T[%d]=%d",i+1);

scanf("%f", & T[i]);

}

}

void afficherT() {

int je ;

pour (i=0; i<10; i++)

printf("%.2f ", T[i]);

}

void trierDT () {

int je, j ;

flotteur TL ;

pour (i=0; i<10; i++) {

pour(j=i+1; j<10; j++){

si (T[i]<T[j]) {

TL = T[i] ;

T[i] = T[j] ;

T[j]=TL ;

}

}

}

}

printf("Les éléments du tableau par ordre déssandant\n ");

afficherT();

}

int main() {

remplir t();

trierDT ();

renvoie 0 ;

}
