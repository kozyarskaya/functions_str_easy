#include "str_easy.h"

string itc_even_place(string str){
    long long i = 0;
    string new_str = "";
    while(str[i] != '\0'){
        new_str += str[i];
        i += 2;
    }
    return new_str;
}
