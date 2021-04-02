#include<stdio.h>
#include<math.h>
FILE *fout1;
// double simp(double x1, double x2, double t, int N, int nSteps);
double simp(double, double, double, int, int);
double function(double);
double data(double,double, double, int, int );
int main() {
  int i, nSteps=3000, N=50;
  double t;
  double x1 = -5.0;
  double x2 = 5.0; 
  fout1=fopen("data.txt" ,"w");
   for(i=-199; i<=199; i++){
    t =0.01*(double)i;
   fprintf(fout1,"%3.5lf  %24.15lf  %24.15lf\n",t, function(t), simp(x1, x2, t, N, nSteps));
    printf("%3.5lf %24.15lf  %24.15lf\n",t, function(t), simp(x1, x2, t, N, nSteps));
  }

  fclose(fout1);
 }

