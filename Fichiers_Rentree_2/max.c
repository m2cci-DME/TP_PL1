#include <stdio.h>

int main() {
    int x, y ;
   
    printf ("tapez deux entiers au clavier\n") ;
    scanf("%d", &x) ;
    scanf("%d", &y) ;

    if (x > y) {
        printf("le maximum des deux entiers est %d\n", x) ;
    } else {
        printf("le maximum des deux entiers est %d\n", y) ;
    } ;

    return 0 ;
}
