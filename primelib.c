int is_prime(unsigned long long int number){
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
