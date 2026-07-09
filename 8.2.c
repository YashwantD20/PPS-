
#include<stdio.h>
int add(int n1,int n2){
int sum;
sum=n1+n2;
return sum;
}
int Sub(int n1,int n2){
int sub;
sub=n1-n2;
return sub;
}
int mul(int n1,int n2){
int mul;
mul=n1*n2;
return mul;
}
int divide(int n1,int n2){
int divide;
divide=n1/n2;
return divide;
}

int main(){
    int num1,num2,op,ans;
    printf("Enter 1st numbers: ");
    scanf("%d",&num1);
    printf("Enter 2nd numbers: ");
    scanf("%d",&num2);
    
    printf("1 for Addition\n2 for subtraction\n3 for multiplication\n4 for division\nEnter Number: ");
    scanf("%d",&op);

    if(op==1){
        ans=add(num1,num2);
    }
    else if(op==2){
        ans=Sub(num1,num2);
    }
    else if(op==3){
        ans=mul(num1,num2);
    }
    else if(op==4){
        ans=divide(num1,num2);
    }
    else{
        printf("invalid input");
    }
    printf("\nANSWER is: %d",ans);
    return 0;
}
