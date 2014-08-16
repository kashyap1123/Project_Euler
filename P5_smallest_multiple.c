#include<stdio.h>
#include<math.h>

void main()
{
//  We need to start using Sieve of Erastosthenes
    int x               = 1;
    int N_hi            = 20;

    int n_check[ N_hi ];
    int ind             = 0;
    for( ind=0; ind<N_hi; ind++)
    {
        n_check[ind]    = ind + 1;
    };
    n_check[0]          = 1;

    int check_base      = 2;
    int check_curr      = 2;
    int ind_current     = 1;
    int check_value     = check_base;

    for( check_base=2; check_base<N_hi; check_base++)
    {
        if(n_check[check_base-1]!=1)
        {
//          This case, implies check_base is a prime
            check_value = n_check[check_base-1];
            x           *= check_value;

            ind_current = 1;
            check_curr  = ind_current * check_base;

            while(check_curr<=N_hi)
            {
                if( n_check[check_curr-1]!=1 )
                {
//                  Divide this appropriately
                    n_check[check_curr-1] /= check_value;
                }
                else
                {
                    printf( "\n Error !! Looks like the sieve is not working well at base=%d and current=%d", check_base, check_curr );
                };

                ind_current += 1;
                check_curr  = ind_current * check_base;
            };
        };
    };

    printf( "\n The number is %d ", x );
};

