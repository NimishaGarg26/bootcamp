#include <stdio.h>
int main(){
    int n, factorial=1,i;
    printf("enter value of n");
    scanf("%d",&n);

    for( int i=1;i<=n;i++){
    factorial =factorial*i ;
}
    printf("factorial of %d= %d\n ",n,factorial);


    return 0;
}