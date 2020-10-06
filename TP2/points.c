#include <stdio.h>

 /* definition d'un type pour representer un point du plan par ses coordonnees */

 typedef struct {
	int abscisse ;
	int ordonnee ; } Point ;
	int sont_alignes = 0, sont_orthogonaux = 0;
	float y;	
	float m,p;

int main() {

	/* a completer ... */
	Point A,B,C;
 	printf("donner Ax\n");
	scanf ("%d", &(A.abscisse)) ;
	printf("et Ay\n");
	scanf ("%d", &(A.ordonnee)) ;
 	
	printf("donner Bx\n");
	scanf ("%d", &(B.abscisse)) ;
	printf("et By\n");
	scanf ("%d", &(B.ordonnee)) ;
	
	printf("donner Cx\n");
	scanf ("%d", &(C.abscisse)) ;
	printf("et Cy\n");
	scanf ("%d", &(C.ordonnee)) ;

	//verifier l'alignement
	m = (B.ordonnee - A.ordonnee)/(B.abscisse - A.abscisse);
	p = A.ordonnee - m * A.abscisse;
	y = m * C.abscisse + p;
	sont_alignes = (y == C.ordonnee) ;
	sont_alignes = (() == ()) 
	//verifier l'orthogonalite
	
	sont_orthogonaux = !((B.abscisse - A.abscisse)* (C.abscisse - A.abscisse) + (B.ordonnee - A.ordonnee) * ( C.ordonnee - A.ordonnee));

	// affichage
	if (sont_alignes){
	printf("ils sont alignes\n");
	}else if (sont_orthogonaux) {
	printf("ils sont orthogonaux\n");
	}else {
	printf("ils ne sont ni alignes ni orthogonaux\n");
	} 
	return 0 ;
}
