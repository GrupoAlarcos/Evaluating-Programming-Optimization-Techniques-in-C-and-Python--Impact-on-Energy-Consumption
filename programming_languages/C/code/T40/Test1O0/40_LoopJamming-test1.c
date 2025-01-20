#include <stdio.h>
#define OPTIMIZE __attribute__((optimize("O0")))

const int reps = 100000000;
void initialize(int* array,int N,int val){
    for(int i=0;i<N;i++) array[i]=val;
}

int OPTIMIZE potencia(int val) {
   return val*val;
}

void OPTIMIZE test1(int N,int array[]) {
   for(int i=0; i<N;i++) 
      array[i]=potencia(array[i]);
}

void print_array(int array[], int N) {
    for(int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main(int argc, char **argv) {

   int z;
   int N=50;
   int array[N];
   initialize(array,N,5);

   printf("\"Loop Jamming\"");
   
   for (z=0; z<reps; z++){
      print_array(array, N);
      test1(N,array);
   }
   
}