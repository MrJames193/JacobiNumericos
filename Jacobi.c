#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{

    float Matriz1[3][3] = {{5,-1,2},{3,8,-2},{1,1,4}};
    float b[3]= {12,-25,6};
    float T[3];
    float res[3];
    float e=0.001,k;
    int i=0,j=0,l=0;
    printf("\nMétodo de");
    printf("\n");
    printf("\nLas ecuaciones quedarian: ");
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf("%.fX%d",Matriz1[i][j],j+1);
            if(j==0 || j==1)
                printf("+");
        }
        printf("=");
        printf("%.0f",b[i]);
        printf(" ");
    }

    printf("\nLa Matriz a resolver es: ");
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf(" %.f",Matriz1[i][j]);
        }
        printf(" %.0f ",b[i]);
    }
    for(i=0;i<3;i++)
     T[i]=0;
    while (l!=3)
    {
        l=0;
        for(i=0;i<3;i++)
        {
            res[i]=(1/Matriz1[i][i]*(b[i]));
            for(j=0;j<3;j++)
            {
                if(j!=i)
                    res[i]=res[i]-(1/Matriz1[i][i]*(Matriz1[i][j]*T[j]));
            }
        }
        for(i=0;i<3;i++){
            k=fabs(res[i]-T[i]);
            if(k<=e)
            l=l+1;
        }
    for (i=0;i<3;i++)
      T[i]=res[i];
    }
    for(i=0;i<3;i++)
        printf("\nLos resultados son x%d=%.2f",i+1,res[i]);
}



