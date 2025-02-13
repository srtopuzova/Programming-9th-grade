#include <stdio.h>
#include "processes.h"

int main(void) {
    while(1) {
        printf("Enter 0 to create a new process, 1 to print all currently running processes, 2 to stop a process and 3 to exit the program: \n");
        int ans;
        char name[30];
        unsigned long id;
        scanf("%d", &ans);
        switch(ans) {
            case 0:
                printf("Enter the name of the process: \n");
                scanf("%29s", name);
                id = createnewprocess(name);
                if(id == 0) {
                    printf("The limit for the number of processes has already been reached. Stop a process first to create a new one. \n");
                    break;
                } else {
                    printf("A process with the id %lu has been created. \n", id);
                }
                break;
            case 1:
                printprocesses();
                break;
            case 2:
                printf("Enter the id of the process you want to stop: \n");
                scanf("%lu", &id);
                stopprocess(id);
                printf("The process with id %lu has been stopped. \n", id);
                break;
            case 3:
                return 0;
            default:
                printf("There is no such option. \n");
        }
    }
}