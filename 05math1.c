#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    double a;                                                   //正方形面積,四捨五入到小數點後一位
    while(scanf("%lf",&a)!=EOF){
        a*=a;
        a=(int)((a*10+0.5));
        double b=a/10;
        printf("%.1lf\n",b);
    }
   


}
    

        

        
            
        
    
    
    

    
