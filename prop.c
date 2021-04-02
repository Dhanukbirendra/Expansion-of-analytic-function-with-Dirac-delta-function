double sin(double x);
static double pi=3.14159265358979;
double delta(int, double, double);
double prop(int N, double x, double t){
 return sin(2.0*pi*x)*delta(N,x,t);
}
