#include <stdio.h>

int gcd(int a, int b){
    //printf("Calculatng gcd for %d %d\n", a, b);
    if(a%b == 0){
        return b;
    }
    else{
        return gcd(b, a%b);
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t){

        int N;
        scanf("%d", &N);

        int i, sum=0;

        for(i=2;i<N;i++){
            int divisor = 1;
            int sumint = 0;
            int Nint = N;
            while(Nint != 0){
                divisor = i;
                //printf("Divisor is: %d\n", divisor);
                sumint += Nint%divisor;
                //printf("Sumint Sum: %d %d\n", sumint, sum);
                Nint /= divisor;
                //printf("Nint: %d\n", Nint);
            }

            sum += sumint;
        }

        int ans;

        printf("Calculating ans using sum = %d, N-2 = %d and GCD = %d\n", sum, N-2, gcd(sum, N-2));


        ans = (N-2)/gcd(sum, N-2);

        printf("%d\n", ans);

        t--;
    }
}
