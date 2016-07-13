//
//  countCode.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 13/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Return the number of times that the string "code" appears anywhere in the given string, except we'll accept any letter for the 'd', so "cope" and "cooe" count.
//countCode("aaacodebbb") → 1
//countCode("codexxcode") → 2
//PROBLEM WITH SECOND PART OF QUESTION

#include <iostream>
using namespace std;

int main() {
    string word;
    cout << "Enter a string: " << endl;
    cin >> word;
    int count = 0;
    
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'c' && word[i+1] == 'o' && word[i+2] == 'd' && word[i+3] == 'e') {
            count++;
        }
//        else if (word[i] == 'c' && word[i+1] == 'o'&& word[i+3] == 'e') {
//            count++;
//        }
    }
    
    cout << count << endl;
    return 0;
}
