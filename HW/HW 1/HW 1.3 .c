#include <stdio.h>

int main() {
    char F[100] ;
    char L[100] ;
    
    printf( "First Name : " ) ;
    scanf( "%s" , F ) ;
    
    printf( "Last Name : " ) ;
    scanf( "%s" , L ) ;
    
    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand" , F , L ) ;
    return 0;
}// end Function
