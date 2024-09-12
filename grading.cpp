#include <iostream>
using namespace std;

// grading pattern if marks>=90 then A, if btw 80-90 Then B, else C
int main(){
    int marks;
    cout<<"enter marks: "<<endl;
    cin>>marks;

    if(marks>=90){
        cout<<"A";
    }else if (marks>=80 && marks<90){
        cout<<"B";
    }else{
        cout<<"C";
    }
}