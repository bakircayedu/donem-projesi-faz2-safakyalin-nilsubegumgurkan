#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int check(int matrix[3][3])
{

    if (matrix[0][0] == 1 && matrix[0][1] == 1 && matrix[0][2] == 1)
    {
        printf("\n1 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][0] == 2 && matrix[0][1] == 2 && matrix[0][2] == 2)
    {
        printf("\n2 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][0] == 1 && matrix[1][0] == 1 && matrix[2][0] == 1)
    {
        printf("\n1 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][0] == 2 && matrix[1][0] == 2 && matrix[2][0] == 2)
    {
        printf("\n2 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][0] == 1 && matrix[1][1] == 1 && matrix[2][2] == 1)
    {
        printf("\n1 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][0] == 2 && matrix[1][1] == 2 && matrix[2][2] == 2)
    {
        printf("\n2 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[1][0] == 1 && matrix[1][1] == 1 && matrix[1][2] == 1)
    {
        printf("\n1 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[1][0] == 2 && matrix[1][1] == 2 && matrix[1][2] == 2)
    {
        printf("\n2 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][1] == 1 && matrix[1][1] == 1 && matrix[2][1] == 1)
    {
        printf("\n1 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][1] == 2 && matrix[1][1] == 2 && matrix[2][1] == 2)
    {
        printf("\n2 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][2] == 1 && matrix[1][2] == 1 && matrix[2][2] == 1)
    {
        printf("\n1 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][2] == 2 && matrix[1][2] == 2 && matrix[2][2] == 2)
    {
        printf("\n2 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][2] == 1 && matrix[1][1] == 1 && matrix[2][0] == 1)
    {
        printf("\n1 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[0][2] == 2 && matrix[1][1] == 2 && matrix[2][0] == 2)
    {
        printf("\n2 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[2][0] == 1 & matrix[2][1] == 1 && matrix[2][2] == 1)
    {
        printf("\n1 karakteri kazandý. \n");
        system("pause");
        exit(0);
    }
    else if (matrix[2][0] == 2 && matrix[2][1] == 2 && matrix[2][2] == 2)
    {
        printf("\n2 karakteri kazandý.\n");
        system("pause");
        exit(0);
    }

    return 1;
}

int main()
{

    setlocale(LC_ALL, "Turkish");

    int matris[3][3];

    int x = 1;
    int o = 2;
    int row;
    int column;
    int selectedCharacter;
    int oyuncu1;
    int oyuncu2;
    int count = 0;;

    printf("******* TIC-TAC-TOE ******* \n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matris[i][j] = 0;
            printf(" [  %d   ] ",matris[i][j]);
        }
        printf("\n");
    }

    start:
    printf("\n1. oyuncu karakter seçin! (x=1/o=2) --> ");
    scanf("%d", &selectedCharacter);
 
    if (selectedCharacter == 1)
    {
        oyuncu1 = x;
        oyuncu2 = o;
    }
    else
    {
            oyuncu1 = o;
           oyuncu2 = x;
    }
 
    if (selectedCharacter > 2 || selectedCharacter < 1)
    {
        printf("\nLütfen 1 ve ya 2 yazýn! \n");
        goto start;
    }

    for (int i = 0; i < 9; i++)
    {
        repeat:
        printf("\n1. oyuncu nereye %d koymak istersin?_ (satýr sütun) --> ", oyuncu1);
        scanf("%d %d", &row, &column);

        if (row > 3 || row <1 || column < 1 || column > 3)
        {
            printf("\nSýnýrlarýn dýþýna çýkmak yok! \n");
            goto repeat;
        }
        else
        {
            if (matris[row - 1][column - 1] == 0)
            {
                matris[row - 1][column - 1] = oyuncu1;
                count = count + 1;
                printf("\n");

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        printf("[  %d  ]", matris[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Burasý dolu. Tekrar deneyin.");
                goto repeat;
            }

            check(matris);

            repeat2:
            printf("\n2. oyuncu nereye %d koymak istersin? (satýr sütun) --> ", oyuncu2);
            scanf("%d %d", &row, &column);

            if (row > 3 || row < 1 || column < 1 || column > 3)
            {
                printf("\nSýnýrlarýn dýþýna çýkmak yok! \n");
                goto repeat2;
            }
            else
            {
                if (matris[row - 1][column - 1] == 0)
                {
                    matris[row - 1][column - 1] = oyuncu2;
                    count = count + 1;
                    printf("\n");

                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            printf("[  %d  ]", matris[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                {
                    printf("Burasý dolu. Tekrar deneyin.");
                    goto repeat2;
                }

                check(matris);
            }

            if (count == 9)
            {
                printf("\nBerabere! \n");
                system("pause");
                exit(0);
            }

        }

    }

}

