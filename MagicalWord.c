#include <stdio.h>

int main()
{
    int t, n, highdiff, lowdiff;

    int primes[] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
    int low[11], high[11];

    int i;
    for(i=0;i<12;i++){
        low[i] = primes[i];
        high[i] = primes[i+1];
    }

    scanf("%d", &t);

    while(t){

        scanf("%d", &n);

        char wordi[n+1], wordo[n+1];

        scanf("%s", wordi);

        int k;
        for(k=0;k<n;k++){

            int isPrime = 0;
            int asciival = (int)wordi[k];

            int l;

            if(asciival < 67) wordo[k] = (char)67;
            if(asciival > 113) wordo[k] = (char)113;

            for(l=0;l<12;l++){
                if(asciival == primes[l]){
                    wordo[k] = wordi[k];
                    isPrime = 1;
                    break;
                }
            }

            if(isPrime != 1){
                for(l=0;l<11;l++){
                    if(asciival>low[l] && asciival<high[l]){
                        lowdiff = asciival - low[l];
                        highdiff = high[l] - asciival;
                        if(lowdiff <= highdiff){
                            wordo[k] = (char)low[l];
                        }
                        else{
                            wordo[k] = (char)high[l];
                        }
                    }
                }
            }
        }

        wordo[n] = '\0';
        printf("%s", wordo);

        t--;
    }
    return 0;
}
