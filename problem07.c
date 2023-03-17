//C Program to Calculate Sum of Series:1^2/1! + 2^2/2! + 3^2/3! upto Nth term 
#include<stdio.h>
#include<math.h>
int input_n(){
  int n;
  printf("Enter the n terms: ");
  if(scanf("%d", &n));
  return n;
}

int fact(int n){
int fact=1;
while(n!=0){
fact =fact *n;
n = n-1;
}
return fact;
}

float find_sum(int n){
  int i, j;
  float sum;
  for(i=1;i<=n; i++){
  /*  int fact =1;
    for(j=i;j>=1; j--){
      fact = fact*j;
    }*/
    sum = sum + pow(i,2)/fact(i);
  }
  return sum;
}
void output(int n, float sum){
  printf("The sum of %d terms is %f\n", n, sum);
}
int main(){
  int n;
  float sum;
  n = input_n();
  sum = find_sum(n);
  output(n, sum);
  return 0;
}

