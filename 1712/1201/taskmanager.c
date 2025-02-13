#include <stdio.h>
#include "processes.h"
#include<limits.h>
struct Process processes;
int processescount=0;
int main(){
    while(1){
        printf("1- create new process by name\n");
        printf("2- create new process by id\n");
        printf("3- output all processes\n");
        printf("4- for exit\n");
        printf("Enter choice: \n");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1:
                char name[31];
                printf("Enter name of process: \n");
                scanf("%s", &name);
                craetenewprocess(name);
                break;
            case 2:
                unsigned long id;
                printf("Enter id of process: \n");
                scanf("%lu", &id);
                stopprocess(id);
                break;
            case 3:
                for(int d=0; d<processescount; d++){
                    printf("id: %lu, name: %s\n", processes[d].id, processes[id]);
                }
                break;
            case 4:
                return 0;
        }
    }
    return 0;
}