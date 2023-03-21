//C program to print each character in a string.
#include<stdio.h>
void input_str(char *str);
void output(char *str);
int main(){
  char str[100];
  input_str(str);
  output(str);
  return 0;
}

void input_str(char *str){
  printf("Enter a string: ");
  if(scanf("%[^\n]", str));
}

void output(char *str){
  int i;
  for(i=0; str[i]!='\0'; i++){
    printf("%c\n", str[i]);
  }
}