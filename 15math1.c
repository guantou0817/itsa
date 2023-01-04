#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int x,y;                                                   //判斷是否在正方形內(100x100)
    while(scanf("%d %d",&x,&y)!=EOF){
        if(x<=100&&x>=0&&y>=0&&y<=100)
            printf("inside\n");
        else
            printf("outside\n");
 
    }

}
    

        

        
            
        
    
    
    

    
