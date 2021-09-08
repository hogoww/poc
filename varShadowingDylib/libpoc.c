#include "libpoc.h"

void setVar(){
  printf("Setting the value of libPocVar to %d in lib.\n",value);
  libPocVar = value;
  printf("The value of libPocVar is set to %d by lib.\n",libPocVar);
}

void printLibPocVar(){
  printf("libPocVar == %d therefore there ",libPocVar);
  if(libPocVar == 1)
    printf("is NO shadowing ");
   else
    printf("IS a shadowing ");
  printf("by the library on the main.\n");
}

void printLibPocVarValue(){
  printf("   libPocVar = %d\n", libPocVar);
}
