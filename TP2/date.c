#include <stdio.h>

 /* definition d'un type pour representer une date */

typedef unsigned int Jour ; 

typedef enum {jan, fev, mar, avr, mai, jun, jui, aou, sep, oct, nov, dec} Mois ;
  /* attention : jan vaut 0, fev vaut 1, mar vaut 3, etc. */

typedef unsigned int Annee ; 


 typedef struct {
	Jour jour ;
	Mois mois ; 
	Annee annee ; } Date ;

/* affichage d'une date a l'ecran */

void afficheDate (Date d) {
   printf("%u/%u/%u\n", d.jour, d.mois + 1, d.annee) ;
}


int main() {

	/* a completer ... */
	Date d;
	int isThirtyOne = 0, isThirty = 0, isTwentyNine = 0, isTwentyEight = 0;
	printf("donner le jour\n");
	scanf ("%u", &(d.jour)) ;
	

	printf("donner le mois\n");
	scanf ("%u", &(d.mois)) ;


	printf("donner l'annee\n");
	scanf ("%u", &(d.annee)) ;

	afficheDate(d);
	
		
	isThirtyOne = (d.jour>= 1) && (d.mois ==0  || d.mois == 2 || d.mois == 4 || d.mois == 6 || d.mois == 7 || d.mois == 9 || d.mois ==  11)&& (d.jour <= 31);
	isThirty = (d.jour>= 1) && ( d.mois == 3 || d.mois == 5 || d.mois == 8 || d.mois == 10 )&& (d.jour <= 30);
	isTwentyNine = (d.jour>= 1) && (d.annee % 4 == 0 && !(d.annee % 100) && (d.mois == 2)&& (d.jour <= 29));
	isTwentyEight = (d.jour>= 1) && !(d.annee % 4 == 0 && !(d.annee % 100) && (d.mois == 2) && (d.jour <= 28));
	
	if (  isThirtyOne || isThirty || isTwentyNine || isTwentyEight ) {
	printf("date correcte\n");
	} else {
	printf("date correcte\n");
	}	

 return 0 ;
}
