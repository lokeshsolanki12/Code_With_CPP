#include<iostream>
using namespace std;

// -> Taking input


/*
int getdata(){
    int a;
    cout<<"Enter a number :";
    cin>>a;
    cout<<a*a;
}
int main(){
    getdata();
    
}
*/



/*
int getdata(){
    int a;
    cout<<"Enter a number :";
    cin>>a;
    return a*a;
}
int main(){
    int result = getdata();
    cout<<"The sqere :"<<result;
}    
*/



/*
int getdata(int a){
    return a*a;
}
int main(){
    int a;
    cout<<"Enter a number :";
    cin>>a;
    int result = getdata(a);
    cout<<"The Square of "<<a<<" is :"<<result;
}*/





// -> Typecasting


/*
int main(){
    char ch ;
    char ch1 ;
    cout<<"Enter a character :";
    cin>>ch;
    cout<<"Enter the last character :";
    cin>>ch1;
    for(int i = ch; i <=ch1 ; i++){
        cout<<(char)i << " "<<int(i)<<endl;
    }
}
*/
/*
int main(){
    float x = 45.46;
    cout<<int(x)<<endl;
    cout<<float(x)<<endl;
}
*/


/*
int main(){
    int x;
    cout<<"Enter a number :";
    cin>>x;
    float y = float(x);
    cout<<y/2<<endl;
}
*/

// -> fractional number

/*
int main(){
    float x;
    cout<<"Enter a number :";
    cin>>x;
    int y = int(x);
    if(y<0) y = y-1;
    float z = (float)y;
    x= x-z;
    cout<<x<<endl;

}
*/


// -> Hierarchy of operators

// int a = 2*3/4+4/4+8-2+5/8
// ans = 8

/*
int main(){
    int p = 5, q = 10 , r =15;
    p += q -= p ;
    cout<<p<<" "<<q;
}
*/


