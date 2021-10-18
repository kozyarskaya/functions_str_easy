#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string new_str = "";
    long long len = itc_len(str1);
    for (int i = 0; i < num - 1; i++){
        new_str += str1[i];
    }

    new_str += str2;
    for (int j = num - 1 ; j < len; j++){
        new_str += str1[j];
    }
    return itc_slice_str(new_str, 0, len - 1);
}
