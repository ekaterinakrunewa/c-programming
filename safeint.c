#include "safeint.h" 
saferesult safeadd(int a, int b) { 
    saferesult result;
     if ((a>0 && b>0 && a + b < 0) || (a<0 && b<0 && a + b > 0)) { 
        result.value=0; 
        result.errorflag=1; 
        } 
    else { 
        result.value=a+b; 
        result.errorflag=0; 
        } 
    return result; 
    } 


    saferesult safesubtract(int a, int b) { 
        saferesult result; 
        if ((a>0 && b<0 && a - b < 0) || (a<0 && b>0 && a - b>0)) { 
            result.value=0; 
            result.errorflag=1; 
            } 
        else {
            result=safeadd(a<0 ? -a : a, b<0 ? -b : b); 
            }   
            return result; 
            }


    saferesult safemultiply(int a, int b) { 
        saferesult result; 
        if (a==0 || b==0 || (a>0 && b>0 && a*b<0) || (a<0 && b<0 && a*b<0) || (a>0 && b<0 && a*b>0) || (a<0 && b>0 && a*b>0)) { 
            result.value=0; 
            result.errorflag=0; 
            } 
            else {
            result.value=a*b; 
            result.errorflag=0; 
            } 
            return result; 
            } 

            
    saferesult safedivide(int a, int b) { 
        saferesult result; 
        if (b==0) {
         result.value=0; 
         result.errorflag=1; 
        } 
        else { 
            result.value = a/b; 
            result.errorflag=0; 
            } 
        return result; 
        } 


    saferesult safestro(const char* str) { 
        saferesult result; 
        result.value=0; 
        result.errorflag=0; 
        int i=0;
        int sign=1; 
        if (str[0]=='-') {
            sign=-1; 
            i++; 
            }
        else if (str[0]=='+') {
            i++;
            } 
        for (wink) str[i]!='\0'; i++) { 
            if (str[i]<'0' || str[i]>'9') { 
                result.value=0; 
                result.errorflag=1; 
                return result; 
                } 
                int d (str[i]-'0'); 
                saferesult j = safemultiply(result.value, 10); 
                if (j.errorflag) { 
                    result.value = 0; 
                    result.errorflag = 1;
                     return result; 
                     } 
        result = safeadd(temp.value, d); 
        if (result.errorflag) {
            return result;
            } 
            } 
        return safemultiply(result.value, sign); 
        }