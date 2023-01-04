#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i,j=0;
    int dignum[4]={};
    int d_num=0;
    scanf("%d",&d_num);
    dignum[0]=d_num%10000/1000;
    dignum[1]=d_num%1000/100;
    dignum[2]=d_num%100/10;
    dignum[3]=d_num%10;   
    char num[5][8][7]={{"*****"," ","*****"," ","*****"," ","*****",},
                    {"*****"," ","*****"," ","*****"," ","*****",},
                    {"*****"," ","*****"," ","*****"," ","*****",},
                    {"*****"," ","*****"," ","*****"," ","*****",},
                    {"*****"," ","*****"," ","*****"," ","*****",}};
    for(i=0;i<4;i++){
        j=2*i;
        switch(dignum[i]){
            case 1:
                strcpy(num[0][j],"    *");
                strcpy(num[1][j],"    *");
                strcpy(num[2][j],"    *");
                strcpy(num[3][j],"    *");
                strcpy(num[4][j],"    *");
                break;
            case 2:
                strcpy(num[0][j],"*****");
                strcpy(num[1][j],"    *");
                strcpy(num[2][j],"*****");
                strcpy(num[3][j],"*    ");
                strcpy(num[4][j],"*****");
                break;
            case 3:
                strcpy(num[0][j],"*****");
                strcpy(num[1][j],"    *");
                strcpy(num[2][j],"*****");
                strcpy(num[3][j],"    *");
                strcpy(num[4][j],"*****");
                break;
            case 4:
                strcpy(num[0][j],"*   *");
                strcpy(num[1][j],"*   *");
                strcpy(num[2][j],"*****");
                strcpy(num[3][j],"    *");
                strcpy(num[4][j],"    *");
                break;
            case 5:
                strcpy(num[0][j],"*****");
                strcpy(num[1][j],"*    ");
                strcpy(num[2][j],"*****");
                strcpy(num[3][j],"    *");
                strcpy(num[4][j],"*****");
                break;
            case 6:
                strcpy(num[0][j],"*****");
                strcpy(num[1][j],"*    ");
                strcpy(num[2][j],"*****");
                strcpy(num[3][j],"*   *");
                strcpy(num[4][j],"*****");
                break;
            case 7:
                strcpy(num[0][j],"*****");
                strcpy(num[1][j],"    *");
                strcpy(num[2][j],"    *");
                strcpy(num[3][j],"    *");
                strcpy(num[4][j],"    *");
                break;
            case 8:
                strcpy(num[0][j],"*****");
                strcpy(num[1][j],"*   *");
                strcpy(num[2][j],"*****");
                strcpy(num[3][j],"*   *");
                strcpy(num[4][j],"*****");
                break;
            case 9:
                strcpy(num[0][j],"*****");
                strcpy(num[1][j],"*   *");
                strcpy(num[2][j],"*****");
                strcpy(num[3][j],"    *");
                strcpy(num[4][j],"    *");
                break;
            case 0:
                strcpy(num[0][j],"*****");
                strcpy(num[1][j],"*   *");
                strcpy(num[2][j],"*   *");
                strcpy(num[3][j],"*   *");
                strcpy(num[4][j],"*****");
                break;            
        }       
    }
    for(i=0;i<5;i++){
         for(j=0;j<7;j++){
        printf("%s",num[i][j]);
         }
        printf("\n");
    }   
}
        

        
            
        
    
    
    

    
