#include <stdio.h>
#include <string.h>
#include "processes.h"

struct Process processes[5];
int processescount = 0;

static unsigned long nextprocessid() {
    for (int i = 0; i < 5; i++) {
        if (processes[i].ID == 0) {
            return processes[i-1].ID + 1;
        }
    }
    return 0;
}

unsigned long createnewprocess(char name[]) {
    unsigned long new_id = nextprocessid();
    if(new_id == 0) {
        return 0;
    }
    for (int i = 0; i < 5; i++) {
        if (processes[i].ID == 0) {
            processes[i].ID = new_id;
            strncpy(processes[i].name, name, 30);
            processescount++;
            return new_id;
        }
    }
    return 0;
}

void stopprocess(unsigned long id) {
    int index = -1;
    for (int i = 0; i < processescount; i++) {
        if (processes[i].ID == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("No process with ID %lu exists.\n", id);
        return;
    }
    for (int i = index; i < processescount - 1; i++) {
        processes[i] = processes[i + 1];
    }
    processes[processescount - 1].ID = 0;
    processes[processescount - 1].name[0] = '\0';
    processescount--;
}

void printprocesses() {
    if(processescount == 0) {
        printf("There are no processes curently running. \n");
    } else {
        for(int i = 0; i < processescount; i++) {
            printf("ID: %lu Name: %s \n", processes[i].ID, processes[i].name);
        }
    }
}
