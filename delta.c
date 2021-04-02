double fx(int, double, double);
double delta(int N, double x, double t) {
double sum;
int i;
  sum=0.0;
  for(i=0; i<=N; i++){
    sum += fx(i,x,t);
  }
  return sum;
}




