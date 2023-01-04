#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    float a,b;                                                   //攝氏求華氏，四捨五入到小數點後一位
    while(scanf("%f",&a)!=EOF){
        a=a*9/5+32;
        a=(int)(a*10+0.5);
        b=a/10;
        printf("%.1f\n",b);
    }
   


}
    

        

        
            
        
    
    
    

    
