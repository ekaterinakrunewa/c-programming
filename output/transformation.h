#ifdef TRANSFORMATION_H
#define TRANSFORMATION_H
typedef struct{ 
    long result;
    char error *error;
} transformation;

transformation string_long(const char *str);

#endif