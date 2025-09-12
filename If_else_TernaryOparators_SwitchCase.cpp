#include<iostream>
using namespace std;


/*
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a%2==0){
        cout<<a<<" is an even number."<<endl;
    }
    else{
        cout<<a<<" is an odd number."<<endl;
    }
}
*/



/* 
int main(){
    int x = 10 ,y = 20;
    if(x == y);
    cout << x << " " << y;

 }
 */

/*
 int main(){
    int x = 3,y=5;
    if(x == 3)
    cout<< x <<endl;
    
    else;
    cout<<y;
 } 
*/

// # Ternary Operator

/*
int main(){
     int x;
     cin>>x;

// Syntax of ternary oprators
// Condition ? true : false

x%2==0? cout<<"even" : cout<<"odd";
}
*/


/*
int main(){
    float x;
    cout<<"Enter the number : ";
    cin>>x;

    x >= 33 ? cout<<"The student pass" : cout<<"The Student fail";
}
*/

// :- Ternary oparators right tp left chalti hai 

/*
int main(){
    int x;
    x = 5>8 ? 10 : 1!=2 < 5 ? 20 : 30;
    cout<<"Value of x :"<<x;
}
*/


// -> Switch Statement

/*

 # Syntax 

Switch(interger expression){
    case constant1:
        do this;
    case constant2:
        do this;
    case constant3:
        do this;
    defalut:
        do this;
}
*/

/*
int main(){
    int x;
    cout<<"Enter the Week number:";
    cin>>x;
    switch(x){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid number";
    }
}
*/

int main(){
    int a,b;
    char x;
    cout<<"Enter first numberse :";
    cin>>a;
    cout<<"Enter the oprator :";
    cin>>x;
    cout<<"Enter second numbers : ";
    cin>>b;
   
    switch(x){
        case '+' :
            cout<<a+b;
            break;
        case '-' :
            cout<<a-b;
            break;
        case '*' :
            cout<<a*b;
            break;
        case '/' :
            cout<<a/b;
            break;
        case '%' :
            cout<<a%b;
            break;
        default:
            cout<<"Invalid input";
    }
}