#include<iostream>
using namespace std;


/*
int main(){
    int x=3;
    cout<<&x;
}

// Output  :- 0x61ff0c
// Output has define by this one symbol *___&___*   
*/

/*
Formal parameters and actual parameters

:- jab ham main function se function call lagate time parameters dete hai unhe actual perameters kahate hai 
:- or jo function ke sath perameter inhe receive karte hai vo formal perameters hote hai

*/

// Scope of veriable :- jo hamne veriable batnae hai kisi function mai vo vahi tak chal sakte hai uske bahar nhi 

/*
void fun(int x = 7, int y = 8){
 cout<<x<<" "<< y;
}
int main(){
    fun(5,6);
}

*/

// HCF 


/*
int hcf(int a,int b){
    int val = 1;
    for(int i = 1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            val = i;
        }
    }
    return val;
}
int main(){
    int a,b;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<hcf(a,b);
}
    
*/

int hcf(int a,int b){
    int val = 1;
    for(int i = min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            val = i;
            break;
        }
    }
    return val;
}
int main(){
    int a,b;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<hcf(a,b);
}