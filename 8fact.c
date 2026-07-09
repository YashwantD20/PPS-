/*Name- Dongare Yashwant Madhav 
PRN No- 2503033111372029
#include <stdio.h>
int factorial(int n);

int main(){
    int num,ans;
    printf("Enter a number: ");
    scanf("%d",&num);

    ans=factorial(num);
    printf("Factorial is %d\n",ans);
    return 0;
}

int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
