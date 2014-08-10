#include <unistd.h>
#include <stdio.h>

int main(){
    pid_t fpid;
    int cout = 0;
    fpid = fork();
    if(fpid <0){
        printf("error in fork!");
    } else if (fpid == 0){
        int a = 4;

        printf("I am the child process, my processi id is %d\n",getpid());
        printf("I am father's son\n");
        printf("the locate addrees is %p\n", &a);
        cout++;
        
    } else {
        printf("I am the parent process, my process id is %d\n",getpid());
        printf("I am child's father\n");
        cout++;
        printf("the globale address is %p\n", &cout);
    }

    printf("count is: %d\n",cout);
    return 0;
}
