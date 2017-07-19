#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];


    int i;

    int min = 0, max = 0;

    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);

        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    int j;

    int allPresent = 1;

    for(j=min;j<=max;j++){
        int present = 0;
        for(i=0;i<size;i++){
            if(j==arr[i]){
                present = 1;
                break;
            }
        }
        if(present==0){
            allPresent = 0;
            break;
        }
    }

    if(allPresent){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
