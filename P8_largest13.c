#include<stdio.h>
#include<math.h>

void main()
{
    //char nmbrs[ 2000 ];
    char * nmbrs;
    int N_max   = 1000;
    FILE * pfile;
    pfile   = fopen( "best13.txt", "r" );
    if(pfile!=NULL)
    {
        /*
        if( fgets( nmbrs, N_max, pfile )!=NULL)
        {
            puts( nmbrs );
        };
        */
        fscanf( pfile, "%s", nmbrs );
    };

    printf( "\n Size of nmbrs %d", sizeof(nmbrs) );
    printf( "\n nmbrs %s", (nmbrs) );
};
