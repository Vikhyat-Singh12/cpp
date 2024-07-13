#include <iostream>
using namespace std;

/*
int main(){
    int array[4] ={10,20,30,40};         //Intilising array manually by this type.
                                         // Indexing of array start form 0 upto n-1.
    cout<<array[3];                      //This is how we access the element of the  array.

}
*/

/*
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array: ";
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<" element of the array is: "<<array[i]<<endl;
    }

}
*/

// Finding the maximum and minimum from the array.

/*
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array: ";
        cin>>array[i];
    }

    int maxNo = INT16_MIN;
    int minNo = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (array[i]>=maxNo)
        // {
        //     maxNo = array[i];
        // }
        // if (array[i]<=minNo)
        // {
        //     minNo = array[i];
        // }


    //    Its another method

        maxNo = max(maxNo,array[i]);
        minNo = min(minNo,array[i]);


    }
    cout<<"Biggest value in array is: "<<maxNo<<endl;
    cout<<"Lowest value in array is: "<<minNo<<endl;
}
*/

// Searching the key in the array.

/*
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array: ";
        cin>>array[i];
    }

    int key;
    cout<<"Enter the key to be searched in the array: ";
    cin>>key;

    for (int i = 0; i < n; i++)
    {
        if (key==array[i])
        {
            cout<<i+1<<" is the index of the key.";
            break;
        }

    }

}
*/

// Binary search in the array.

/*
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element of the array: ";
        cin >> array[i];
    }

    int key;
    cout << "Enter the key to be searched in the array: ";
    cin >> key;

    cout<<"Index position of the given key is : "<<binarySearch(array,n,key);
}

*/






//                            Sorting in the array


/*
int main(){
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i]>array[j])
            {
                int temp;
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
            
        }
        
    }

    cout<<"Sorted array become: ";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
        
    }
}
*/

// Q> If you can buy 1 chocolate for 1 ruppee and also 1 chocolate with 3 wrappers? Then what should be the number of chocolate you can buy with n ruppee?

/*
int wapper(int n){
    int wapper = n;
    int chocolate = n;

    while (wapper>2)
    {
        chocolate = chocolate + wapper/3;
        wapper = wapper/3 + wapper%3;
    }
    
    return chocolate;
}

int main(){
    int amount;
    cout<<"Enter the amount you have: ";
    cin>>amount;
    
    cout<<"The maximum number of chocolate you can have: "<<wapper(amount)<<endl;
}
*/


// Take two user input set and perform the intersection of set on those two given sets.
// Not completed.
/*
int arr(int n){
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array: ";
        cin>>arr[i];
    }
    
}


int main(){
    int a,b;
    cout<<"Enter the size of 1st set: ";
    cin>>a;
    arr(a);

    cout<<"Enter the size of 2nd set: ";
    cin>>b;
    arr(b);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr(i) == arr(j))
            {
                cout<<"The Union of the set is: "<<i;
            }
            
        }
        
    }
}
*/





// BUBBLE  SORT (Repeadly swap two adjacent element if the are in wrong order)

/*
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int j = 1; j<n;j++){
        for (int i = 0; i < n-j; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1] = temp;    
            } 
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

*/

/*
int main(){
    int arr[6]={4,9,3,1,8,7};

    for (int i = 1; i < 6; i++)
    {
       for (int j = 0; j < 6-i; j++)
       {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
       }
       
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/


// INSERTION  SORT (Insert an element from unsorted array to its correct position in sorted array)


int main(){
    int n;
    cout<<"Enter a size of the array: ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"Array after sorted: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

