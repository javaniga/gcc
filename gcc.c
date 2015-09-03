#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <wait.h>
#include <sysexits.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  srand(time(NULL));
  if(!(rand()%2)){
	 printf("\033[31mFuck you.\033[0m\n");
  }
  else{
	 argv[0]=(char *)"gcc";
	 execvp(argv[0], argv);
  }
  
  return 1;
}
