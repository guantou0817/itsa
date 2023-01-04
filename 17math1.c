#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int x,y,max;                                                   //最大公因數
    scanf("%d %d",&x,&y);
    for(int i=1;i<=x&&i<=y;i++){
        if(x%i==0&&y%i==0)
            max=i;
    }
    printf("%d\n",max);
 
    

}
    

        

        
            
        
    
    
    

    
