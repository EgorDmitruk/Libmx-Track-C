#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int i = 0;
    int j = 0;
    
    while(s1[i] != '\0') {
        i++;
    }

    while(s2[j] != '\0') {
        s1[i +j] = s2[j];
        j++;
    }
    
    s1[i + j] = '\0';

    return s1;
}    
