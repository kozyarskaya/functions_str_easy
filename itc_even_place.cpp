#include "str_easy.h"

string itc_even_place(string str){
    long long i = 1;
    string new_str = "";
   if (itc_len(str) < 2)
        return "-1";
    while(str[i] != '\0'){
        new_str += str[i];
        i += 2;
    }
    return new_str;
}
