// write a C++ program to represent the right angle triangle with the help of stars(*) in it without returning its values. 


// Approach-2(using nested loops)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;     
    cout << "Enter the number of rows: ";
    cin >> n;   

    for (int i = 1; i <= n; i++) {     // For the rows of the triangle
        for (int j = 1; j <= i; j++) {   // for the columns of the triangle
            cout << "* ";   // Print the stars
        }
        cout << endl;
    }

    return 0;  // End of the Program
}


//Approach-2(using string function)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << string(i, '*') << endl;
    }

    return 0;
}
