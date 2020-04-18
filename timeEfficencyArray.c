#include <stdio.h>
#include <time.h>

int main(){

   int size=600;
   int array[size][size];
   int p;

   for(int i=0; i<size; i++){
       for(int j=0; j<size; j++){
           array[i][j]=0;
       }
   }
   clock_t start, end;
   int cpu_time_used;
   
   start = clock();

   for(int i=0; i<size; i++){
       for(int j=0; j<size; j++){
           p = array[i][j];
       }
   }
    end = clock();
   cpu_time_used = ((int) (end - start));
   printf("Time using subscript : %d\n",cpu_time_used);

   start = clock();

   for(int i=0; i<size; i++){
       for(int j=0; j<size; j++){
           p =*(array+i*size+j);
       }
   }
     end = clock();
   cpu_time_used = ((int) (end - start));
   printf("Time using pointers : %d\n",cpu_time_used);

   return 0;
}
