#include "str_easy.h"

bool itc_equal_reverse(string str){
    string new_str = itc_reverse_str(str);
    if (new_str == str){
        return true;
    }
    if (new_str != str){
        return false;
    }
}
