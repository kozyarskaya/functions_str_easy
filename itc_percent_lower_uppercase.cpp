#include "str_easy.h"

double itc_percent_lower_uppercase(string str){
    double percent = 0;
    double kol_upper = 0, kol_lower = 0;
    long long i = 0;
    while(str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <='Z'){
            kol_upper += 1;
        }
        else if (str[i] >= 'a' && str[i] <='z'){
            kol_lower += 1;
        }
        i++;
    }
    if (kol_lower == 0 || kol_upper == 0){
        percent = -1.0;
    }
    else
        percent = kol_lower / kol_upper;
    return percent;
    return -1;
}
