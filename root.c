#include<stdio.h>

#define NUMBEROFROOTING 100

double root(double number){
  double numb = number, ref = 2;
  int c = 0;
  numb = number/ref;
  while(c < NUMBEROFROOTING){
    c++;
    ref = (numb + ref)/2;
    numb = number/ref;
  }
  return(numb);
}

void main(){
  double numbertoroot;
  printf("%s", "Give me a number and I will give the root: ");
  scanf("lf", &numbertoroot);
  printf("%.10lf\n", root(numbertoroot));
}
