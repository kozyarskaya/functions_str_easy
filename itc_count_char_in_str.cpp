#include "str_easy.h"

int itc_count_char_in_str(char ch, string str){
    int kol = 0;
    long long len = itc_len(str);
    for (int i = 0; i < len; i++){
        if (str[i] == ch){
            kol++;
        }
    }
    return kol;
}
