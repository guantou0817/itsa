#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a,b,c;                                                   //購票十元硬幣,五元硬幣,一元硬幣所需數量
    while(scanf("%d",&a)!=EOF){
        
        
        printf("NT10=%d\n",a/10);
        b=(a-(a/10)*10)/5;
        printf("NT5=%d\n",b);
        c=a-(a/10)*10-b*5;
        printf("NT1=%d\n",c);
    }
   


}
    

        

        
            
        
    
    
    

    
