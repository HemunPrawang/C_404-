#include <stdio.h>

int GetSet( int data[] ) ;

int main() {
    int *data ; 
    int num ;
    
    data = new int[99] ;

    num = GetSet( data ) ;

    printf("Number of elements : %d\n" , num ) ;
    for(int i = 0 ; i < num ; i++ ) {
        printf("%4d" , data[i] ) ;
    }// end for
    printf("\n") ;
    return 0 ;
}//end function


int GetSet( int data[] ) {
    int Roll ;
    printf( "Enter Array : " ) ;
    scanf("%d" , &Roll ) ;

    printf("Enter Number : " ) ;
    for(int i = 0 ; i < Roll ; i++ ) {
        scanf( "%d" , &data[i] ) ;
    }// end for
    return  Roll ; 
}// end function