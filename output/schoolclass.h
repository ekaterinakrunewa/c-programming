
#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

typedef struct{
    Person students[30];
    char classletter;
    int classnumber;
    Person classteacher;
} SchoolClass;

#endif