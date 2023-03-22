//C program to convert string to uppercase.
#include<stdio.h>
void input_string(char *str){
  printf("enter a string: ");
  if(scanf("%[^\n]", str));
}

void convert_upper(char *str){
  for(int i=0; str[i]!='\0'; i++){
    if(str[i]>='a' && str[i]<='z'){
    str[i] = str[i]-32;
    }
  }
}

void output(char *str){
  printf("The capitalized string is %s\n",str);
}

int main(){
  char str[100];
  input_string(str);
  convert_upper(str);
  output(str);
  return 0;
}