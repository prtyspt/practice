#include <stdio.h>

int main()
{
    int max;
    scanf("%d", &max);

    int isPrime[max];

    int i;
    for(i=0; i < max; i++){
        isPrime[i] = 1;
    }

    int j, upper=0;
    for(j=1; j*j <= max; j++){
        upper++;
    }

    int k, l;
    for(k=2; k <= upper; k++){
        for(l=1; k*l <= max; l++){
            isPrime[k*l-1] = 0;
        }
    }

    int m;
    for(m=0; m<max; m++){
        if(isPrime[m]){
            printf("%d ", m+1);
        }
    }

    return 0;

}
