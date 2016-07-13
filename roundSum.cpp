//
//  roundSum.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 13/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  For this problem, we'll round an int value up to the next multiple of 10 if its rightmost digit is 5 or more, so 15 rounds up to 20. Alternately, round down to the previous multiple of 10 if its rightmost digit is less than 5, so 12 rounds down to 10. Given 3 ints, a b c, return the sum of their rounded values. To avoid code repetition, write a separate helper "public int round10(int num) {" and call it 3 times. Write the helper entirely below and at the same indent level as roundSum().
//  roundSum(16, 17, 18) → 60
//  roundSum(12, 13, 14) → 30
//  roundSum(6, 4, 4) → 10

#include <iostream>
using namespace std;

int round10(int n) {
    if ((n % 10) >= 5) {
        while (n % 10 != 0) {
            n++;
        }
        return n;
    } else if ((n % 10) < 5){
        while(n % 10 != 0) {
            n--;
        }
        return n;
    }
    return 0;
}

int main() {
    int a, b, c;
    cout << "Enter values three values: " << endl;
    cin >> a >> b >> c;
    int sum = round10(a) + round10(b) + round10(c);
    cout << sum << endl;
}
