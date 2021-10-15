#include "str_easy.h"

void itc_first_end_three(string str){
    long long len = itc_len(str);
    if (len > 5){
        cout << str[0] << str[1] << str[2];
        cout << str[len - 3] << str[len - 2] << str[len - 1];

    }
    else{
        for (long long i = 0; i < len; i++){
            cout << str[0];
        }
    }
}
