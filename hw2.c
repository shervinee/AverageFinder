#include <stdio.h>
#include <stdlib.h>

int main(void){
    //int n=8;
    float current [10][10];
    float next [10][10];
    int i,j,p,q,its;
    float crnr1,crnr2,crnr3,crnr4 ;
    float eps;
    puts("number of iterations?");
    scanf("%d",&its);
    if(its<=0){
        puts("ERROR");
        exit(1);
                }
    
    puts("epsilon?");
    scanf("%f",&eps);
    if(!(eps >= 0.001 || eps <= 0.1))
    {
        puts("ERROR");
        exit(1);
    }
    
    puts("sides?");
    scanf("%f%f%f%f", &crnr1, &crnr2, &crnr3, &crnr4);
    
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            current[i][j]=0;
        }
    }
    
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            next[i][j]=0;
        }
    }
    
    printf("%.1f%.1f%.1f%.1f",crnr1,crnr2,crnr3,crnr4);
    
    for(j=0;j<10;j++)
    {
        current[0][j]=crnr1;
        next[0][j]=crnr1;
    }
            for(i=1;i<9;i++)
            {
                current[i][9]=crnr2;
                next[i][9]=crnr2;
            }
            
            for(j=1;j<10;j++)
            {
                current[9][j]=crnr3;
                next[9][j]=crnr3;
            }
            
            for(i=1;i<10;i++)
            {
                current[i][0]=crnr4;
                next[i][0]=crnr4;
            }
            
            for(i=1;i<9;i++){
                for(j=1;j<9;j++){
                    next[i][j]=((current[i-1][j]+current[i+1][j]+current[i][j-1]+current[i][j+1])/4);
                }
            }
            
            for(i=0;i<10;i++){
                for(j=0;j<10;j++){
                    printf("%.1f ",next[i][j]);
                    //current[i]
                    //next[i][j]=
                }
                printf("\n");
            }
            return 0;
            
        }
