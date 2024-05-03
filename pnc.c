#include<stdio.h>
#include <time.h>
int main(){
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    FILE *fptr;
    fptr=fopen("number.txt","a+");
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            fprintf(fptr,"7505%d6%d553\n",i,j);

        }
    }
    fclose(fptr);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%d",cpu_time_used);
    return 0;
}