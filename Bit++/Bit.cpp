#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){

	int n;
    	cin >> n;

    int x = 0;
    for(int i = 0; i < n; i++ ){
        string input;
        cin >> input;
        if(input[0] == '+')
            x++;
        if(input[0] == '-')
            x--;
        if(input[2] == '+')
            x++;
        if(input[2] == '-')
            x--;
    }
    cout << x << endl;
    return 0;
}
