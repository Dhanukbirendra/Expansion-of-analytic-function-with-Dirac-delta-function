double fact(int);
double pow(double, double);
double hermite(int n, double x){
  int k;
  double sum;
   sum=0.0;
 
if(n%2 == 0) {
    for(k=0; k<=n/2; k++) {
      sum+=pow(-1.0,(double)k)*fact(n)*pow(2*x,(double)n-2.0*(double)k)/
           (fact(k)*fact(n-2*k));
    } 
  } else {
    for(k=0; k<=(n-1)/2; k++) {
      sum+=pow(-1.0,(double)k)*fact(n)*pow(2*x,(double)n-2.0*(double)k)/
           (fact(k)*fact(n-2*k));

  }
  }
  return sum;
}


