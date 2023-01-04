#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a;   
    int days,mins,secs,hours;                                                //總秒數求天數、小時數、分鐘數、與秒數
    while(scanf("%d",&a)!=EOF){

        days=a/86400;   
        hours=(a%86400)/3600;
        mins=((a%86400)%3600)/60;
        secs=((a%86400)%3600)%60;
        printf("%d days\n",days);
        printf("%d hours\n",hours);
        printf("%d minutes\n",mins);
        printf("%d seconds\n",secs);
       
    }
   


}
    

        

        
            
        
    
    
    

    
