#ifndef PROCESSES_H
#define PROCESSES_H

struct Process {
    unsigned long ID;
    char name[30];
};

extern struct Process processes[5];
extern int processescount;

unsigned long createnewprocess(char name[]);
void stopprocess(unsigned long id);
void printprocesses();

#endif