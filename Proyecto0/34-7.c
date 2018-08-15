#include "stdio.h"
#include "stdlib.h"

int main() {
  int amount = 0;
  int result = 0;
  int total20 = 0;
  int total10 = 0;
  int total5 = 0;
  int total1 = 0;
  const int bill20 = 20;
  const int bill10 = 10;
  const int bill5 = 5;
  const int bill1 = 1;
  printf("Enter one amount: \n");
  scanf("%d",&amount);
  result = amount/bill20;
  total20 = result;
  amount = amount - result*bill20;
  result = amount/bill10;
  total10 = result;
  amount = amount - result*bill10;
  result = amount/bill5;
  total5 = result;
  amount = amount - result*bill5;
  result = amount/bill1;
  total1 = result;
  printf("bill20: %d\nbill10: %d\nbill5: %d\nbill1: %d \n",total20,total10,total5,total1);
  return 0;
}
