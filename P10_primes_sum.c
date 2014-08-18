#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void main()
{
    long int iter, iter_2, running_sum, number_primes, N;
    N   = pow(10, 6);
    bool arr[N];

    // Fill up the array upfront
    for( iter=0; iter<N; iter++ )
    {
        arr[iter]   = 1;
    };
    arr[0]  = 0;
    arr[1]  = 0;

    // Ignoring multiples of 2 and have running sum initially set to 2 (first prime!)
    running_sum     = 2;
    number_primes   = 1;

    for( iter=2; iter<N; iter++ )
    {
        // This means we have a prime
        if( arr[iter]!=0 )
        {
            running_sum     += ( 2 * iter ) - 1;
            number_primes   += 1;
            if( 2 * (2*iter - 1 ) > (2 * N - 1 ) )
            {
                for( iter_2=2; ( 2*iter_2 - 1 ) * iter <= (2 * N - 1 ); iter_2++ )
                {
                    arr[iter_2] = 0;
                    printf( "\niter is %ld \t iter_2 is %ld", iter, iter_2 );
                };
            };
        };
    };

    // Print the result !
    printf( "\n Sum of all the primes leq %ld is %ld. \n Number of primes is %ld", N, running_sum, number_primes );
}
