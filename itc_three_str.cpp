#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3){
    string new_str = str1;
    int index = 0;
    long long len = 0;
    len = itc_len(str2);
    while (itc_find_str(new_str, str2) != -1){
        str1 = new_str;
        index = itc_find_str(str1, str2);
        new_str = "";
    for (int i = 0; i < index; i++){
        new_str += str1[i];
    }
    new_str += str3;
    for (int j = (index + len); str1[j] != '\0'; j++){
            new_str += str1[j];
    }
    }
    return new_str;
}
