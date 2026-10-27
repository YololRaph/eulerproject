#include <stdio.h>


int main(){
    long long int sum=0;
    int j=1;
    int b=2;
    while (b<=4000000){
        if (b%2==0){
            sum+=b;
        }
        int temp=j;
        j=b;
        b+=temp;
    }
    printf("%lld\n", sum);
    return 0;
}