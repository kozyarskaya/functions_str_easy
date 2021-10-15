#include "str_easy.h"

double itc_percent_lower_uppercase(string str){
    double percent = 0;
    double kol_upper = 0, kol_lower = 0;
    string is_upper = "QWERTYUIOPLKJHGFDSAZXCVBNM";
    string is_lower = "qwertyuiopasdfghjklzxcvbnm";
    long long i = 0;
    while(str[i] != '\0'){
        for (int u = 0; u < 69; u++){
            if ((str[i]) == is_upper[u]){
                kol_upper += 1;
            }
            if ((str[i]) == is_lower[u]){
                kol_lower += 1;
            }
        }
        i++;
    }
    if (kol_lower == 0){
        kol_lower = 1.0;
    }
    return kol_upper / kol_lower;
}
