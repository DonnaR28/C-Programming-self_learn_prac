//C Program to Calculate Sum of Series: 1+(1/2^2)+(1/3^2) upto Nth Term
#include<stdio.h>
#include<math.h>
int input_n(){
  int n;
  printf("Enter the n terms: ");
  if(scanf("%d", &n));
  return n;
}
/*int input_x(){
  int x;
  printf("Enter the value of x: ");
  if(scanf("%d", &x));
  return x;
}*/
float find_n_sum(int n){
  float sum=0;
  for(int i=1; i<=n;i++){
    sum = sum + 1/pow(i,2);
  }
  return sum;
}
void output(int n, float sum){
  printf("The sum of %d terms is %f", n, sum);
}
int main(){
  int n, x;
  float sum;
  n = input_n();
  /*x = input_x();*/
  sum = find_n_sum(n);
  output(n, sum);
  return 0;
}