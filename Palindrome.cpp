#include<iostream>
using namespace std;

//Declare function and define it

int checkNumber(int n) {

    int r, rev = 0;

    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return rev;
}

int main() {

    int n, num;

    cout << "Enter a number:";
    cin>>n;

    num = checkNumber(n);
    if (num == n) {
        cout<<n<<" is palindrome number";
    } else {
        cout<<n<<" is not palindrome number";
    }

    return 0;
}
