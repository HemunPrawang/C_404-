#include <stdio.h>

int *GetMatrix( int *row , int *col ) ;

int main() {
    int *data ;
    int m , n ;
    
    data = GetMatrix( &m , &n ) ;

    if( m == 0 && n == 0 ) {
        printf("Enter number of rows and columns : %d  %d" , m , n ) ;
    }else {
        printf("Enter number of rows and columns : %d  %d \n", m , n ) ;
        printf("Enter matrix elements :\n" ) ;
        for(int i = 0 ; i < m ; i++ ) { 
            for(int j = 0 ; j < n ; j++ ) {
                printf("%2d" , data[ i * n + j ] ) ;
            }//end for
             printf("\n") ;
        }//end for
    }//end else
    return 0 ;
}//end function

int *GetMatrix( int *row , int *col ) {
    printf( "Enter the number of rows , col : " ) ;
    scanf( "%d %d" , row , col ) ;

    int *a ;
    a = new int[ (*row) * (*col)] ;

    for(int i = 0 ; i < *row ; i++) {
        for(int j = 0 ; j < *col ; j++ ) {
            scanf( "%d" , &a[ i * (*col) + j ] ) ;
        }//end for
    }//end for
    return a ;
}//end function