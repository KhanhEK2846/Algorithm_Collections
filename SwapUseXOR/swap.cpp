#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 15;
    cout<<"Value a: "<<a<<" \nValue b: "<<b<<"\n";
    a +=b;
    b = a-b;
    a -=b;
    cout<<"Value a: "<<a<<" \nValue b: "<<b<<"\n";
    return 0;
}
