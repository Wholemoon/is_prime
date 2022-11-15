#include<stdio.h>

double root(double number){
  double numb=number, ref=2;
  int c=0;
  numb=number/ref;
  while(c<10){
    c++;
    ref=(numb+ref)/2;
    numb=number/ref;
  }
  return(numb);
}

int main(){
  double number;
  printf("%s", "Give me a number and I will give you the root: ");
  scanf("%lf", &number);
  printf("%.10lf\n", root(number));
  return(0);
}
