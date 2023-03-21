//C Program to Calculate Sum of Series:(x^2/2!)-(x^4/4!)+(x^6/6!) upto Nth term.
#include<stdio.h>
#include<math.h>
float input_x(){
  float x;
  printf("Enter the value of x: ");
  if(scanf("%f", &x));
  return x;
}

int input_n(){
  int n;
  printf("Enter the value of n: ");
  if(scanf("%d", &n));
  return n;
}

float find_sum(int n, float x){
  float sum, fact;
  for(int i=1; i<=n; i++){
    fact = 1;
    for(int j = 2*i; j>=1; j--){
      fact = fact * j;
    }
    if(i%2 == 0){
      sum = sum - pow(x, 2*i)/fact;
    }
    else{
      sum = sum + pow(x, 2*i)/fact;
    }
  }
  return sum;
}

void output(int n, float sum){
  printf("The sum of %d terms is %.4f", n, sum);
}

int main(){
  int n;
  float sum,x, fact;
  x = input_x();
  n = input_n();
  sum = find_sum(n, x);
  output(n, sum);
  return 0;
}