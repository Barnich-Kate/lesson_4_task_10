#include <iostream>

using namespace std;

int fact (int n) {
    if (n < 1) {
        return 0;
    } else {
        return fact (n - 1) * n;
    }
}

int main()
{
    int n = 8; 
    for (int i = 0; i < n; ++i) {
        cout<< fact(i) << endl;   
    }
    

    return 0;
}
