#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a,sum=0 ;
                                                    
    while(scanf("%d",&a)!=EOF){                                             //小於等於a可被3整除的值的和
        for(int i=1;i<=a;i++){
            if(i%3==0){
                sum+=i;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    

}
    

        

        
            
        
    
    
    

    
