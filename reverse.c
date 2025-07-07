#include <stdio.h>
int main(){
    int n,rd,rs=0,og;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0){
        rd=n%10;
        rs=rs*10+rd;
        n/=10;

    }
    
        printf("reversed number is %d",rs);

    return 0;
}