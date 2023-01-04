#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int time;
    double s;
    double sum=0;                                                 
    while(scanf("%d %lf",&time,&s)!=EOF){
        if(time>=60){                                           //0~60小時為基本薪資
            sum+=s*60;
            time-=60;
        }else{
            sum+=time*s;
            time=0;
        }
        if(time>0){
            if(time>=60){                                       //61~120小時為1.33倍;121以上為1.66倍
                sum+=s*60*1.33;
                sum+=s*(time-60)*1.66;
            }
            else{
                sum+=s*time*1.33;
            }
        }
            
        printf("%.1lf\n",sum);
        sum=0;
        
    }
    

}
    

        

        
            
        
    
    
    

    
