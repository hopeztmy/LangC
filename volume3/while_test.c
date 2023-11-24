#include<stdio.h>

int main(){
    double count = 1;
    while(count <= 10){                 //1から10を出力
        printf("%.0f\n", count);
        count ++;
    }

    count = 1;
    while(count <= 10){                 //1から10のうち偶数を出力
        if((int)count % 2 == 0){
            printf("%.0f\n", count);
        }
        count ++;
    }

    return 0;
}