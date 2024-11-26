#include <stdio.h>

void GetMatrix( int **data , int *row , int *col ) ;

int main() {
    int *Dev, m , n ;
    GetMatrix( &Dev, &m , &n ) ;

    if( m == 0 && n > 0 ) {
        printf("Error: Invalid matrix dimensions.") ;
    }else if( m > 0 && n == 0 ) {
        printf("Error: Invalid matrix dimensions.") ;
    }else if( m == 0 || n == 0 ) {
        printf("(empty)") ;
    }else {
        printf("Matrix : \n") ;
        for(int i = 0 ; i < m ; i++ ) { 
            for(int j = 0 ; j < n ; j++ ) {
                printf("%2d" , Dev[ i * n + j ] ) ;
            }//end for
            printf("\n") ;
        }//end for
    }//end else 
    return 0 ;
}//end function

void GetMatrix( int **data , int *row , int *col ) {
    printf( "Enter the number of rows : " ) ;
    scanf( "%d" , row ) ;
    printf( "Enter the number of col    : " ) ;
    scanf( "%d" , col ) ;

    *data = new int[ (*row) * (*col)] ;

    for(int i = 0 ; i < *row ; i++) {
        for(int j = 0 ; j < *col ; j++ ) {
            scanf( "%d" , &(*data)[ i * (*col) + j ] ) ;
        }//end for
    }//end for
}//end function
