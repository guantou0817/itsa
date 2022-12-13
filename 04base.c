#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    
    int h1,m1,h2,m2,total;
    int part1,part2,part3;
    scanf("%d %d",&h1,&m1);
    scanf("%d %d",&h2,&m2);
    total=h2*60+m2-h1*60-m1;
    total/=30;
    if(total>=4){
        part1=30*4;
        total-=4;
    }else{
        part1=total*30;
        total=0;
    }
    if(total>=4){
        part2=40*4;
        total-=4;
    }else{
        part2=total*40;
        total=0;
    }
    part3=total*60;
    printf("%d\n",part1+part2+part3);
    
      
        
    
    

}
        

        
            
        
    
    
    

    
