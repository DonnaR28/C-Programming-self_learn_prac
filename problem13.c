//C Program to Copy a String to Another String
#include<stdio.h>
void input_str(char *str){
  printf("Enter a string: ");
  if(scanf("%[^\n]", str));
}

void copy_str(char *str, char *str1){
  for(int i=0; str[i]!='\0'; i++){
    str1[i] = str[i];
  }
}

void output(char *str1){
  printf("%s is a copy of og string.\n", str1);
}

int main(){
  char str[100], str1[100];
  input_str(str);
  copy_str(str, str1);
  output(str1);
  return 0;
}