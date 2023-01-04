#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a=0 ;
    int t=0;                                                
    while(scanf("%d",&a)!=EOF){                     //計算出 1 到 a 之間屬於 5 和 7 的倍數的數值
        for(int i=1;i<=a;i++){
            if(!(i%35)){
                if(t==0)
                    printf("%d",i);    
                else
                    printf(" %d",i);
                t++;
            }                        
                
        }
        printf("\n");
    }                                           
    
    

}
    

        

        
            
        
    
    
    

    
