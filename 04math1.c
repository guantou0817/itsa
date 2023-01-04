#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a,b,c;                                                   //兩數各種運算
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    if(a%b>=0)
        printf("%d/%d=%d...%d\n",a,b,a/b,a%b);
    else if(a%b<0&&a>=0)
        printf("%d/%d=%d...%d\n",a,b,(a/b)+1,-(a%b));           //餘數要取正數之處理
    else  if(a<0&&b>=0)
        printf("%d/%d=%d...%d\n",a,b,(a/b)-1,b+(a%b));
    else
        printf("%d/%d=%d...%d\n",a,b,(a/b)+1,-b+(a%b));


}
    

        

        
            
        
    
    
    

    
