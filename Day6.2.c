#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    
    
    if(a+b>c&&b+c>a&&a+c>b)
    {
       printf("Yes");
    }
    else
    {
       printf("No");
     }

    
    return 0;
}
