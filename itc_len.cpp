#include "str_easy.h"

long long itc_len(string str){
    long long kol = 0, i = 0;
    while (str[i] != '\0'){
        kol++;
        i++;
    }
   return kol;
}
