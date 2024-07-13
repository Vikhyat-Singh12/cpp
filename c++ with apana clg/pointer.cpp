#include <iostream>
using namespace std;

/*
int main(){
    int a = 10;
    int *aptr;                     //pointer is made using the star at the start

    aptr = &a;                     // Now aptr has the address of the variable(a)

    cout<<a<<endl;
    cout<<aptr<<endl;              //gives the adress of the variable(a)
    cout<<&a<<endl;                //gives the adress of the variable(a)
    cout<<*aptr<<endl;             // It gives the value stored in the variable(a)

    // Pointer  also help in the changing the value of the variable.
    // Below it is demonstrated how its done.

    *aptr = 20;

    cout<<a<<endl;                //New value of the variable



}
*/

/*
int main(){
    int a = 10;
    int *aptr = &a;

    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;

}

*/
/*
int main()
{
    char ch = 'a';
    char *cptr = &ch;
    cout << cptr << endl;

    cptr++;
    cout << cptr << endl;
}
*/

/*
int main(){
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    cout<<endl;

// First method to access all the element of the array with the help of pointer.
    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    cout<<endl;

// Second method of accessing all the element of the array using pointer.

for (int i = 0; i < 3; i++)
{
    cout<<*(arr+i)<<endl;
}

    
}
*/

//                           POINTER TO POINTER

/*
int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;

    cout<<q<<endl;                        //Value stored in q (i.e address of p)
    cout<<*q<<endl;                       //Value stored in p (i.e address of a)
    cout<<**q<<endl;                      //Value stored in a
}
*/

//                          PAASSING POINTERS TO FUNCTION

/*
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 2;
    int b =4;

    int *aptr = &a;
    int *bptr = &b;

    swap(aptr,bptr);

    //    OR

    // swap(&a,&b);

    cout<<a<<" "<<b<<endl;
}
*/

void increment(int *a){
    (*a)++;
}

int main(){
    int a= 2;
    increment(&a);
    cout<<a<<endl;
}