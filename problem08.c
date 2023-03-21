//C Program to Calculate Sum of Series: x - (x^3/3!) + (x^5/5!) upto Nth term
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
  float fact, sum;
  for(int i=1; i<=n; i++){
    fact =1;
    for(int j = 2*i-1; j>=1; j--){
      fact = fact *j;
    }
    if(i%2 == 0){
      sum = sum - pow(x, 2*i-1)/fact;
    }
    else{
      sum = sum + pow(x, 2*i-1)/fact;
    }
  }
  return sum;
}
void output(int n, float sum){
  printf("the sum of %d terms is %.4f\n", n, sum);
}

int main(){
  int n;
  float x, sum, fact;
  x = input_x();
  n = input_n();
  sum = find_sum(n, x);
  output(n, sum);
  return 0;
}