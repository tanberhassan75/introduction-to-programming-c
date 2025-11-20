#include<bits/stdc++.h>

using namespace std;

int main()

{

 int *a = new int[5]; // A dynamic array of size 5 has been declared. 

 for(int i=0;i<5;i++)

 {

 cin >> a[i]; // Array element input taken.
 }

 for(int i=0;i<5;i++)

 {

 cout << a[i] << " "; // Array elements are printed.

 }

 cout << endl;

 delete[] a; // The dynamic array has been deleted.

 for(int i=0;i<5;i++)

 {

 cout << a[i] << " "; // Array elements printed after deletion.

 }

}
