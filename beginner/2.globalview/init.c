#include <stdio.h>
int a[10]; 

int main(){

  for(int i=0;i<10;i++)
    a[i] = i+1; 

  for(int i=0;i<10;i++)
    printf("%d\n", a[i]);

  return 0;
}
