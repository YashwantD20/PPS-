Name- Yashwant Madhav Dongare 
PRN No- 2503033111372029
#include<stdio.h>
int main (){
 int i,num,fact=1;
  printf("Enter number: ");
  scanf("%d",&num);

 for (i=1;i<=num;i++){
    fact=fact*i;
 }

  printf("Factorial: %d",fact);
return 0;
}
