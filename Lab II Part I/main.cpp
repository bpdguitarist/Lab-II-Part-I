//
//  main.cpp
//  Lab II Part I
//
//  Created by Edgar Esparza on 6/8/15.
//  Copyright (c) 2015 Edgar Esparza. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int side_a, side_b, side_c;
    cout<<"Enter the values for each side of a triangle."<<endl;
    cout << "Enter value for side_a: ";
    cin>>side_a;
    cout <<"Enter value for side_b; ";
    cin>>side_b;
    cout <<"Enter value for side_c: ";
    cin>>side_c;
    
    int s=(.5 * (side_a + side_b + side_c));
    cout<<"side_a: "<<side_a<<endl;
    cout<<"side_b: "<<side_b<<endl;
    cout<<"side_c: "<<side_c<<endl;
    cout << "Perimeter:" << (side_a + side_b + side_c) << endl;
    cout << "Area: " << sqrt( s * ((s - side_a)*(s - side_b)*(s - side_c)) ) << endl;
    
    
    if ((pow(side_c, 2)-((pow(side_a, 2))+(pow(side_b, 2))))==0){
        cout<<"This is a right triangle."<<endl;
    }
    else {
        cout<<"This is not a right triangle."<<endl;
    }
    return 0;
    
}
