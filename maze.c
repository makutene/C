#include <stdio.h>


typedef char vect[5][5];
vect v={'#','#','#','#','#',
        '#',' ',' ',' ','#',
        '#',' ',' ',' ','#',
        '#',' ',' ',' ','#',
        '#','#','#','#','#'};

int main(){
  vect v;
  for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){
      printf("%c",v[i][j]);
    }
  printf("\n");
  }
}
