#include <stdio.h>
#include <string.h>

char* reverse(char str1[]);

int main() {
    char text[50] = "I Love You" ;
    char *out ;

    out = reverse(text) ; 
    printf("%s\n", out) ; 
    return 0 ;
}

char* reverse(char str1[]) {
    int L = strlen( str1 ) ; 
    for ( int i = 0 ; i < L / 2 ; i++ ) {
        char temp = str1[i];
        str1[i] = str1[L - i - 1] ;
        str1[L - i - 1] = temp ;
    }
    return str1 ; 
}
