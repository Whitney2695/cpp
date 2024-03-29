#include <iostream>
#include <string>

using namespace std;

// Function to display the quiz question and options
void displayQuestion(int questionNumber) {
    string question, optionA, optionB, optionC, optionD;
    char correctAnswer;

    // Define quiz questions, options, and correct answers
    switch (questionNumber) {
        case 1:
            question = "What is the result of 5 + 3?";
            optionA = "A) 7";
            optionB = "B) 8";
            optionC = "C) 9";
            optionD = "D) 10";
            correctAnswer = 'B';
            break;
        case 2:
            question = "What is the result of 12 - 4?";
            optionA = "A) 6";
            optionB = "B) 7";
            optionC = "C) 8";
            optionD = "D) 9";
            correctAnswer = 'C';
            break;
        case 3:
            question = "What is the result of 4 * 6?";
            optionA = "A) 20";
            optionB = "B) 24";
            optionC = "C) 28";
            optionD = "D) 32";
            correctAnswer = 'B';
            break;
        case 4:
            question = "What is the result of 24 / 6?";
            optionA = "A) 2";
            optionB = "B) 3";
            optionC = "C) 4";
            optionD = "D) 5";
            correctAnswer = 'B';
            break;
        default:
            cout << "Invalid question number!\n";
            return;
    }

    // Display the question and options
    cout << question << endl;
    cout << optionA << endl;
    cout << optionB << endl;
    cout << optionC << endl;
    cout << optionD << endl;

    // Prompt the user to enter their answer
    char userAnswer;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> userAnswer;

    // Check if the user's answer is correct
    if (toupper(userAnswer) == correctAnswer) {
        cout << "Correct!\n";
    } else {
        cout << "Incorrect. The correct answer is: " << correctAnswer << endl;
    }
}

int main() {
    // Display each question and get user's answer
    for (int i = 1; i <= 4; ++i) {
        displayQuestion(i);
    }

    return 0;
}
