#include <stdio.h>

int main()
{
    long X;
    int K;
    scanf("%ld %d", &X, &K);
    int i;

    int digits[18] = {0};

    long divisor = 1;

    for(i=0;i<18;i++){
        divisor*=10;
        digits[i] = X%10;
        X /= 10;
        printf("%ld %d %ld\n", divisor, digits[i], X);
    }

    printf("\n");
    int start = 0;
    for(i=17;i>=0;i--){
        if(start == 0 && digits[i] != 0) start = 1;
        if(K!=0 && start == 1){
            if(digits[i]!=9){
                digits[i] = 9;
                K--;
            }
          }

        printf("%d ", digits[i]);
    }

    long sum = 0;
    long multiple = 1;

    for(i=0;i<18;i++){
        sum += (digits[i]*multiple);
        multiple *= 10;
    }

    printf("%ld", sum);
    return 0;

}
