#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

typedef struct{
    int roomnumber;
    Person occupants[50];
} SchoolRoom;

#endif