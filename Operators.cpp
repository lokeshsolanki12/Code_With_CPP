/*
:- bahut sare name space hai usme se ek hai std

#Arthmetic assigment
(+ , - , * , / , %)
:- (+- binary bhi or unary dono hi hai) 

:- C++ mai % ye opration karte hai to flote value nhi ke sakte .



#Implisit type conversion :- jab computer khud hame type chang karke deta hai to use type cast kahate hai 




#Explicit type conversion :- jab computer khud nhi hame type chang karke deta hai to use type cast kahate hai




# Assigment operator
(= , += , -= , *= , /= , %=)



#Unary operator
(++, -- , + , - , ! , ~)



#Relational operator
(== , != , > , < , >= , <=)
:- ye hamesha True or Fulse deta hai 



#logical operator
(&&(AND) , ||(OR) , !(NOT))
short cercating :- 1 || 2  , 0 && 2





#Bitwise operator
(& , | , ^ , ~ , << , >>)

(5 & 7) = 5       :- & 0 dhundta hai
(5 | 7) = 7       :- binary me change karna or add karna hai or usme non Zera dhudna hai
(5 ^ 7) = 2       :- number ko change kanre ke baad check karo upar niche sam hai to 0 or alg hai to 1, jo number mite vo ans.
(~5) = -6         :- jo nymber duya hai usme +1 karke - me likh do.
(5 << 2) = 20     :- first number ko binary me change karo or jo second number hai uski size ke hisab se 0 last me laga kar conver kar dosort tric (5 * (2^2) = 20)
(5 >> 2) = 1      :- (5 / (2^2) = 1)




#Ternary operator
(condition) ? (true) : (false)

:- int max = (a > b) ? a : b;

:- int max = h > j ? h > s ? h:s : j > s ? j : s;


*/

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 0;
//     int y =0;
//     int z = x ++ && ++y;
//     cout<<x<<endl;
//     cout<<y<<endl;
//     cout<<z<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int x = 0;
//     int y =0;
//     int z = ++x && ++y;
//     cout<<x<<endl;
//     cout<<y<<endl;
//     cout<<z<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 1;
//     int y = -1;

//     y++;
//     --x;
//     int z = ++x ||y++;
//     cout<<x<<endl;
//     cout<<y<<endl;
//     cout<<z<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){; 
//     int z = (5^7) ;
//     cout<<z<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){; 
//     int z = (5 << 2);
//     cout<<z<<endl;
// }

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a&1){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"Even"<<endl;
    }
}
