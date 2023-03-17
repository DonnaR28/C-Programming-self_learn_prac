//C Program to Calculate Sum of Series: (1/x)+(1/x^2)+(1/x^3) upto Nth Term.
#include<stdio.h>
#include<math.h>
int input_n(){
  int n;
  printf("Enter the n terms: ");
  if(scanf("%d", &n));
  return n;
}
float input_x(){
  float x;
  printf("Enter the values of x: ");
  if(scanf("%f", &x));
  return x;
}
float find_sum(int n, float x){
  float sum=0;
  for(int i=1; i<=n; i++){
    sum = sum + 1/pow(x,i);
  }
  return sum;
}
void output(int n, float sum){
  printf("The sum of %d terms is %f", n, sum);
}
int main(){
  int n;
  float x, sum;
  n = input_n();
  x = input_x();
  sum = find_sum(n,x);
  output(n, sum);
  return 0;
}