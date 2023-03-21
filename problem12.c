//C Program to Find a String Length
#include<stdio.h>
void input_str(char *str);
int find_length(char *str);
void output(char *str, int count);
int main(){
  char str[100];
  int count;
  input_str(str);
  count = find_length(str);
  output(str, count);
  return 0;
}

void input_str(char *str){
  printf("Enter a string: ");
  if(scanf("%[^\n]", str));
}

int find_length(char *str){
  int count =0;
  for(int i=0; str[i]!='\0'; i++){
    count++;}
  return count;
}

void output(char *str, int count){
  printf("The length of %s is %d", str, count);
}