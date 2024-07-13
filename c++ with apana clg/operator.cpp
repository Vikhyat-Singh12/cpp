#include<iostream>
using namespace std;

/*
int main(){
    int i = 1;

        //1   //3
    i = i++ + ++i;
    cout<<i<<endl;
}
*/


/*
int main(){
    int i = 1;
    int j = 2;
    int k;

//      1   2   1     2       3     4
    k = i + j + i++ + j++ + ++i + ++j;

    cout<<i<<" "<<j<<" "<<k<<endl; 
}
*/


/*
int main(){
    int i = 0 ;

//      0       0     1   1
    i = i++ - --i + ++i - i--;
    cout<<i<<endl;
}
*/

/*
int main(){
    int i = 1, j=2, k=3;


    int m = i-- - j-- - k--;

    cout<<i<<endl;  //0
    cout<<j<<endl;  //1
    cout<<k<<endl;  //2
    cout<<m<<endl;  //-4
}
*/

/*
int main(){
    int i = 10, j=20,k;

//      10    9      21    22     9   22      10  21     
    k = i-- - i++ + ++j - ++j + --i - j-- + ++i - j++;

//       10       22     -24
    cout<<i<<" "<<j<<" "<<k;
}
*/



/*
// shift operators 

         (<<) -- Left shift operator        &         (>>) -- Right Shift operator
                 4<<1                                       4>>1
                (0100)                                     (0100)
                =1000                                      =0010


// Miscellaneous Operators

sizeof()         -->  Return the size of variable 
condition? X:Y   -->  Return value of X if condition is true or else value of Y
Cast             -->  Convert one data type to another 
comma(,)         -->  Causes a sequence of opertation to be performed
&                -->  Return the address of a variable
*                -->  Pointer to a variable  
*/