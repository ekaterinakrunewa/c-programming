#include <string.h>
#include "processes.h"
#include <limits.h>

extern struct Process processes[5];
extern int processescount=0;
unsigned long nextptocessid(){
    if(processescount==0){
        return 1;
    }
    unsigned long pr=processes[processescount-1].id;
    if (pr==ULONG_MAX){
        return 0;
    }
        return pr+1;
}
unsigned long createnewprocess(char *name){
    if(processescount==5){
        return 0;
    } 
    struct Process current;
    current.id=nextprocessid();
    strcpy(current.name, name);
    processes[processescount]=current;
    processescount++;
    return current.id   
}
void stopprocess(unsigned long id){
    for(int i=0; i<processescount; i++){
        if(processes[i].id==id){
            for(int j=i+1; j<processcount;j++){
                processes[j-1].id=processes[j].id;
                strcpy(processes[j-1].name, processes[j].name);
            }
            processes[processcount-1].id=0;
            strcpy(processes[processcount-1].name, "");
            break;
        }
    }
}