//C Program to Reverse a String:
#include<stdio.h>
int main(){
  char str[100], rev_str[100];
  int len, i, j;
  printf("Enter the string: ");
  if(scanf("%[^\n]", str));
  len =0;
  while(str[len]!='\0'){
    len++;
  }
  int j=0; i = len-1;
  while(i>=0){
    rev_str[j] = str[i];
    j++;
    i--;
  }
  rev_str[len]='\0';
  printf("%s\n", rev_str);
}

 /*for(int i=0; str[i]!='\0'; i++)
for(int j=0; i>=0; j++){
rev_str[j] = str[i-1];
i--;
}
rev_str[j]='\0';*/