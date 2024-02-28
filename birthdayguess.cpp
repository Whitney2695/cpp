#include <iostream>

int main() {
    std::cout << "Welcome to the Birthday Guessing Game!" << std::endl;
    std::cout << "Think of your birthday (day and month) and I will try to guess it." << std::endl;
    std::cout << "Answer with 'yes' or 'no'." << std::endl;

    bool guessed = false;
    int day = 0, month = 0;
    std::string response;

    // Guess the day
    for (int i = 1; i <= 31; ++i) {
        std::cout << "Is your birthday on the " << i << "th of any month? ";
        std::cin >> response;
        if (response == "yes") {
            day = i;
            guessed = true;
            break;
        }
    }

    if (!guessed) {
        std::cout << "Hmm... You must be a vampire. Your birthday isn't on any day of the month." << std::endl;
        return 0;
    }

    guessed = false;

    // Guess the month
    for (int i = 1; i <= 12; ++i) {
        std::cout << "Is your birthday in month " << i << "? ";
        std::cin >> response;
        if (response == "yes") {
            month = i;
            guessed = true;
            break;
        }
    }

    if (!guessed) {
        std::cout << "Looks like I need more practice. I couldn't guess your birthday." << std::endl;
    } else {
        std::cout << "Your birthday is on " << month << "/" << day << ". I guessed it!" << std::endl;
    }

    return 0;
}
