
#include <stdio.h>



int main()
{
    char input[100];
    scanf("%s", input);

    int i, len=0;
    for(i=0;input[i]!='\0'; ++i);

    int h, l;
    h = 0;
    l = i-1;

    while(h < l ){
        if(input[h] != input[l]){
            printf("NO");
            break;
        }
        else{
            h++;
            l--;
        }
    }

    if(h >= l){
        printf("YES");
    }

    return 0;

}
