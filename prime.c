#include <stdio.h>
int main(){
int n,i;
printf("enter a number");
scanf("%d",&n);
for(i=2;i<=n%2;n++)
{
    if(n%i==0)
        continue;
        else
        break;
}
    
        printf("number is prime",n);

    return 0;
}
