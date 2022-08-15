#include <stdio.h>

void Matriz2x2();
void Matriz3x3();
void Matriz4x4();

int main(int argc, char const *argv[])
{
    Matriz2x2();

    printf("\n");

    Matriz3x3();

    printf("\n");
    
    Matriz4x4();
}

void Matriz2x2()
{
    int linE = 2;
    int colE = 2;
    int linF = 2;
    int colF = 2;
    int mE[linE][colE];
    int mF[linF][colF];
    int mEF[2][2];
    int soma = 0;

    //MatrizC
    for (int i = 0; i < linE; i++)
    {
        for (int j = 0; j < colE; j++)
        {
            printf(" \nElemento mA [%d][%d] = ", i, j);
            scanf("%d", &mE[i][j]);
        }  
    }
    
    //MatrizD

    for (int i = 0; i < linF; i++)
    {
        for (int j = 0; j < colF; j++)
        {
            printf("\nElemento mb [%d][%d] = ", i, j);
            scanf("%d", &mF[i][j]);
        }    
    }

    if (colE != linF)
    {
        printf("Erro! Para o programa funcionar, o nro de colA deve ser igual ao nro de linB");
    }else
    {
        for (int k1 = 0; k1 <= linE; k1++)
        {
            for (int k2 = 0; k2 <= colF; k2++)
            {
                soma = 0;
                for (int i = 0; i < colE; i++)
                {
                    soma = soma + mE[k1][i] * mF[i][k2];
                }
                mEF[k1][k2] = soma;
            }
            
        }
        
    } 
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d ", mEF[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
}

void Matriz3x3()
{
    int linC = 3;
    int colC = 3;
    int linD = 3;
    int colD = 3;
    int soma = 0;
    int mC[linC][colC];
    int mD[linD][colD];
    int mCD[3][3];

    //MatrizC
    for (int i = 0; i < linC; i++)
    {
        for (int j = 0; j < colC; j++)
        {
            printf(" \nElemento mC [%d][%d] = ", i, j);
            scanf("%d", &mC[i][j]);
        }  
    }
    
    //MatrizD

    for (int i = 0; i < linD; i++)
    {
        for (int j = 0; j < colD; j++)
        {
            printf("\nElemento mD [%d][%d] = ", i, j);
            scanf("%d", &mD[i][j]);
        }    
    }

    if (colC != linD)
    {
        printf("Erro! Para o programa funcionar, o nro de colA deve ser igual ao nro de linB");
    }else
    {
        for (int k1 = 0; k1 <= linC; k1++)
        {
            for (int k2 = 0; k2 <= colD; k2++)
            {
                soma = 0;
                for (int i = 0; i < colC; i++)
                {
                    soma = soma + mC[k1][i] * mD[i][k2];
                }
                mCD[k1][k2] = soma;
            }
            
        }
        
    } 
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d \t", mCD[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
}

void Matriz4x4()
{
    int linA;
    int colA;
    int linB;
    int colB;

    linA = 4;
    colA = 4;
    linB = 4;
    colB = 4;

    int soma = 0;
    int mA[linA][colA];
    int mB[linB][colB];
    int mC[4][4];

    //MatrizA
    

    for (int i = 0; i < linA; i++)
    {
        for (int j = 0; j < colA; j++)
        {
            printf(" \nElemento mA [%d][%d] = ", i, j);
            scanf("%d", &mA[i][j]);
        }  
    }

    printf("MATRIZ A: \n");

    for (int i = 0; i < linA; ++i)
    {
        for (int j = 0; j < colB; ++j)
        {
            printf(" %d \t", mA[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    //MatrizB

    for (int i = 0; i < linB; ++i)
    {
        for (int j = 0; j < colB; ++j)
        {
            printf("\nElemento mb [%d][%d] = ", i, j);
            scanf("%d", &mB[i][j]);
        }    
    } 

    printf("\n MATRIZ B: \n");

    for (int i = 0; i < linA; ++i)
    {
        for (int j = 0; j < colB; ++j)
        {
            printf(" %d \t", mB[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    
    if (colA != linB)
    {
        printf("Erro! Para o programa funcionar, o nro de colA deve ser igual ao nro de linB");
    }else
    {
        for (int k1 = 0; k1 <= linA; k1++)
        {
            for (int k2 = 0; k2 <= colB; k2++)
            {
                soma = 0;
                for (int i = 0; i < colA; i++)
                {
                    soma = soma + mA[k1][i] * mB[i][k2];
                }
                mC[k1][k2] = soma;
            }
            
        }
        
    } 

    printf("\n MATRIZ C = A * B \n");
    
    for (int i = 0; i < linA; ++i)
    {
        for (int j = 0; j < colB; ++j)
        {
            printf(" %d \t", mC[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    

    
    
}
    
