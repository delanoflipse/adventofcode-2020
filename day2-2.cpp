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

        int len = str.length();

        strcpy(str_arr, str.c_str());
        sscanf(str_arr, "%d-%d %c: %s", &min, &max, &c, pwd);

        int count = 0;
        if (pwd[min - 1] == c) count++;
        if (pwd[max - 1] == c) count++;

        int isValid = count == 1;
        cout << min << '-' << max << " of " << c << " pwd:" << pwd << " count: " << count << " valid: " << isValid << '\n';
        if (isValid) {
            valid++;
        }
    }

    cout << "valid: " << valid << "\n";
}
