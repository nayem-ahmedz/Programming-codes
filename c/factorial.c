//factorial
#include<stdio.h>
int fact(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return a * fact(a-1);
    }
}
int main(){
    int a = 5;
    printf("%d", fact(a));
}
