#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a=0,sum=0 ;
                                                  
    while(scanf("%d",&a)!=EOF){                     //1 ～a 的整數裡，可以被 2 與 3 整除，但不能被 12 整除的整數
        for(int i=1;i<a;i++){
            if(i%6==0&&i%12!=0){
                sum+=i;
            }                        
                
        }
        printf("%d\n",sum);
        sum=0;
        
    }                                           
    
    

}
    

        

        
            
        
    
    
    

    
