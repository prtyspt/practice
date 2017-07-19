#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t){

        int n;
        scanf("%d", &n);

        char string[n];

        scanf("%s", string);

        char *head;
        head = string;

        int res = 0;

        while(1){
          if(*head == '\0'){
            break;
          }
          if(*head >= 48 && *head <= 57){
            res++;
            while(*head >= 48 && *head <=57){
              head++;
            }
          }
          else{
            head++;
          }
        }

        printf("%d", res);

        t--;
    }

    return 0;
}
