#include <stdio.h>
int main(void) {
  int n,x;
  scanf("%d",&n);
  for(int i=n,y=1;i>0;i--,y++){
    x=0;
    for(int j=0,l=y;j<i;j++,x--){
      printf("%d\t",l);
      if(x==0){
        x=n;
      }
      l=l+x;
    }
    printf("\n");
  }
  return 0;
}
