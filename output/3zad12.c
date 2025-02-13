#include <stdio.h>
#include "transformation.h"

int main(void){
    transformation t1=string_long("-123");
    if(t1.error){
        printf("error %s",t1.error);
    }
    else{
        printf("resul %ld",t1.result);
    }
    printf("\n");

    transformation t2=string_long("12ab23");
    if(t2.error){
        printf("eror %s",t2.error);
    }
    else{
        printf("result %ld",t2.result);
    }

}