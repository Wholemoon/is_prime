double root(double number){
  double numb, ref=2;
  int c=0;
  numb=number/ref;
  while(c<20){
    c++;
    ref=(numb+ref)/2;
    numb=number/ref;
  }
  return(numb);
}
