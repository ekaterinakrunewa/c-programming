#ifndef PROCESSES.H
#define PROCESSES.H
typedef struct{
    unsigned long UNID;
    char PROCESSED_NAME[31];
}processes;

extern processes process[5];
extern int processescount;

#endif