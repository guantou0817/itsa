#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a,b,c,t;
                                                 
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){                    //判斷是否構成三角形
        if(a>c&&a>=b){
            t=a;
            a=c;
            c=t;
        }else if(b>c&&b>=a){
            t=b;
            b=c;
            c=t;
        }

        if(a+b<=c){
            printf("unfit\n");
        }
        else printf("fit\n");
    }                                           
    
    

}
    

        

        
            
        
    
    
    

    
