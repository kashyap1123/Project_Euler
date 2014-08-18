#include<stdio.h>
#include<math.h>

double factorial( int, int, double );
// Lets optimize the factorial !!
double factorial( int n, int m, double fct_m )
{
    int iter;
    double  fct = fct_m;

    for( iter=m+1; iter<=n; iter++ )
    {
        printf( "\n%10.0f", fct );
        fct *= iter;
    };
    return( fct );
};

void main()
{
    int n1, n2;
    double fct_n1, fct_n2, fct_sum, nchoosek;

    n1 = n2 = 20;

    // We just need orderings of R and D. number of R and D are both 20.
    if( n1>=n2 )
    {
        fct_n2  = factorial( n2, 1, 1 );
        fct_n1  = factorial( n1, n2, fct_n2 );
        fct_sum = factorial( n1+ n2, n1, fct_n1 );
    }
    else
    {
        fct_n1  = factorial( n1, 1, 1 );
        fct_n2  = factorial( n2, n1, fct_n1 );
        fct_sum = factorial( n1+ n2, n2, fct_n2 );
    };

    printf( "\nfct_n1, fct_n2, fct_sum : %f, %f, %f ", fct_n1, fct_n2, fct_sum );
    nchoosek    = fct_sum/ (fct_n1 * fct_n2);
    printf( "\n Number of paths possible with n1=%d, n2=%d is %f", n1, n2, nchoosek );
};
