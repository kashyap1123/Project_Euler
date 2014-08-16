#include<stdio.h>
#include<math.h>

void main()
{
    int N;
    printf( "\nEnter the number N\n");
    scanf( "%d", &N );

    int sum_sq, sq_sum, diff;
    sum_sq  = N * (N + 1) * (2*N + 1)/6;
    sq_sum  = N * N * (N + 1) * (N + 1)/4;
    diff    = sq_sum - sum_sq;

    printf( "\nsum_sq is %d and sq_sum is %d ", sum_sq, sq_sum );
    printf( "\nDifference of sum of squares and square of sum for N=%d is %d", N, diff );
}
