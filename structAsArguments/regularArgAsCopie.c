#include <stdio.h>

struct a{
  int a;
};

void f(struct a b){
  b.a++;
}

int main(){
  struct a b;
  b.a = 1;
  f(b);
  if(b.a == 2){
    printf("structs are NOT passed by copie\n");
  }
  else{
    printf("structs are passed by copie\n");
    
  }
}
