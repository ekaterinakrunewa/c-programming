#ifndef PROCESSES_H
#define PROCESSES_H
struct Process{
    unsigned long id;
    char name[31];
};
extern struct Process processes[5];
extern int processcount;
unsigned long createnewprocess(char *name);
void stopprocess(unsigned long id);

#endif