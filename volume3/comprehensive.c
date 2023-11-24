#include<stdio.h>

int main(){
    int n = 1;
    for(n = 1; n <= 25; n ++){          //1から25のうち3の倍数を出力
        if(n % 3 == 0){
            printf("%d\n", n);
        }
    }
    while(n <= 50){                     //26から50のうち3の倍数を出力
        if(n % 3 == 0){
            printf("%d\n", n);
        }
        n ++;
    }

    return 0;
}