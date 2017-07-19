#include <stdio.h>

int main()
{
    char num[100];

    scanf("%s", num);

    int i;

    char *head, *tail;
    head = num;
    tail = num;

    int neg = 0;

    while(1){
        if(*head == '\0'){
            break;
        }

        tail = head++;

        int con = 5;

        char a = *head;

        while(con){
            if(*tail == a){
                con--;
                tail++;
            }
            else{
                break;
            }
        }

        if(con == 0){
            printf("Sorry, sorry!");
            neg = 1;
            break;
        }

        head++;
    }

    if(neg == 0){
        printf("Good luck!");
    }

    return 0;
}
