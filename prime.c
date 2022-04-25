#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int sum(int *arr, int n);

int* getPrimes(int n);

int isPrime(int x);

int main(int argc, char **argv) {

  int n = 10; //default to the first 10 primes
  if(argc == 2) {
    n=atoi(argv[1]);
  }
  int *primes = getPrimes(n);

  int s = sum(primes, n);
  printf("The sum of the first %d primes is %d\n", n, s);

  return 0;
}

int sum(int *arr, int n) {
  int i;
  int total=0;
  for(i=0; i<n; i++) {
    total += arr[i];
  }
  return total;
}

int* getPrimes(int n) {
  //int *result=(int *) malloc(sizeof(int) * n);
  int result[n];
  result[0]=2;
  int i = 1;
  int x = 3;
  while(i < n) {
    if(isPrime(x)) {
      result[i] = x;
      i++;
    }
    x +=2;
  }
  return result;
}

int isPrime(int x) {
   if(x<2){
     return 0;
   }
   else if(x==2){
     return 1;
   }
  else if(x % 2 == 0) {
    return 0;
  }
 
     for(int k=3; k<x; k+=2) {
    if(x % k == 0) {
      return 0;
    }
  }
  return 1;

}
