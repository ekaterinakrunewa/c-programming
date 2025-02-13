#include <stdio.h>
#include <stdlib.h>
#include "transformation.h"

transformatioin string_long (const char *str){
    char *endptr;
    transformation result={0,NULL};
    result.result=strtol(str, &endptr, 10);

    if (*endptr!='\0'){
        result.error="invalid input";
    }

    return result;
}
