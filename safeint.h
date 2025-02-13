#ifndef SAFEINT_H
#define SAFEINT_H
typedef struct{
    int value;
    int errorflag;
} saferesult;

saferesult safeadd(int a,int b);
saferesult safesubtract(int a,int b);
saferesult safemultiply(int a,int b);
saferesult safedivide(int a,int b);
saferesult safestro(const char *str);

#endif