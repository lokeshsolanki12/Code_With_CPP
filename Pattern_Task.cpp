#include<iostream>
using namespace std;

// Print this
/*
1
13
135
1357 
13579
*/

/*
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i= 1;i<=n;i++){
        for(int j = 1;j<=2*i-1;j+=2){
            cout<<j;
        }
        cout<<endl;
    }
}
1
13
135
1357
13579
*/


// Print this one

/*
  *  
  *
*****
  *
  * 
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int mid = n/2+1 ;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==mid || j==mid) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
  *  
  *
*****
  *  
  *
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int mid = n/2+1 ;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==mid || j==mid) cout<<"*";
            else cout<<"#";
        }
        cout<<endl;
    }
}
##*##
##*##
*****
##*##
##*##
*/

// Print this 
/*
*   *
 * * 
  *  
 * * 
*   *

*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j= 1;j<=n;j++){
            if(i==j || i+j == n+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
     
}

*   *
 * *
  *
 * *
*   *

*/


//Print this
/*
1
23
456
78910
1112131415
*/
/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count = 1 ;
        for(int i = 1;i<=n;i++){
        for(int j = 1; j<=i;j++) {
            cout<<count;
        count++;
        }
        cout<<endl;
    }
}
1
23
456
78910
1112131415
*/

//Print this
/*
1
01
101
0101
10101
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int k = 1;
    for(int i = 1;i<=n;i++){
        if(i%2!=0) k =1;
        else k =0;
        for(int j = 1;j<=i;j++){
            cout<<k;
            if(k==1) k= 0;
            else k =1;
        }
        cout<<endl;
    }
}
1
01
101
0101
10101
*/

/*
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int k= 0;
    for(int i= 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            k = i+j;
            if(k%2==0 ) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
}
1
01
101
0101
10101
*/


/*
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=n-i;j++) cout<<" ";
        for(int k = i;k>=1;k--) cout<<"*";
        cout<<endl;
    }
}
    *
   **
  ***
 ****
*****

*/


/*
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=n-i;j++) cout<<" ";
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