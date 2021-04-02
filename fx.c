double fact(int );
double exp(double );
double pow(double,double);
static double t=0.0;
static double pi=3.14159265358979;
double hermite(int, double);
double fx( int n, double x, double t){
 return (exp(-(x*x+t*t)/2.0)*hermite(n,x)*hermite(n,t))/(pow(2,(double)n)*pow(pi,0.5)*fact(n));
}
