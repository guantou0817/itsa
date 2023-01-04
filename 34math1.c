#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a,t=0;
                                                  
    while(scanf("%d",&a)!=EOF){                     //求其所有的因數
        for(int i=1;i<=a;i++){
            if(a%i==0){
                if(t==0){
                    printf("%d",i);
                }else
                    printf(" %d",i);
                t++;
            }
        }
        printf("\n");
        t=0;
        
    }                                           
    
    

}
    

        

        
            
        
    
    
    

    
