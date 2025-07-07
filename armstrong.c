#include <stdio.h>
#include <math.h>
int main(){
    int n,og,rd,rs=0;
    printf("enter a number");
    scanf("%d",&n);
    og=n;
while(og!=0){
    rd=og%10;
    rs+=rd*rd*rd;
    og/=10;
}
if(rs==0){
    printf("%d is armstrong",n);
}
else{
    printf("%d is not armstrong",n);
}
return 0;
}
