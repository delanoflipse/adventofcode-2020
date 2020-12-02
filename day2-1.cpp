#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

using namespace std;

int main(void) {
    string str;
    int valid = 0;

    char str_arr [1000];
    char pwd [1000];
    while (getline(cin, str)) {
        int min;
        int max;
        char c;

        strcpy(str_arr, str.c_str());
        sscanf(str_arr, "%d-%d %c: %s", &min, &max, &c, pwd);

        int count = 0;
        for (int i = 0 ;; i++) {
            if (pwd[i] == c) {
                count++;
            }
            if (pwd[i] == '\0') {
                break;
            }
        }

        int isValid = count >= min && count <= max;
        cout << min << '-' << max << " of " << c << " pwd:" << pwd << " count: " << count << " valid: " << isValid << '\n';
        if (isValid) {
            valid++;
        }
    }

    cout << "valid: " << valid << "\n";
}
