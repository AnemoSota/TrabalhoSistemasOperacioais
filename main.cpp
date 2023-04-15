#include<bits/stdc++.h>

using namespace std;

int main(void){

    string a;
    char c;
    int i;

    while(1){
        a = "";
        i = 0;
        while(c = getchar(), c != '\n'){
            a += c;
            i++;
        }
        
        char b[i];

        if(a[0] != '.'){
            a = "/bin/" + a;
        }

        i = 0;
        while(a[i] != 0){
            b[i] = a[i];
            i++;
        }

        b[i] = 0;

        system(b);
    }

    return 0;
}