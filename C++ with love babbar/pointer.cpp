#include <iostream>
#include <math.h>
using namespace std;

// Part - 1.
/*
int main(){
    int num = 5;

    // Address of operator --> &

    cout<<"Addrress of num is: "<<&num<<endl;

    int *ptr = &num;                          //Pointer  has been declare.
    cout<<ptr<<endl;                          //It also give the address of num.
    cout<<*ptr<<endl;                         //It will give the value stored in num.
    cout<<++(*ptr)<<endl;                     //It will give the value stored in num and increase the value with 1.
    cout<<ptr++<<endl;                        //It also give the address of num.


}
*/

// Part - 2.
/*
int main(){
    int arr[10] = {2,5,6,67};
    cout<<"Adress of first memory block: "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Adress of first memory block: "<<&arr[0]<<endl;

    cout<<"4th : "<<*arr<<endl;
    cout<<"5th : "<<*arr+1<<endl;
    cout<<"6th : "<<*(arr+1)<<endl;
    cout<<"7th : "<<*(arr)+1<<endl;
    cout<<"8th : "<<arr[2]<<endl;
    cout<<"9th : "<<*(arr+2)<<endl;

    int i = 3;
    cout<<i[arr]<<endl;             //arr[i] = *(arr + i)    or      i[arr] = *(i + arr)
}
*/

/*
int main()
{

    int temp[10] = {1,2};
    cout <<" 1st --> "<< sizeof(temp) << endl;
    cout <<" 2nd --> "<< sizeof(*temp) << endl;
    cout <<" 3rd --> "<< sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout <<" 4th --> "<<sizeof(ptr)<<endl;
    cout <<" 5th --> "<< sizeof(*ptr)<<endl;
    cout <<" 6th --> "<< sizeof(&ptr)<<endl;

    int a[20] = {1,2,3,5};
    cout<<"1st --> "<<&a[0]<<endl;
    cout<<"2nd --> "<<&a<<endl;
    cout<<"3rd --> "<<a<<endl;

    int *p = &a[0];
    cout<<"4th --> "<<p<<endl;
    cout<<"5th --> "<<*p<<endl;
    cout<<"6th --> "<<&p<<endl;


    int arr[10];

   // arr = arr +1;            //it will show error
   int *ptr = &arr[0];
   cout<<"1st Address -->"<<ptr<<endl;
   ptr = ptr + 1;
   cout<<"2nd Address -->"<<ptr<<endl;
}

*/




                            // Char pointer

/*
int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl;         //It will print the first address of array.
    cout<<ch<<endl;          //It will print the whole ch array this id the difference beteen character array and integer array.

    char *c = &ch[0];
    cout<<c<<endl;

    char temp = 'z';
    char *p = &temp;

    cout<<p<<endl;
}
*/


                                        // Functions in pointer

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    *p = *p + 1;

}
int getSum(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}

int main(){
    int value = 5;
    int *p = &value;

    print(p); 

    cout<<"Before: "<<*p<<endl;
    update(p);
    cout<<"After: "<<*p<<endl;

    int arr[5] = {1,2,3,4,5};
    cout<<"Sum is: "<<getSum(arr,5)<<endl;

    // We can also pass some part of the array in the function by this.

    int aar[6] = {1 , 2,3 ,4,5,8};
    cout<<"Sum of some part of array is: "<<getSum(aar + 3, 3)<<endl;

}