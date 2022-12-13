#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int mon;
    while(scanf("%d",&mon)!=EOF){
        if(mon>=3&&mon<=5){
            printf("Spring\n");
        }
        else if(mon>=6&&mon<=8){
            printf("Summer\n");
        }
        else if(mon>=9&&mon<=11){
            printf("Autumn\n");
        }
        else {
            printf("Winter\n");
        }
    }
    
      
        
    
    

}
        

        
            
        
    
    
    

    
