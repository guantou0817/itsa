#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int pow2 (int b){
    int a=1;
    for(int i=0;i<b;i++){
        a*=2;
    }
    return a;
}
int main(){
    int a,b;                                                   //2的i次方，i小於31
    while(scanf("%d",&b)!=EOF){
        if(b>=31)
            printf("Value of more than 31\n");
        else{
            a=pow2(b);
            printf("%d\n",a);
        }
    }
   


}
    

        

        
            
        
    
    
    

    
