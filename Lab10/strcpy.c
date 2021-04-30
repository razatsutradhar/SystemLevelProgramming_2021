#include <stdio.h>

char* strcpy (char* strDest, const char* strSrc);

char* start = "abcd";
char* copy;

int main(void) {
  copy = strcpy(copy, start);
  printf("%s\n", copy);
  return 0;
}

char* strcpy (char* strDest, const char* strSrc){
  strDest = (char*)strSrc;
  return strDest;
}