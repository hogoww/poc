#include <unistd.h>
#include <sys/types.h>
#include "libpoc.h"
#include <stdio.h>
#include <stdlib.h>

#define NUMBEROFTIME 100000000

int main(){
  setVar();
  libPocVar = 1;
  printLibPocVar();
  return 0;
}
