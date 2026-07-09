Name- Dongare Yashwant Madhav 
PRN No- 2503033111372029
#include <stdio.h>
int main(){
    int pin=1107,enterpin;
    printf("Enter Pin: ");
    scanf("%d",&enterpin);
    
    if(enterpin==pin){
        printf("correct Pin\n Enter Amount: ");
    }
    else {
        printf("incorrect pin");
    }
    return 0;
}
