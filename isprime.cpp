#include <iostream>
using namespace std;

int main(){
    int n; 
    bool isprime = true;

    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0){
            isprime= false;
            break;
        }
    }

    if(isprime= false){
        cout<< "n is prime"<<endl;
    }else{
        cout<< "n is not prime"<< endl;
    }
    return 0;
}