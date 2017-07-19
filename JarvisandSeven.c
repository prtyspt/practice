#include <stdio.h>
#include <math.h>

int returnBulbs(int i){
    if(i<10){
        if(i==1) return 2;
        if(i==2) return 5;
        if(i==3) return 5;
        if(i==4) return 4;
        if(i==5) return 5;
        if(i==6) return 6;
        if(i==7) return 3;
        if(i==8) return 7;
        if(i==9) return 6;
        if(i==0) return 6;
    }
    else{
        int compoundans = (returnBulbs(i/10) + returnBulbs(i%10));
        return compoundans;
    }
}

int main(int argc, int *argv[])
{
    if(argc==2){
      if(argv[1]=='-v') printf("Printing verbose");
    }
    int t;
    scanf("%d\n", &t);

    while(t){

        int N;
        scanf("%d\n", &N);

        int currentNum;
        int minimum = INFINITY;


        int i = 0;
        for(i=0;i<N;i++){
            scanf("%d ", currentNum);
            int currentBulbs = returnBulbs(currentNum);
            if(currentBulbs < minimum) minimum = currentBulbs;
        }

        printf("%d\n", minimum);

        t--;
    }

}
