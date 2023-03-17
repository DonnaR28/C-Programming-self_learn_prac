// C Program to Calculate Sum of Series: 1 + x + x^2 + x^3 upto Nth Term
#include<stdio.h>
#include<math.h>
int input_n(){
  int n;
  printf("Enter the n terms: ");
  if(scanf("%d", &n));
  return n;
}
int input_x(){
  int x;
  printf("Enter the value of x: ");
  if(scanf("%d", &x));
  return x;
}
int find_n_sum(int n, int x){
  int sum;
  for(int i=0; i<n; i++){
    sum = sum + pow(x, i);
  }
  return sum;
}
void output(int n, int sum){
  printf("The sum of %d terms is %d\n", n, sum);
}
int main(){
  int n, x, sum;
  n = input_n();
  x = input_x();
  sum = find_n_sum(n, x);
  output(n, sum);
  return 0;
}