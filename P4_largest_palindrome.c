#include<stdio.h>
#include<math.h>

void main()
{
//    Number of digits
    int N_hi, N_lo, N_digits;
    printf( "\nEnter number of digits \n" );
    scanf( "%d", &N_digits );
    printf( "\n Number of digits is %d", N_digits);

    N_hi    = pow( 10, N_digits );
    N_lo    = pow( 10, ( N_digits-1 ) );

    printf( "\n N_hi %d, N_lo %d", N_hi, N_lo );

    int x1, x2;
    int mult, dig, dig_count, dig_opp, is_pal, num_right, num_left, largest_pal;
    largest_pal = 0;

    for( x1=N_hi; x1>N_lo; x1-- )
    {
        printf( "\nx1 %d", x1 );
        for( x2=x1; x2>N_lo; x2-- )
        {
//                Check if this leads to a palindrome
            mult        = x1 * x2;
            dig         = floor( log10(mult)) + 1;
            dig_count   = 1;
            dig_opp     = dig + 1 - dig_count;
            is_pal      = 1;

            num_right   = 0;
            num_left    = 0;

// Print a few things for debug
//            printf( "\n mult is %d, dig is %d, dig_count is %d, dig_opp is %d", mult, dig, dig_count, dig_opp );

            while( dig_count<=dig_opp )
            {
                num_right   = floor( mult/pow(10, dig_count-1 ) )   - ( 10 * floor( mult/pow(10, dig_count ) ) );
                num_left    = floor( mult/pow(10, dig_opp-1 ) )     - ( 10 * floor( mult/pow(10, dig_opp ) ) );

                if( num_left!=num_right )
                {
//                    Not a palindrome
                    is_pal  = 0;
                    break;
                }
                dig_count+= 1;
                dig_opp-= 1;
            };
//        Print o/p
            if( is_pal==1 )
            {
                if(largest_pal<mult)
                {
                    largest_pal = mult;
                };
                break;
            };
        };
    };

    printf( "\n The largest palindrome is %d", largest_pal );
}
