#include <stdio.h>

int *GetSet( int *In ) ;
int Arr[99] ;

int main() {
    int *data ; 
    int num ;

    data = GetSet( &num ) ;
    printf("Number of elements : %d\n" , num ) ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%4d" , data[i] ) ;
    }
    printf("\n") ;
    return 0 ;
}//end function

int *GetSet( int *In ) {
    printf( "Enter Array : " ) ;
    scanf("%d" , In ) ;

    printf("Enter Number : " ) ;
    for(int i = 0 ; i < *In ; i++ ) {
        scanf( "%d" , &Arr[i] ) ;
    }
    return  Arr ; 
}
