#include "mystrings.h"
#include <string.h>
int strlenght(const char *str) {
    return strl(str);
}
void strconcat(char *str1, const char *str2) {
    strcat(str1,str2);
}
int strcompare(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}