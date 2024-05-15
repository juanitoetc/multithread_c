#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* simplefunc(void* arg){

    long data = *(long*) arg;

    long* result = malloc(sizeof(long));
    int i = 0;
    for(i=0; i< 1000000000; i++)
        data+=1;
    *result = data; 
    return (void*) result;
}


int main(void){
    // Example
    long data1 = 1;
    long data2 = 1;

    long* recievedata1 = NULL;
    long* recievedata2 = NULL;
    
    pthread_t thread_1;
    pthread_t thread_2;
    
    pthread_create(&thread_1, NULL, simplefunc, (void*) &data1);
    pthread_create(&thread_2, NULL, simplefunc, (void*) &data2);

    pthread_join(thread_1, (void**) &recievedata1);
    pthread_join(thread_2, (void**) &recievedata2);
    
    /*
    recievedata1 = simplefunc((void*) &data1);
    recievedata2 = simplefunc((void*) &data2);
    */

    printf("data thread_1 %ld\n", *recievedata1);
    printf("data thread_2 %ld\n", *recievedata2);
    
    free(recievedata1);
    free(recievedata2);

    return 0;
}
