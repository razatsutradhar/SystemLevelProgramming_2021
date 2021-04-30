#include <stdio.h>
#include <math.h>
int fact (int n, int s){
  if(n == 1){
    return s;
  }else{
    return fact(n-1, s*n);
  }
}

int toBin(int n){
  int num = n;
  int bin = 0;
  for(int i  = 7; i >=0; i--){
    if(num >= pow(2, i)){
      bin += pow(10, i);
      num -= pow(2, i);
    }
  }
  return bin;
}

int inverseBin(int bin){
  int newBin = 0;
  for(int i = 0; i<8;i++){
    if((int)(bin/(pow(10, i))) % 2 == 0){
      newBin += pow(10, i);
    }
  }
  return newBin;
}

int addBins(int bin1, int bin2){
  int partialSum = bin1+bin2;
  int carry = 0;
  int newSum =0;
  for(int i = 0; i < 12; i++){
    if((int)(partialSum / (pow(10, i))) %10 + carry > 1){
      newSum += ((int)(partialSum / (pow(10, i)))%10 + carry)%2 * (int)(pow(10, i));

      carry = 1;

    }else{

      newSum += ((int)(partialSum / (pow(10, i)))%10 + carry)%2 * (int)(pow(10, i));
      carry = 0;
    }
  }
  return newSum;
}

int toDec(int bin){
  int dec = 0;
  for(int i = 0; i <= 12; i++){
    if(bin/(int)(pow(10,i))%2 == 1){
      dec += pow(2,i);
    }
  }
  return dec;
}
int main(void) {
  int n;
  printf("enter a number to get its factorial\n");
  scanf ("%d",&n);
  printf("factorial of %d is %d\n", n, fact(n,1));

  printf("enter a number (max 256)\n");
  scanf ("%d",&n);
  printf("%d as binary: %d\n", n, toBin(n));
  printf("%d 1's complement: %d\n", toBin(n), inverseBin(toBin(n)));
  printf("%d shifted 3 to the left: %d\n", toBin(n), toBin(n)*1000);
  printf("adding shifted to 1's comp: %d\n", addBins(inverseBin(toBin(n)), toBin(n)*1000));
  printf("the sum as decimal: %d\n", toDec(addBins(inverseBin(toBin(n)), toBin(n)*1000)));

  return 0;
}
