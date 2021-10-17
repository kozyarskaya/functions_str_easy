#include "str_easy.h"

string itc_cmd_str(string str1, string str2, int num){
    string new_str = "";
    for (int i = 0; i < num - 1; i++){
        new_str += str1[i];
    }
    new_str += str2;
    long long len = itc_len(str1);
    for (int j = num - 1 ; j < len; j++){
        new_str += str1[j];
    }
    return new_str;
}
