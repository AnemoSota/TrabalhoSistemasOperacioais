#include<bits/stdc++.h>

using namespace std;

int main(void){

    string a;
    int i;

    while(1){
        i = 0;
        cin >> a;
        char b[a.length()];

        if(a[0] != '.'){
            a = "/bin/" + a;
        }

        while(a[i] != 0){
            b[i] = a[i];
            i++;
        }

        b[i] = 0;

        system(b);
    }

    return 0;
}