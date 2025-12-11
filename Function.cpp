#include<iostream>
#include<cmath>
using namespace std;

// koi line of code hai use baar baar use mai lena hai to ham us time function ka use karte hai


//Simple trick :-
/*
int main(){
    int a,b,c;
    cout<<"Enter the number : ";
    cin>>a>>b>>c;

    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
    for(int i = 1;i<=b;i++){
        for(int j = 1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
    for(int i = 1;i<=c;i++){
        for(int j = 1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}
*
**
***
*
**
***
****
*
**
***
****
*****

*/


/*
void greeting(){  // jab ham koi function banate hai to ab jis jagah void hai us jagah ham return type likhate hai. yaha void ka matlb hai null kuch nhi.
    cout<<"Good Morning "<<endl;
    cout<<"Have a nice day "<<endl;

}

int main(){
    greeting(); // Call the fuction
    greeting();
    
}
*/

// Syntax for function
// :- the need for a return type : Understanding with example
/*

<void/int/float> function_name(Argument like (int a, int b, int c)){
    //Function Body

}
*/
/*

void starTriangle(int n){
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter three number : ";
    cin>>a>>b>>c;
    starTriangle(a); // Call by value pass 3
    starTriangle(b);
    starTriangle(c);
}

*/


// Note :- Sabse pahale main fuction hi chalta hai 
// :- ye ek hi baar bana sakte hai main word reserv hai 

// void koi return nhi karta

/*
 int sum(int x,int y){
    return x+y;
 }
 int main(){
    cout<<sum(55,45);  // Yaha par sum(55,45) ek integer value hau kyoki hamne pahle ise define kar diya ahi 
    // jab is code ko run kiya to hame sum ki value 100 mili ko sum function ne hame return kar di
    
 }

 */

/*
 int max(int x,int y){
    int n;
    if(x>y) n=x;
    else n=y;
    return n;
 }
int main(){
    int x,y;
    cin>>x>>y;
    cout<<max(x,y);
}
*/

/*
 int mini(int x,int y){
    int n;
    if(x<y) n=x;
    else n=y;
    return n;
 }
int main(){
    int x,y;
    cin>>x>>y;
    cout<<mini(x,y);
}
*/

// Using the cmath we are use some mathemathics formula and tasks


// formul;a for squess root finding
/*
int sqare(double n){
    

    double guess = n / 2;
    for (int i = 0; i < 10; i++) {  
        guess = (guess +n / guess)/2;
    }
    return guess;
}


int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    cout<<"Square root = "<< sqare(n);
}
*/

// Combination & Permutation


/*
int fact(int x){
    int f = 1;
    for(int i = 2;i<=x;i++){
        f *= i;
    }
    return f;
}
int combination(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation (int n, int r){
    int npr = fact(n)/fact(n-r);
    return npr;

}
int main(){
    int n,r;
    cout<<"Enter the number n : ";
    cin>>n;
    cout<<"Enter the number r : ";
    cin>>r;
    int ncr = combination(n,r);
    int npr = permutation(n,r);
    cout<<"Combination is : " <<ncr<<endl<<"Permutation is : "<<npr;

}

*/

//b PascalTriangle



/*
int fact(int x){
    int f = 1;
    for(int i = 2;i<=x;i++){
        f *= i;
    }
    return f;
}
int combination(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;

}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    for(int i = 0;i<=n;i++){
        for(int j =0;j<=i;j++){
            cout<<combination(i,j)<<" ";// for iCj
        }
        cout<<endl;
    }
}
    
*/

