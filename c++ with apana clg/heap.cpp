#include<iostream>
using namespace std;

int main(){
    int a = 10;                        //stored in the stack
    int *p = new int();                //Manually allocted memory in a HEAP
    *p = 10;

    delete(p);                         //Manuall dealocation of memory in HEAP
    p = new int[4];                    //Now, it allocate this memory for a ARRAY
    delete[]p;                         //Manually deletion of memory for a ARRAY
    p= NULL;
    return 0;
}