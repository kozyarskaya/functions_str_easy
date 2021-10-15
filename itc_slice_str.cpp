#include "str_easy.h"

string itc_slice_str(string str, int start, int finish){
    long long len = itc_len(str);
    string new_str = "";
    if (finish >= len){
        for (long long i = start - 1; i < len; i++){
            new_str += str[i];
        }
    }
    else{
        for (long long i = start - 1; i < finish; i++){
            new_str += str[i];
        }
    }
    return new_str;
}
