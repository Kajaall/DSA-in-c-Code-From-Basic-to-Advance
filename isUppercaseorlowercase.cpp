#include <iostream>
using namespace std;

int main(){
    char n;
    cout<<"enter a character: "<<endl;
    cin>>n;
    if(n>='a' && n<='z'){
        cout<<"lower case\n";
    }else {
        cout<<"UPPER CASE";
    }

    return 0;
}
