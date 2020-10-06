#include <stdio.h>

  int main() {
  int x, y;
  double p = 1;

  printf("entrez x\n") ;
  scanf ("%d", &x) ;
  printf("entrez y\n") ;
  scanf ("%d", &y) ;

  if ( y > 0 ) {
  	for ( int i= 1; i <= y ; i++){
		p = p * x;	
        }
  }else {
	for ( int i= 1; i <= y ; i++){
		p = p / x;
	}
  }


  printf ("%d a la puissance de %d est %f",x, y, p);

return 0;
}

