#include<stdio.h>
#include<math.h>

int lattice_recursion( int, int );

// This is just a recursion
int lattice_recursion( int a, int b )
{
    int paths1, paths2;
    if( (a==1)||(b==1) )
    {
        return( 1 );
    }
    else
    {
        return( lattice_recursion( a - 1,  b ) + lattice_recursion( a, b -1 ) );
    };
};

void main()
{
    int n1, n2, num_paths;
    n1  = 21;
    n2  = 21;
    //printf( "\nEnter the dimensions of the lattice...\n" );
    //scanf( "%d %d", n1, n2 );

    num_paths   = lattice_recursion( n1, n2 );
    printf( "\n Number of paths for %d, %d is %d", n1, n2, num_paths );
}
