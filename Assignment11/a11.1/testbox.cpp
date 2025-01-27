// CH-230-A
// a11_p1.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "Box.h"

using namespace std;

int main(int argc,char**argv) {
    int n, i, j = 0, a;
    double height, width, depth, volume;

    // Enter from keyboard the value for n
    cin >> n;
    a = (2 * n);

    // Dynamically create an array of 2*n boxes
    Box *arrayB = new Box[a];

    //Enter from keyboard the height,width & depth
    //of each box
    for (i = 0; i < n; i++) {
        cout << " Box " << i+1 << " :\n "
        << " Height " << " : ";
        cin >> height;
        arrayB[i].setHeight(height);

        cout << " Box " << i+1 << " :\n "
        << " Width " << " : ";
        cin >> width;
        arrayB[i].setWidth(width);

        cout << " Box " << i+1 << " :\n "
        << " Depth " << " : ";
        cin >> depth;
        arrayB[i].setDepth(depth);
    }

    //Adding copies on the remainder n positions using
    //copy constructors
    for (i = n; i < (a); i++) {
        arrayB[n] = Box(arrayB[j]);
        n++;
        j++;
    }

    //Calculate Volume and Print on the screen
    for (i = 0; i < (a); i++) {
        volume = arrayB[i].getHeight() * arrayB[i].getWidth() * 
        arrayB[i].getDepth();

        cout << " Volume " << i+1 << " : " << volume << endl;
    }

    delete[] arrayB;
    return 0;
}