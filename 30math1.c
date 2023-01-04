#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    long long int a=0 ;
    int bool=0,max=1;                                               
    while(scanf("%lld",&a)!=EOF){                     //計算出是否為質數
        for(int i=1;i<a;i++){
            if(a%i==0){
                max=i;
            }                        
                
        }
        if(max==1)
            printf("YES\n");
        else
            printf("NO\n");
        
    }                                           
    
    

}
    

        

        
            
        
    
    
    

    
