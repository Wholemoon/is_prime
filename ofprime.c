#include<stdio.h>

int is_prime(unsigned long long int number){
  unsigned long long int ref = 2;
  if(ref > number){
    return(0);
  }
  while(ref*ref <= number){
    if(number%ref == 0){
      return(0);
    }
    ref++;
  }
  return(1);
}
