#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a=0;
                                                  
    while(scanf("%d",&a)!=EOF){                     //1 ～ a 之間 的總和
        
        for(int i=1;i<=a;i++){
            if(i==1){
                printf("%d",i);
            }else
                printf(" + %d",i);
        }
        printf(" = %d\n",(1+a)*a/2);
    }                                           
    
    

}
    

        

        
            
        
    
    
    

    
