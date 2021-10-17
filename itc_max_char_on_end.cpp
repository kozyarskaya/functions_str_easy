#include "str_easy.h"

int itc_max_char_on_end(string str){
    int maxx = 0, kol = 0;
    string num = "";
    for (int i = 0; i < itc_len(str); i++){
        if (str[i] >= '0' && str[i] <= '9')
            kol += 1;
        if (kol > maxx)
            maxx = kol;
        if (str[i] < '0' || str[i] > '9')
            kol = 0;
        }

    return maxx;
}
