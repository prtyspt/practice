#include <stdio.h>
#include <stdlib.h>

void printboard(int *arr, int size){
  int i=0;
  int j=0;

  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      if(j==size-1){
        printf("%d\n", *(arr + size*i + j));
      }
      else{
        printf("%d ", *(arr + size*i + j));
      }
    }
  }
}

int main(){

  int size;
  scanf("%d", &size);

  int *array = (int *)malloc(size*size*sizeof(int));

  int i, j, k;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      *(array + size*i + j) = 0;
    }
  }

  int x, y, P;

  scanf("%d %d %d", &x, &y, &P);
/*
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &P);
*/
///*

int xboundmin, xboundmax, yboundmin, yboundmax;
xboundmin = x-P+1;
if(xboundmin < 0) xboundmin = 0;
yboundmin = y-P+1;
if(yboundmin < 0) yboundmin = 0;
xboundmax = x+P;
if(xboundmax > size) xboundmax = size;
yboundmax = y+P;
if(yboundmax > size) yboundmax = size;

  for(k=P;k>0;k--){
    for(i=xboundmin;i<xboundmax;i++){
      for(j=yboundmin;j<yboundmax;j++){
        (*(array + i*size + j))++;
      }
    }
  }
//*/
  printboard((int *)array, size);

  return 0;
}
