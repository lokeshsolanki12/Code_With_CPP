#include<iostream>
using namespace std;
// Repetetion
//Jab hame pattern dikhe to ham loop ka use karte hai 


/*
int main(){
    for(int i = 0 ; i <= 10 ; i++){
        cout<<"Hello lokesh solanki"<<endl;
    }
}
*/

// -> Loop are work in this steps 
// 1. Initialization , 2. Condition , 3. Increment/Decrement


/*
int main(){
    for(int i = 1; i <= 100;i++){
        cout<<i<<endl;
    }
}
*/

//  Even Number 

/*
int main(){
    for(int i = 1;i<=100;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}
*/

// For any number lable

/*
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    for(int i = a ; i <= a*10; i= i + a){
        if(i%a==0)cout<<i<<endl;
    }
}
*/

// Find the AP

//CASE 1 :- With formula 
/*
int main(){
    int a,d,n;
    cout<<"Enter the first number of AP: ";
    cin>>a;
    cout<<"Enter the Distance of AP: ";
    cin>>d;
    cout<<"Enter the lenght of numbers: ";
    cin>>n;

    for(int i = a;i<= a+(n-1)*d;i = i+d) cout<<i<<endl;

}
*/


//CASE 2 :- Without Formula
/*
int main(){
    int a,d,n;
    cout<<"Enter the first number of AP: ";
    cin>>a;
    cout<<"Enter the Distance of AP: ";
    cin>>d;
    cout<<"Enter the lenght of numbers: ";
    cin>>n;

    int y = a-1;
    for(int i = a; i <= n+y; i++) {
        cout<<a<<endl;
        a = a+d;
    }

}
*/


// GP find

/*
int main(){
    int a,d,n;
    cout<<"Enter the first number of GP: ";
    cin>>a;
    cout<<"Enter the Distance of GP: ";
    cin>>d;
    cout<<"Enter the lenght of numbers: ";
    cin>>n;

    int y = a-1;
    for(int i = a; i <= n+y; i++) {
        cout<<a<<endl;
        a = a*d;
    }
}
*/


// Reverse AP

/*
int main(){
    int a,d,n;
    cout<<"Enter the first number of AP: ";
    cin>>a;
    cout<<"Enter the Distance of AP: ";
    cin>>d;
    cout<<"Enter the lenght of numbers: ";
    cin>>n;
    d = -d;
   for(int i = a; i>=a+(n-1)*d ; i = i + d){
    cout<<i<<endl;
    
   }

} 
 */

 