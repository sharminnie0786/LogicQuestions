//
//  mixString.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 13/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Given two strings, a and b, create a bigger string made of the first char of a, the first char of b, the second char of a, the second char of b, and so on. Any leftover chars go at the end of the result.
//  mixString("abc", "xyz") → "axbycz"

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    
    cout << "Enter one string: " << endl;
    cin >> a;
    cout << "Enter another string: " << endl;
    cin >> b;
    
    if (a.length() > b.length()) {
        for (int i = 0; i < a.length(); i++) {
            cout << a[i] << b[i];
        }
    } else if (a.length() < b.length()) {
        for (int i = 0; i < b.length(); i++) {
            cout << a[i] << b[i];
        }
    }
    
    cout << endl;

}
