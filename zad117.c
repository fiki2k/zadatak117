// Program treba provjerit jesu li 2 matrice iste.

#include <stdio.h>

int main()
{
    int A[10][10],B[10][10],i,j,m,n;
    int redak, stupac, jednaka;

    printf("Unesi broj redova : ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca : ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice A : \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi vrijednost A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nMatrica A je : \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }

    
    printf("\nUnesi vrijednosti matrice B : \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi vrijednost B[%d][%d] : ",i,j);
                 scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrica B je : \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", B[i][j]);
            }
            printf("\n\n");
        }


    /* Pretpostavimo dasu jednake */
    jednaka = 1;

    for(redak=0; redak<m; redak++)
    {
        for(stupac=0; stupac<n; stupac++)
        {
            /*
             * Ako matrice nisu jednake
             */
            if(A[redak][stupac] != B[redak][stupac])
            {
                jednaka = 0;
                break;
            }
        }
    }

    /*
     * Procjerava vrijednost od jednaka
     * Po nasoj pretpostavci od jednaka je 1 znaci dasu jednake matrice.
     * Ako sadrzava 0 onda su razlicite.
     */
    if(jednaka == 1)
    {
        printf("\nMatrica A je jednaka matrici B\n");
    }
    else
    {
        printf("\nMatrica A nije jednaka matrici B\n");
    }

    return 0;
}
