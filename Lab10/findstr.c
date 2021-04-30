#include <stdio.h>
#include <string.h>

int main(void) {
  char words;
  char largest[20];
  char smallest[20];
  int len;
  int i = 0;
  do{
    printf("Enter word: ");
    scanf("%s", &words);
    len = strlen(&words);
    if(i == 0){
      strcpy(smallest, &words);
      strcpy(largest, &words);
    }else{
      if(strcmp(&words, smallest)<0){
        strcpy(smallest, &words);
        // printf("set small\n");
      }else if(strcmp(&words, largest)>0){
        strcpy(largest, &words);
        // printf("set large\n");
      }
        
    }
    i++;
  }while(len!=4);
  printf("Largest: %s\n", largest);
  printf("Smallest: %s\n", smallest);
  return 0;
}