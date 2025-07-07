#include <stdio.h>
int main(){
    int rd,og,rs=0,num;
    printf("enter the number");
    scanf("%d",&num);
    og=num;
    while(num!=0){
    rd=num%10;
    rs=rs*10+rd;
    num/=10;
    }
 if(og==rs){
    printf("%d is palindrome",og);

 }
else{
    printf("%d is not palindrome",og);
}
  return 0;  
}