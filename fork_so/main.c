#include <unistd.h>
#include <sys/types.h>
#include "libpoc.h"
#include <stdio.h>
#include <stdlib.h>

#define NUMBEROFTIME 100000000

int main(){
  fork();
  for(int i = 0; i < NUMBEROFTIME ; i++){
    libPocVar++;
  }
  if(libPocVar != NUMBEROFTIME){
    printf("dynamic library state is shared accross fork");
    exit(1);
  }
  return 0;
}
