#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(void) {
  char a[30],b[30]={0};
  int l=0;
  scanf("%[^\n]s",a);
  l = strlen(a);
  for(int i=0;i<l;i++){
    if(!isalpha(a[i]) && !isdigit(a[i]))
      b[i] = a[i];
    else
      b[i] = 's';
  }
  for(int j=0,i=l-1;j<l;j++){
    if(b[j]!='s'){
      printf("%c",b[j]);
    }
    else if(!isalpha(a[i]) && !isdigit(a[i])){
      i--;
      j--;
    }
    else{
      printf("%c",a[i]);
      i--;
    }
  }
  return 0;
}
