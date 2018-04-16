#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
  FILE *f;

  srand(time(NULL));

  while(1){
    f = fopen("measure.txt", "w");
    int number = rand() % 100;
    printf("%d\n", number);
    fprintf(f, "%d\n", number);
    fclose(f);
    sleep(1);
  }
  return 0;
}
