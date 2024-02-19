#include <iostream>
using namespace std;
int main(){
    int first;
    int second;
    int largest_common_divisor;
    int c;
    cout << "Enter first number:" << endl;
    cin >> first;
    cout << "Enter second number" << endl;
    cin >> second;
    if (first > second){
        largest_common_divisor = first;
    }
    else{
        largest_common_divisor = second;
    }
    for (int i = 1; i<=largest_common_divisor; i++){
        if (first%i == 0 and second%i==0){
           c = i;
        }

    }
    cout << "The greatest common divisor equals: " << c << endl;

return 0;

    }
