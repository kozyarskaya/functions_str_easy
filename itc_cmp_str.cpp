#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string new_str = "";
    long long len1 = itc_len(str1);
    long long len2 = itc_len(str2);
    
    for (int i = 0; i < num; i++){
        new_str += str1[i];
    }

    new_str += itc_slice_str(str2, 0, (len1 - num));
    for (int j = num ; j < len1; j++){
        new_str += str1[j];
        }
        
    return itc_slice_str(new_str, 0, len1 - 1);
    return "-1";
}
