//HSPC Problem from set02
#include<stdio.h>
void input_string(char *str){
  printf("ENter the string: ");
  if(scanf("%s", str));
}
void translate(char *str){
  for(int i=0; str[i]!='\0'; i++){
    if(str[i]>='a' && str[i]<='n')
      str[i] = str[i]+13;
    else if(str[i]>='n' && str[i]<='z')
      str[i] = str[i]-13;
    else if(str[i]>='A' && str[i]<='N')
      str[i] = str[i]+13;
    else if(str[i]>='N' && str[i]<='Z')
      str[i] = str[i]-13;
    else 
      continue;
  }
}

void output(char *str){
  printf("The decrypted message is %s", str);
}
int main(){
  char str[100];
  input_string(str);
  translate(str);
  output(str);
  return 0;
}