#include <stdio.h>

unsigned long int fib(unsigned int n){
  int result = 0;
  if(n == 1 || n == 2){
    result = 1;
  }
  else{
    result = fib(n - 1) + fib(n - 2);
  }
  return result;
}

int main(){
  unsigned int i = 0;
  // Maximum 45
  for(i = 1; i <= 40; i++){
    printf("%d: %ld \n",i , fib(i));
  }
  return 0;
}

