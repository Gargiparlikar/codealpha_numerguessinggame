#include<stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
	int num, guess, tries,maxAttempts = 10 ,hintAfterAttempt = 5 ;
	srand(time(0)); 
	num = rand() % 1000 + 1; 
	cout << "Guess My Number Game\n\n" ;

	do
	{for (int tries = 1; tries <= maxAttempts;tries++) {
		cout << "Enter a guess between 1 and 1000 : ";
		cin >> guess;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	        break;
    }

            if (tries == hintAfterAttempt); {
             if (num % 2 == 0)
                cout << "Hint: The number is even.\n";
            else
                cout << "Hint: The number is odd.\n";
    }
    }
    
    
    while (guess != num);
   
    if (guess != num)
        cout << "Oops! You've run out of attempts. The correct number was " << num << ".\n";

    return 0;
}
    


    


