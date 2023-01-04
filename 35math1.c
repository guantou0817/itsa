#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a,t=0;
                                                  
    while(scanf("%d",&a)!=EOF){                     //每四年一閏，每百年不閏，每四百年一閏
        if((a%4==0&&a%100!=0)||a%400==0)
            printf("Bissextile Year\n");
        else
            printf("Common Year\n");
        
    }                                           
    
    

}
    

        

        
            
        
    
    
    

    
