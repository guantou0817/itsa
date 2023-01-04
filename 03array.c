#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a[6],sum=0;
                                                  
    while(scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5])!=EOF){                     //宣告一個 1 維的整數陣列，並計算元素中所有元素的立方和
        for(int i=0;i<6;i++){
            sum+=a[i]*a[i]*a[i];
        }
        printf("%d\n",sum);
        sum=0;
    }                                           
    
    

}
    

        

        
            
        
    
    
    

    
