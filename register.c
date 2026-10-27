#include <stdio.h>

int main(){
    long long int sum=0;
    for (long long int i=1;i<=383000;i+=2){
        sum+=i*i;
    }
    printf("%lld\n", sum);
    return 0;
}