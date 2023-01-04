#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    long long int a,sum=1;                                                   //階乘
    while(scanf("%lld",&a)!=EOF){
        for(int i=1;i<=a;i++){
            sum*=i;
        }
        printf("%lld\n",sum);
        sum=1;
    }
    

}
    

        

        
            
        
    
    
    

    
