//C Program to Convert a String into Lowercase
#include<stdio.h>
void input_string(char *str){
  printf("Enter a string: ");
  if(scanf("%[^\n]",str));
}

void convert_lower(char *str){
  for(int i=0; str[i]!='\0';i++){
    if(str[i]>='A' && str[i]<='Z'){
      str[i] = str[i]+32;
    }
  }
}

void output(char *str){
  printf("the new string: %s\n",str);
}

int main(){
  char str[100];
  input_string(str);
  convert_lower(str);
  output(str);
  return 0;
}