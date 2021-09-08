#include "libpoc.h"

#define value 42

void setVar(){
  libPocVar = value;
}

void printLibPocVar(){
  printf("%d should be 1, otherwise there's a shadowing", libPocVar);
}
