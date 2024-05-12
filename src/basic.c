#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int g = 0;

void *myThreadFun(void *vargp){
    int *myid = (int *)vargp;
    static int s = 0;

    ++s; // Increment the static variable to observe its behavior in different threads
    ++g; // Increment the global variable to observe its behavior in different threads

    printf("Thread Id: %d, Static: %d, Global: %d\n", *myid, s, g);
    return NULL;
}

int main(){
    int i;
    pthread_t tid;

    for(i=0; i<3; i++){
        pthread_create(&tid, NULL, myThreadFun, (void*)&tid);
    }
    pthread_exit(NULL);
    return 0;
}
