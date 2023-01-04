#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a,b,c,d;
                                                  
    while(scanf("%d",&a)!=EOF){                     //判斷三位數的整數，其各位數字之立方和是否等於該數本身
        b=a/100;
        c=(a%100)/10;
        d=a%100%10;
        if(a==b*b*b+c*c*c+d*d*d)
            printf("Yes\n");
        else
            printf("No\n");
        
    }                                           
    
    

}
    

        

        
            
        
    
    
    

    
