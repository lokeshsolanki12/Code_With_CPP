#include<iostream>
using namespace std;

// Print this
/*
*****
*****
*****
*/


//Case1
/*
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i = 1;i<=n;i++){
        cout<<"*****"<<endl;
    }
}
*/

// Case2

/*
int main(){
    int n,m;
    cout<<"Enter the number row :";
    cin>>n;
    cout<<"Enter the number coloman :";
    cin>>m;
    for(int i = 1;i<=n;i++){
        for(int i = 1;i<=m;i++)cout<<"*";
        cout<<endl;
    }   
}
*/

//Solid Squere

/*
int main(){
    int n;
    cout<<"Enter the number row :";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++)cout<<"*";
        cout<<endl;
    }   
}

*****
*****
*****
*****
*****



// Print this 

/*
1234
1234
1234
1234
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
*/


/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
1111
2222
3333
4444
*/


/*
int main(){
    char n;
    cout<<"Enter the char :";
    cin>>n;
    for(char i = 'A';i<=n;i++){
        for(char j ='A';j<=n;j++) cout<<i;
        cout<<endl;
    }
}
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/

/*
int main(){
    char n;
    cout<<"Enter the char :";
    cin>>n;
    for(char i = 'A';i<=n;i++){
        for(char j ='A';j<=n;j++) cout<<j;
        cout<<endl;
    }
}
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/

/*
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++)cout<<char('A'+i);
        cout<<endl;
    }
}
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/

/*
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++)cout<<char('A'+j);
        cout<<endl;
    }
}
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/

// Tringle

/*
int main(){
    int n;
    cout<<"Enter the number row :";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++)cout<<"*";
        cout<<endl;
    }   
}
*
**
***
****
*****

*/

/*int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=i;j++) cout<<i;
        cout<<endl;
    }
}
1
22
333
4444
55555
*/

/*
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=i;j++) cout<<j;
        cout<<endl;
    }
}
1
12
123
1234
12345
*/

/*
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i = 1;i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<char('A'+i-1);
        }
        cout<<endl;
    }
}
A
BB
CCC
DDDD
EEEEE
*/

/*

// Input intiger 

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i = 1;i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<char('A'+j-1);
        }
        cout<<endl;
    }
}
A
AB
ABC
ABCD
ABCDE
*/

// Input char

/*
int main(){
    char n;
    cout<<"Enter the char :";
    cin>>n;
    for(char i = 'A';i<=n;i++){
        for(char j ='A';j<=i;j++) cout<<i;
        cout<<endl;
    }
}
A
BB
CCC
DDDD
EEEEE
*/

/*

int main(){
    char n;
    cout<<"Enter the char : ";
    cin>>n;
    for(char i = 'A';i<=n;i++){
        for(char j ='A';j<=i;j++) cout<<j;
        cout<<endl;
    }
}
A
AB
ABC
ABCD
ABCDE
*/


/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1 ; j<=n-i; j++) cout<<" ";
        for(int k = i; k>=1;k--) cout<<"*";
        cout<<endl;
    }
}
    *
   **
  ***
 ****
*****

*/

// Given integer
/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++ ) cout<< " ";
        for(int k = i; k>=0; k--) cout<<char('A'+k);
        cout<<endl;
    }
     
}
    A
   BA
  CBA
 DCBA
EDCBA
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++ ) cout<< " ";
        for(int k = i; k>=0; k--) cout<<char('A'+i);
        cout<<endl;
    }
     
}
    A
   BB
  CCC
 DDDD
EEEEE
*/


/*
int main(){
    int n ;
    cout<<"Enter the number :";
    cin>>n;
    for(int  i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++) cout<<" ";
        for(int k = i;k>=1;k--) cout<<i;
        cout<<endl; 
    }
}
    1
   22
  333
 4444
55555
*/

/*
int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    for (int i = 1;i<= n;i++){
        for(int j = 1 ;j<= n-i;j++) cout<<" ";
        for(int k = i;k>=1;k--) cout<<k;
        cout<<endl;
    }
}
    1
   21
  321
 4321
54321
*/

/*
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++)cout<<" ";
        for(int k = 1;k<=i;k++) cout<<k;
        cout<<endl;
    }
}
    1
   12
  123
 1234
12345
*/

// Given character

/*
int main(){
    char n;
    cout<<"Enter the char : ";
    cin>>n;
    for(char i = 'A'; i<=n; i++){
        for(char j = 'A'; j <= n - i; j++) cout<<" ";
        for(char k = 'A'; k <= i;k++) cout<<i;
        cout<<endl;
    }

}
A
BB
CCC
DDDD
EEEEE
*/

/*
int main(){
    char n;
    cout<<"Enter the char : ";
    cin>>n;
    for(char i = 'A'; i<=n; i++){
        for(char j = 'A'; j <= n - i; j++) cout<<" ";
        for(char k = 'A'; k <= i;k++) cout<<k;
        cout<<endl;
    }

}
A
AB
ABC
ABCD
ABCDE
*/


//print this one
/*

*****
****
***
**
*

*/



/*
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i = n;i>=1;i--){
        for(int j = i;j>=1;j--) cout<<"*";
        cout<<endl;
    }
}
*/

/*
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = n;i>=1;i--){
        for(int j = i;j>=1;j--) cout<<i;
        cout<<endl;
    }
}
55555
4444
333
22
1
*/
/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = n;i>=1;i--){
        for(int j = i;j>= 1;j--) cout<<j;
        cout<<endl;
    }
}
54321
4321
321
21
1
*/

