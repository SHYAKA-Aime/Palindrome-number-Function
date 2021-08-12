#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int y=x,z=0;
    while(x!=0)
    {
        z=z*10+x%10;
        x=x/10;
        
    }
    if(y==z)
    return(true);
    return(false);
}

int main() {
    int n;
    cout<<"\nEnter number to check: ";
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome number";
    }
    else {
        cout << n<<" is NOT a palindrome number";
    }
    return 0;
}
