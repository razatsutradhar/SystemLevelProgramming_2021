#include <stdio.h>
#include <stdlib.h>
char mostFreq;
int occur = 0;

void removeChar(char s[], char c){
  int reader = 0, writer = 0, curr = 0;
  while(s[reader]){
    if(s[reader] != c){
      s[writer++] = s[reader];
    }else{
      curr++;
    }
    reader++;
  }
  while(writer < reader){
    s[writer++] = '\0';
  }

  if(curr > occur){
    mostFreq = c;
    occur = curr;
  }
}

void checkAllChars(char s[]){
  int reader = 0;
  while(s[reader]){
    removeChar(s, s[reader]);
    reader++;
  }
}
int main(void) {
  char fileName[100];
  scanf("%s", fileName);
 
  FILE *f = fopen(fileName, "rb");
  fseek(f, 0, SEEK_END);
  long fsize = ftell(f);
  fseek(f, 0, SEEK_SET);  /* same as rewind(f); */

  char *string = malloc(fsize + 1);
  fread(string, 1, fsize, f);
  fclose(f);

  string[fsize] = 0;

  checkAllChars(string);
  printf("the most frequent char is %c with %d occurences", mostFreq, occur);

}