/*
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = i;j<=n;j++) cout<<i;
        cout<<endl;
    }
}
11111
2222
333
44
5
*/
/*
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = i;j<=n;j++) cout<<j;
        cout<<endl;
    }
}
12345
2345
345
45
5
*/

/*
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i = 0;i<=n-1;i++){
        for(int j = i;j<=n-1;j++) cout<<char('A'+ i);
        cout<<endl;
    }
}
AAAAA
BBBB
CCC
DD
E
*/
/*
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i = 0;i<=n-1;i++){
        for(int j = i;j<=n-1;j++) cout<<char('A'+ j);
        cout<<endl;
    }
}
ABCDE
BCDE
CDE
DE
E
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = n-1;i>=0;i--){
        for(int j = i ; j>=0;j--) cout<<char('A'+i);
        cout<<endl;
    }
}
EEEEE
DDDD
CCC
BB
A
*/
/*

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = n-1;i>=0;i--){
        for(int j = i ; j>=0;j--) cout<<char('A'+j);
        cout<<endl;
    }
}
EDCBA
DCBA
CBA
BA
A
*/

/*
int main(){
    char n;
    cout<<"Enter the char :" ;
    cin>>n;
    for(char i = 'A';i<=n;i++){
        for(char j = i;j<=n;j++) cout<<i;
        cout<<endl;
    }
}
AAAAA
BBBB
CCC
DD
E
*/

/*
int main(){
    char n;
    cout<<"Enter the char :" ;
    cin>>n;
    for(char i = 'A';i<=n;i++){
        for(char j = i;j<=n;j++) cout<<j;
        cout<<endl;
    }
}
ABCDE
BCDE
CDE
DE
E
*/


/*
int main(){
    char n;
    cout<<"Enter the char : ";
    cin>>n;
    for(char i = n; i>= 'A';i--){
        for(char j = i;j>='A';j--) cout<<i;
        cout<<endl;
    }
}
EEEEE
DDDD
CCC
BB
A
*/

/*
int main(){
    char n;
    cout<<"Enter the char : ";
    cin>>n;
    for(char i = n; i>= 'A';i--){
        for(char j = i;j>='A';j--) cout<<j;
        cout<<endl;
    }
}
EDCBA
DCBA
CBA
BA
A
*/

/*
int main(){
    int n;
    cout<< "Enter the number : ";
    cin>> n;
    for(int i = 0;i<=n-1;i++){
        for(int j = 0; j<=n-i-1;j++ ) cout<<char('A'+j);
        cout<<endl;
    }
}
ABCDE
ABCD
ABC
AB
A
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i-1;j++) cout<<" ";
        for(int k = n;k>=i;k--) cout<<"*";
        cout<<endl;
    }
}
*****
 ****
  ***
   **
    *
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i-1;j++) cout<<" ";
        for(int k = n;k>=i;k--) cout<<i;
        cout<<endl;
    }
}
11111
 2222
  333
   44
    5
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i-1;j++) cout<<" ";
        for(int k = n;k>=i;k--) cout<<k;
        cout<<endl;
    }
}
54321
 5432
  543
   54
    5
*/
/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i-1;j++) cout<<" ";
        for(int k = 1;k<=n-i+1;k++) cout<<k;
        cout<<endl;
    }
}
12345
 1234
  123
   12
    1
*/

/*
int main(){
    int n;
    cout<<"Entert he number : ";
    cin>>n;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=i-1;j++) cout<<" ";
        for(int k = n-1;k>=i;k--) cout<<char('A'+i);
        cout<<endl;
    }
}
AAAAA
 BBBB
  CCC
   DD
    E
*/
/*
int main(){
    int n;
    cout<<"Entert he number : ";
    cin>>n;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=i-1;j++) cout<<" ";
        for(int k = n-1;k>=i;k--) cout<<char('A'+k);
        cout<<endl;
    }
}
EDCBA
 EDCB
  EDC
   ED
    E
*/

/*
int main(){
    int n ;
    cout<<"Enter the number  : ";
    cin>>n;
    for(int i = 0;i<=n;i++){
        for(int j = 0; j<=i-1;j++) cout<<" ";
        for(int k = 0;k<=n-i-1;k++) cout<<char('A'+k);
        cout<<endl;
    }
}
ABCDE
 ABCD
  ABC
   AB
    A
*/

//Input char


/*
int main(){
    char n;
    cout<<"Enter the char : ";
    cin>>n ;
    for(char i = 'A';i<=n;i++){
        for(char j = 'A';j<i;j++) cout<<" ";
        for(char k = 'A';k<=n-(i-'A');k++) cout<<i;
        cout<<endl;
    }
}
AAAAA
 BBBB
  CCC
   DD
    E
*/
/*
int main(){
    char n;
    cout<<"Enter the char : ";
    cin>>n ;
    for(char i = 'A';i<=n;i++){
        for(char j = 'A';j<i;j++) cout<<" ";
        for(char k = 'A';k<=n-(i-'A');k++) cout<<k;
        cout<<endl;
    }
}
ABCDE
 ABCD
  ABC
   AB
    A
*/

/*
int main(){
    char n;
    cout<<"Enter the char : ";
    cin>>n ;
    for(char i = 'A';i<=n;i++){
        for(char j = 'A';j<i;j++) cout<<" ";
        for(char k = n-(i-'A');k>='A';k--) cout<<k;
        cout<<endl;
    }
}
EDCBA
 DCBA
  CBA
   BA
    A
*/

 