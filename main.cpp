#include <iostream>

using namespace std;

void prime_between_two_numbers(int n,int m){


    if (n<2){
        if (m<2){
            cout << "no prime number in this range";
            return;
        }
        else {
            n=2;
        }
    }
    for (int i=n;i<=m;i++){
            bool isPrime=true;
        for (int j=2;j<=i/2;j++){
            if (i%j==0){
                isPrime=false;
                break;
            }
        }
        if (isPrime==true){
            cout << i << "  ";
        }
    }
}

int main()
{
    int n,m;
    cout << "Enter the first number" << endl;
    cin>> n;
    cout << "Enter the second number" << endl;
    cin>> m;
    prime_between_two_numbers(n,m);
    return 0;
}
