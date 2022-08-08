#include <stdio.h>

void Matriz2x2();
void Matriz3x3();
void Matriz4x4();

int main(int argc, char const *argv[])
{
    Matriz2x2();

    Matriz3x3();
    
    Matriz4x4();
}

void Matriz2x2()
{
    int mE[2][2];
    int mF[2][2];
    int mEFResultado[2][2];

    //MatrizC
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" \nElemento mA [%d][%d] = ", i, j);
            scanf("%d", &mE[i][j]);
        }  
    }
    
    //MatrizD

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nElemento mb [%d][%d] = ", i, j);
            scanf("%d", &mF[i][j]);
        }    
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mEFResultado[i][j] = mE[i][j] * mF[i][j]; 
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d ", mEFResultado[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
}

void Matriz3x3()
{
    int mC[3][3];
    int mD[3][3];
    int mCDResultado[3][3];

    //MatrizC
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" \nElemento mA [%d][%d] = ", i, j);
            scanf("%d", &mC[i][j]);
        }  
    }
    
    //MatrizD

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nElemento mb [%d][%d] = ", i, j);
            scanf("%d", &mD[i][j]);
        }    
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mCDResultado[i][j] = mC[i][j] * mD[i][j]; 
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", mCDResultado[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
}

void Matriz4x4()
{
    int mA[4][4];
    int mB[4][4];
    int mABResultado[4][4];

    //MatrizA
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" \nElemento mA [%d][%d] = ", i, j);
            scanf("%d", &mA[i][j]);
        }  
    }
    
    //MatrizB

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\nElemento mb [%d][%d] = ", i, j);
            scanf("%d", &mB[i][j]);
        }    
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mABResultado[i][j] = mA[i][j] * mB[i][j]; 
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d ", mABResultado[i][j]);
        }
        printf("\n");
    }
}
    
