#include<iostream>
using namespace std;


//        *Break*

// -> Check the number are composite or Prime

/*
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    bool check = true;
    for(int i = 2; i < x-1;i++){
        if(x%i == 0){
            check = false;
            break;
        }

    }
    if(x == 1) cout<<"1 is neither prime nor composite ";
    else if(check == false) cout<<x <<" The number is Composite";
    else cout<<x << " The number is prime ";
}

 */

 //        *Continue*

/*
 int main(){
    for(int i = 1;i<=100;i++){
        if(i%2==0) continue ;
        cout<<i<<" ";
    }
 }
*/

// -> infinit Loop

/*
int main(){
    for(int i=910;i>=0;i++){
        cout<<"010010101101";
    }
}
    */

// -> While loop 

/*
int main(){
    int x= 4,y=0,z;
    while(x>=0){
        x--;
        y++;
        if(x==y) continue;
        else cout<<x << " " << y<<"\n";
    }
}
*/

/*
int main(){
    int x=4,y=0,z;
    while(x>=0){
        if(x==y) break;
        else cout<<x << " " << y << endl;
        x--;
        y++;
    }
}
    */


/*
int main(){
    int t=10;
    while(t/=2) cout<<"hello"<<endl;
}
*/

// Count digits of a given number

/*
int main(){
    int x ;
    cout<<"Enter a number: ";
    cin>>x;
    int y = 0;
    int z = y;
    while(x>0){
        x= x/10;
        y++;
    }
    if(z == 0) cout<<1;
    else cout<<y;  
}

*/

// Print sum of digits of a given number

/*

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    int last;
    while(n>0){
        last = n%10;
        sum = sum + last;
        n = n/10;
    }
    cout<<sum;
}
*/

/* CASE 1
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int last = 0;
    while(n>0){
        last = n%10;
        n = n/10;
        cout<<last;
    }
}
*/

/* CASE 2
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int last = 0;
    int r = 0;
    while(n>0){
        r = r*10;
        last = n%10;
        r = r + last;
        n = n/10;
    }
    cout<<r;
}
*/

// Sum of sires

/*
int main(){
    int n;
    cout<<"enter a number : ";
    cin >>n;
    int sum = 0;
    for (int i = 0;i<=n;i++){
        sum = sum+i;
    }
    cout<<sum;

}
    */

/*
    int main(){
    int n;
    cout<<"enter a number : ";
    cin >>n;
    int sum = 0;
    for (int i = 0;i<=n;i++){
       if(i%2==0) sum = sum+i;
       else sum = sum-i;
    }
    cout<<sum;

}
*/

/*
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int fact = 1;
    for(int i = 1; i <= n;i++){
       fact = fact*i;

    }
    cout<<fact;
}

*/

// Print Fibonacci number 

/*
 int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = 1;
    int b = 1;
    int sum = 0;
    for (int i = 1;i<=n-2;i++ ){
        sum = a+b;
        a = b;
        b = sum;
    }
    cout<<sum;
 }
*/

// Power of the number

int main(){
    int a,b;
    cout<<"Enter the base number: ";
    cin>>a;
    cout<<"Enter the power number : ";
    cin>>b;
    bool flag = true;
    if(b<0){
        flag = false;
        b=-b;
    }
    float power = 1;
    for(int i = 1;i<=b;i++ ){
        power = power*a;
    }
    if(flag == false) power = 1/power;
    cout<<power;
}