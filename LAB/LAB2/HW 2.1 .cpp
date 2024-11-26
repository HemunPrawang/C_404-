#include <stdio.h>
#include <string.h>

void reverse( char str1[] , char str2[]) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out [50 ] ;
    reverse( text , out) ;
    printf("%s\n" , out ) ;
    return 0 ;
}//end function

void reverse( char str1[] , char str2[] ) {
    int l = strlen(str1) ;
    for(int i = 0 ; i < l ; i++ ) {
        str2[i] = str1[l - i - 1] ;
    }
    str2[l] = '\0' ;
}