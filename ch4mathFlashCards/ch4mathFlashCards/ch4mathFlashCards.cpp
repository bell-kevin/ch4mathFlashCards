// ch4mathFlashCards.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    std::cout << "Ch 4 Math Flash Cards by Kevin Bell\n\n";
    unsigned seed;
    seed = time(0);
    srand(seed);
    auto number1 = rand() % 50 + 10, number2 = rand() % 50 + 10, answer = 0,correctAnswer=0;
    cout << "Problem: " << number1 << " + " << number2 << endl;
    cout << "What is the answer? ";
    cin >> answer;
    correctAnswer = number1 + number2;
    if (answer == correctAnswer) {
        cout << "Correct! Congratulations!" << endl;
    }
    else {
        cout << "Incorrect, the answer is " << correctAnswer << endl;
    }
    //Keep window open til done
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
