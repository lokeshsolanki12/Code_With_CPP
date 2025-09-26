#include<iostream>
using namespace std;

// Print this one
/*  
    *****
   ***** 
  *****  
 *****   
*****    

*/ 
/*
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++) cout<<" ";
        for(int k = 1;k<=n;k++) cout<<"*";
        cout<<endl;
    }
}
    *****
   *****
  *****
 *****
*****
*/

//Print this 
/*
    *
   ***
  *****
 *******
*********    
*/

// Odd star tringle

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=2*i-1;j++){
             cout<<"*";
        }
        cout<<endl;
    }
}
*
***
*****
*******
*********
*/

/*

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++) cout<<" ";
        for(int k = 1;k<=2*i-1;k++)cout<<"*";
        cout<<endl;
    }
}
    *
   ***
  *****
 *******
*********
*/

//print this 
/*
    1
   121
  12321
 1234321
123454321    
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++) cout<<" ";
        for(int k = 1;k<=2*i-1;k++)cout<<i;
        cout<<endl;
    }
}
    1
   222
  33333
 4444444
555555555
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++) cout<<" ";
        for(int k = 1;k<=2*i-1;k++)cout<<k;
        cout<<endl;
    }
}
    1
   123
  12345
 1234567
123456789
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++) cout<<" ";
        for(int k = 1;k<=i;k++)cout<<k;
        for(int l = i-1;l>=1;l--) cout<<l;
        cout<<endl;
    }
}
    1
   121
  12321
 1234321
123454321
 */

 //Print this 
 /*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
 */
/*
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i = 0;i<n;i++){

        for(int j =0;j<i;j++) cout<<" ";
        for (int k = 0; k<2*(n-i)-1;k++) cout<<"*";
        cout<<endl;
    }
}
*********
 *******
  *****
   ***
    *
*/

/*
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i = 1;i<=2*n-1;i++){
        int row = (i<=n) ? i : 2*n-i;
        for(int j =1;j<=n-row;j++) cout<<" ";
        for(int k = 1;k<=2*row-1;k++)cout<<"*";
        cout<<endl;
    }
}
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

// Print this
/*

*******
*** ***
**   **
*     *

*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=2*n-1;i++) cout<<"*";
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    for(int i =1;i<=m;i++){
        for(int j = 1;j<=m+1-i;j++) cout<<"*";
        for(int k = 1;k<=nsp;k++) cout<<" ";
        nsp+=2;
        for(int j = 1;j<=m+1-i;j++) cout<<"*";
        cout<<endl;
    }
}

*******
*** ***
**   **
*     *

*/

//Print Number bridge

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=2*n-1;i++) cout<<i;
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    
    for(int i =1;i<=m;i++){
        int a=1;
        for(int j = 1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        
        for(int k = 1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp+=2;
        for(int j = 1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}

1234567
123 567
12   67
1     7

*/


// Print this pattern : Number Spiral 

/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

/*
int main(){
    int n;
     cout<<"Enter the number : ";
     cin>>n;
     for(int i= 1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a = i;
            int b =j;
            if(a>n) a = 2*n - i;
            if(b>n) b = 2*n - j;
            cout<<min(a,b);
        };
        cout<<endl;
     }
}

123444321
123454321
123444321
123333321
122222221
111111111

*/


/*
int main(){
    int n;
     cout<<"Enter the number : ";
     cin>>n;
     for(int i= 1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a = i;
            int b =j;
            if(a>n) a = 2*n - i;
            if(b>n) b = 2*n - j;
            int x = min(a,b);
            cout<<n-x+1;
        };
        cout<<endl;
     }
}

4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
