//
//  makeChocolate.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 13/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//Given three ints, a b c, one of them is small, one is medium and one is large. Return true if the three values are evenly spaced, so the difference between small and medium is the same as the difference between medium and large.
//evenlySpaced(2, 4, 6) → true
//evenlySpaced(4, 6, 2) → true
//evenlySpaced(4, 6, 3) → false

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter values" << endl;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    int temp, compare1, compare2;
    temp = compare1 = compare2 = 0;

//    srand(time(0));
//
//    for (int i = 0; i < 3; i++) {
//         arr[i] = rand() % 10;
//        cout << arr[i] << " ";
//    }

    cout << endl;
    //Sort the numbers in ascending order
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[j] > arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    //Compare the pair
    compare1 = arr[1] - arr[0];
    compare2 = arr[2] - arr[1];

    if (compare1 == compare2) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    cout << endl;

    return 0;
}