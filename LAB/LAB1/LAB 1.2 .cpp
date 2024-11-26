#include <stdio.h>

void GetSet( int data[] , int *num ) ;

int main() {
    int *data ;
    int num ;

    data = new int[10] ;

    GetSet( data , &num ) ;

    for ( int i = 0 ; i < num ; i++ ) {
        printf("%d ", data[i] ) ;
    }
    printf("\n") ;
    return 0;
}//end main

void GetSet( int data[] , int *num ) {
    printf( "Enter Array : " ) ;
    scanf("%d" , num ) ;

    printf("Enter Number : " ) ;
    for(int i = 0 ; i < *num ; i++ ) {
        scanf( "%d" , &data[i] ) ;
    }
}// end function