double prop(int, double, double);
double simp(double x1, double x2, double t, int N, int nSteps) {
  int i;
  double sum1=0.0;
  double sum2=0.0;
  double sum3=0.0;
  double h,x;
  h=(x2-x1)/(double)nSteps;
  for(i=1; i<=nSteps-2; i=(i+3)){
    x = x1+(double)i*h;
    sum1 += prop(N, x, t);
    }
  for(i=2; i<=nSteps-1; i=(i+3)){
    x = x1+(double)i*h;
    sum2 += prop(N,x,t);
  }
  for(i=3; i<=nSteps-3; i=(i+3)){
    x = x1+(double)i*h;
    sum3 += prop(N,x,t);
  }
  return (3.0*h/8.0)*(prop(N,x1,t)+prop(N,x2,t)+3.0*sum1+3.0*sum2+2.0*sum3);
}

