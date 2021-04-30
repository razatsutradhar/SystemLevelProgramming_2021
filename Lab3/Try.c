#include <stdio.h>                                                                                      #include <stdlib.h>  /* For exit() function */
int main(int argc, char *argv[])
{
   FILE *FPRT;
   FPRT=fopen("program.txt","a+");
   if(FPRT==NULL){
      printf("Error!");

      exit(1);
   }
   fprintf(FPRT,"program is written");
   printf("program is written in program.txt");
   fclose(FPRT);
}
