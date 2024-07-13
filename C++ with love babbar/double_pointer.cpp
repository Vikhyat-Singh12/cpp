#include <iostream>
#include <math.h>

using namespace std;

// Double pointer (part - 3)

/*
void update(int **p2){
    // p2 = p2 +1;                  //Kuch change hua --> No

    // *p2 = *p2 +1;                  //Kuch change hua --> Yes

    **p2 = **p2 +1;                  //Kuch change hua --> Yes
}

int main(){
    int p = 5;
    int *ptr1 = &p;
    int **ptr2 = &ptr1;

    // Value of p by all possible ways.
    cout<<endl<<"Printing the value of p: "<<p<<endl;
    cout<<"Printing the value of p: "<<*ptr1<<endl;
    cout<<"Printing the value of p: "<<**ptr2<<endl;

    // Address of p by all possible method.
    cout<<"Address of the value of p: "<<&p<<endl;
    cout<<"Address of the value of p: "<<ptr1<<endl;
    cout<<"Address of the value of p: "<<*ptr2<<endl;

    // Address of ptr1 by all possible ways.
    cout<<"Address of the ptr1: "<<&ptr1<<endl;
    cout<<"Address of the ptr1: "<<ptr2<<endl;

    // Address of ptr2 by all possible ways.
    cout<<"Address of the ptr2: "<<&ptr2<<endl;


    cout<<endl<<endl;
    cout<<"Before --> "<<p<<endl;
    cout<<"Before --> "<<ptr1<<endl;
    cout<<"Before --> "<<ptr2<<endl;
    update(ptr2);
    cout<<"After --> "<<p<<endl;
    cout<<"After --> "<<ptr1<<endl;
    cout<<"After --> "<<ptr2<<endl;

}
*/

