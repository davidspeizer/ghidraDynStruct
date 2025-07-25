#include "tree.h"
#include <stdio.h>
#include "print.h"

main( )
{
    SearchTree T;
    Position P;
    int i;
    int j = 0;

    T = MakeEmpty( NULL );
    for( i = 0; i < 50; i++, j = ( j + 7 ) % 50 )
        T = Insert( j, T );
    for( i = 0; i < 50; i++ )
        if( ( P = Find( i, T ) ) == NULL || Retrieve( P ) != i ) {
            prints( "Error at " );
            print32( i );
            prints( "\n" );
            //printf( "Error at %d\n", i );
	}

    for( i = 0; i < 50; i += 2 )
        T = Delete( i, T );

    for( i = 1; i < 50; i += 2 )
        if( ( P = Find( i, T ) ) == NULL || Retrieve( P ) != i ) {
            prints( "Error at " );
            print32(  i );
            prints( "\n" );
            //printf( "Error at %d\n", i );
	}
    for( i = 0; i < 50; i += 2 )
        if( ( P = Find( i, T ) ) != NULL ) {
            prints( "Error at " );
            print32( i );
            prints( "\n" );
            //printf( "Error at %d\n", i );
	}

    prints( "Min is ");
    print32(  Retrieve( FindMin( T ) ));
    prints( ", Max is ");
    print32( Retrieve( FindMax( T ) ) );
    prints("\n"); 
    //printf( "Min is %d, Max is %d\n", Retrieve( FindMin( T ) ), Retrieve( FindMax( T ) ) );

    return 0;
}

