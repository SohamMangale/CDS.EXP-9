# EXPERIMENT-9

## Aim -
To study and implement pointers basics in c++

## Theory -
Pointer is a variable that holds the memory address of another variable.<br>
Pointers are crucial for dynamic memory management, working with arrays, and efficient handling of large data structures.

### 1. *Declaring a Pointer*
A pointer is declared by specifying the type of the data it points to, followed by an asterisk (*), and then the pointer variable name.

```
int* ptr;   // Pointer to an integer
char* cptr; // Pointer to a character
```

### 2. *Pointer Initialization*
To store the address of a variable in a pointer, use the address-of operator (&).

```
int x = 5;
int* ptr = &x; // ptr stores the address of x
```

### 3. *Dereferencing a Pointer*
To access the value at the memory location a pointer points to, use the dereference operator (*).

```
int x = 5;
int* ptr = &x;
cout << *ptr; // Output: 5 (value at the address stored in ptr)
```

### 4. *Pointer Arithmetic*
Pointers can be incremented or decremented to traverse memory locations. Pointer arithmetic depends on the data type the pointer is pointing to.

```
int arr[] = {1, 2, 3, 4};
int* ptr = arr;

ptr++;  // Moves to the next element in the array (because it's int*, it moves 4 bytes ahead)
```

### 5. *Dynamic Memory Allocation*
Pointers are essential when working with dynamic memory allocation using new and delete.

```
int* ptr = new int; // Allocates memory for an integer
*ptr = 5;          // Assigns value
delete ptr;        // Deallocates memory
```

## Code -
### 1.
```
//soham
//entc B1
//23070123084
//experiment 9
#include <iostream>
using namespace std;
int main ()
{
    int var=150;
    // declare pointer c=variable
    int *ptr;
    //note that data type of ptr and var must be same
    ptr =&var;
    //assign the address of variable of a variable to a pointer 
    cout<<"Value at ptr=" << ptr <<  "\n";
    cout<<"Value at var=" << var <<  "\n";
    cout<<"Value at *ptr=" << *ptr <<  "\n";
    return 0;
}
```

### 2.
```
//soham
//entc B1
//23070123084
//experiment 9A
#include <iostream>
using namespace std;
int main () 
{
    // dynamically creating array of size=5
    int *ptr=new int[5];
    // initialize the arrat p[] as {10,20,30,40,50}
    for (int i=0;i<5;i++){
        ptr[i]=10*(i+1);

    }
    //printing the values using pointers
    cout<< *ptr << endl;
    cout<< *ptr +1 << endl;
    cout<< *(ptr +1) << endl;   
    cout<< 2[ptr] << endl; 
    cout<< ptr[2] << endl; 
    *ptr++;
    cout<< *ptr;
    return 0;
}
```

### 3.
```
//soham
//entc B1
//23070123084
//experiment 9B
#include <iostream>
using namespace std;
int main()
{
    int *p ,b=10;
    p = &b ;
    cout <<*p << "  " << b << endl <<p <<"  "<< &b<<endl;
    p++;
    cout<<"After increment:" <<p<<endl;
    float *n, a=8.923;
    n=&a;
    cout<< endl<<*n<<"  "<<a<<endl<<n<<"  "<<&a<<endl;
    n++;
    cout<<" After increment" <<n <<endl;
    char *ch, c(10);
    c='#';
    ch=&c;
    cout<< endl<< (void*)ch<<"  "<<endl;
    ch++;
    cout<<" After increment:" << (void*)ch<<endl;
    return 0;
}
```

## Output -
### 1.
![image](https://github.com/user-attachments/assets/50cab525-4c12-4926-8e25-3fbaadeac446)

### 2.
![image](https://github.com/user-attachments/assets/cf75b7cc-934f-4b69-a6db-d8a2663abde4)

### 3.
![image](https://github.com/user-attachments/assets/2ad08f3f-4796-453f-92f2-840f8da55359)


## Conclusion -
Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers.
