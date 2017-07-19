#include <stdio.h>

int main(){

  int size;
  scanf("%d", &size);

  char str[size+1];

  scanf("%s", str);
  str[size] = '\0';

  //printf("%s", str);

  char teststr[] = "hackerearth";

  //printf("%s\n", teststr);

  int testcharfreq[26] = {0};
  int charfreq[26] = {0};

  int i = 0;
  while(teststr[i] != '\0'){
      //printf("%c ", teststr[i]);
      testcharfreq[(int)teststr[i]-97]++;
      //printf("%d\n", testcharfreq[(int)teststr[i]-97]);
      i++;
  }

  i = 0;
  while(str[i] != '\0'){
    //printf("%c ", str[i]);
    charfreq[(int)str[i]-97]++;
    //printf("%d\n", charfreq[(int)str[i]-97]);
    i++;
  }

  int num = 100;
  i=0;
  for(i=0;i<26;i++){
    if(testcharfreq[i] != 0){
      charfreq[i] = charfreq[i]/testcharfreq[i];
      if(charfreq[i] == 0){
        printf("%d", 0);
        break;
      }

      if(charfreq[i] < num){
        num = charfreq[i];
      }

      //printf("%d ", charfreq[i]);
    }

  }

  if(charfreq[i] != 0){
    printf("%d", num);
  }


  return 0;
}
