# EXP-7
## Aim

- To study and implement C++ Arrays and Strings.
## Software required-

You need to have a C++ compiler installed on your system. Common options include:

- [Microsoft Visual C++](https://visualstudio.microsoft.com/vs/features/cplusplus/)

## Theory
Array: • An arry is a fixed-size sequential collection of the elemnts of same data type. It consists of continuous memory locations.
• The array's indexes begin at 0. Meaning that the first item saved at index 0 is [0].
• The final element of an array with size n is kept at index (n-1).

## CODE 1 
```cpp

#include<iostream>
using namespace std; 

// Program to print an array. 
int main() {
    int i;
    int a1[5]={19, 20, 5, 6, 7};
    int a2[5]={5,6,9,0,6};
    cout<<"Array is: ";

    for(i=0; i<5; ++i) {
        cout<<"Array is: "<<a1[i]<<" "<<"\n";
    }
    for(i=0; i<5; ++i) {
        cout<<"Array is: "<<a2[i]<<" "<<"\n";
    }
    return 0;
}
}
```
### Output
<img width="802" alt="EXP 7 A OUTPUT" src="https://github.com/user-attachments/assets/a2ca454d-3b6a-4234-91ce-6edee96b1f40">

## CODE 2
```cpp

#include <iostream>
#define S 4
using namespace std;

int main() {
    int array1[S];
    //take input from user
    cout << "Enter " << S << " elements of array: ";
    for (int index = 0; index < S; index++) {
        cin >> array1[index];
    }
  cout << endl;

    // display entered array ekements
    for (int j : array1) {
        cout << j << "  ";
    }

   return 0;
}
```
### Output
<img width="814" alt="EXP 7 B OUTPUT" src="https://github.com/user-attachments/assets/033c6b33-a8ae-4c7b-badf-c11e905075ae">

## CODE 3
```cpp

int main() {
    int i,n;
    cout<<"Enter the size of array: ";
    cin>> n;
    int a[n]; 
    //create array
    for(i=0;i<n;i++)
    {
        cout<<"Enter elements "<<i+1<<": ";
        cin>>a[i];
    }
    //display input array
     cout<<"Array entered by the user is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"";
    }

    //reverse array
    cout<<"\n Reverse of the entered array is: "; 
    for (i=n-1; i>=0; i--) {
        cout<<a[i]<<"";
    }
    return 0; 
}
```
### Output
<img width="827" alt="EXP 7 C OUTPUT" src="https://github.com/user-attachments/assets/cc7cd555-40f2-4909-af8d-382759c7d6ee">

## CODE 3
```cpp

#include<iostream>
using namespace std;

int main() {
    int marks[5], i, j, num, a=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            a=1;
        }
    }
    if(a==0) {
        cout<<"Element not present";
    }
    else if(a==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}

```
### Output
<img width="803" alt="EXP 7 D OUTPUT" src="https://github.com/user-attachments/assets/01414e8a-ca8a-4bf3-ad47-5fbe176e9cec">







## Conclusion
We learnt the implementation and study of  arrays and strings in C++ language.
