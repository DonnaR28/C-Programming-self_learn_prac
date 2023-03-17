//C Program to Calculate Sum of Series: 1+(1/2)^2+(1/3)^3 upto Nth Term 
#include<stdio.h>
#include<math.h>
int input_n(){
  int n;
  printf("Enter the no. of terms to be summed: ");
  if(scanf("%d", &n));
  return n;
}
float find_sum(int n){
  float sum;
  for(int i=1; i<=n; i++){
    sum = sum + 1/pow(i,i);
  }
  return sum;
}
void output(int n, float sum){
  printf("The sum of %d terms is %f\n", n,sum);
}
int main(){
  int n;
  float sum;
  n = input_n();
  sum = find_sum(n);
  output(n, sum);
  return 0;
}
