#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int x,y=0;
                                                  
    while(scanf("%d %d",&x,&y)!=EOF){                     //判斷座標象限
        if(x==0&&y==0)
            printf("Origin\n");
        else if(x!=0&&y==0)
            printf("x-axis\n");
        else if(x==0&&y!=0)
            printf("y-axis\n");
        else if(x>0&&y>0)
            printf("1st Quadrant\n");
        else if(x>0&&y<0)
            printf("4th Quadrant\n");
        else if(x<0&&y>0)
            printf("2nd Quadrant\n");
        else
            printf("3rd Quadrant\n");

    }                                           
    
    

}
    

        

        
            
        
    
    
    

    
