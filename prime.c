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

int main(){
  unsigned long long int number;
  int output;
  
  printf("%s", "Give me a number to check: ");
  scanf("%llu", &number);
  
  output = is_prime(number);

  if(output==1){
   printf("%lld is a prime number.\n", number);
  }
  if(output==0){
   printf("%lld is not a prime number.\n", number);
  }
  return(0);
}
