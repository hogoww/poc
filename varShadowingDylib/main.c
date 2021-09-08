#include <unistd.h>
#include <sys/types.h>
#include "libpoc.h"
#include <stdio.h>
#include <stdlib.h>

#define NUMBEROFTIME 100000000

int main(){
  setVar();
  
  printf("libPocVar == %d therefore there ",libPocVar);
  if(libPocVar == value)
    printf("is NO shadowing ");
   else
    printf("IS a shadowing ");
  printf("(by the main on the library)!\n");

  printf("##############################\n");

  printf("Setting the value of libPocVar to %d in lib\n",1);
  libPocVar = 1;
  printf("The value of libPocVar is set to %d by main.\n",libPocVar);
  printLibPocVar();
  return 0;
}
