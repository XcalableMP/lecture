#include <stdio.h>
#include <xmp.h>
#pragma xmp nodes p[2]
#pragma xmp template t[10]
#pragma xmp distribute t[block] onto p
int a[10]; 

int main(){
  
  for(int i=0;i<10;i++)
    a[i] = i+1; 

  for(int i=0;i<10;i++)
    printf("[%d] %d\n", xmpc_node_num(), a[i]);

  return 0;
}
