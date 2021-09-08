#include <stdio.h>

struct a{
  int a;
};

void f(struct a * b){
  b->a++;
}

int main(){
  struct a b;
  b.a = 1;
  f(&b);
  if(b.a == 2){
    printf("structs can be passed by reference\n");
  }
  else{
    printf("structs can be passed by reference\n");
    
  }
}
