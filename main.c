#include<stdio.h>
#include<string.h>

char *is_prime(unsigned long long int number){
  unsigned long long int ref = 2;
  if(ref > number){
    return("False");
  }
  while(ref*ref <= number){
    if(number%ref == 0){
      return("False");
    }
    ref++;
  }
  return("True");
}

void main(){
  unsigned long long int number;
  
  printf("%s", "Give me a number to check: ");
  scanf("%llu", &number);
  
  char *output = is_prime(number);
  
  if(strcmp(output, "True") == 0){
    printf("%llu is a prime number.\n", number);
  }
  if(strcmp(output, "False") == 0){
    printf("%llu is not a prime number.\n", number);
  }
}
