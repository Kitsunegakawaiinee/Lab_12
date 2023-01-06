#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
    string grade;
    srand(time(0));
    int r = rand() % 9;

    cout << "Press Enter 3 times to reveal your future." ;

    for (int i = 3; i > 0; i--)
    {
        cin.get();
    }

    switch (r)
    {
        case 7: grade = "F";
        break;

        case 6: grade = "D";
        break;

        case 5: grade = "D+";
        break;

        case 4: grade = "C";
        break;

        case 3: grade = "C+";
        break;

        case 2: grade = "B";
        break;

        case 1: grade = "B+";
        break;

        case 0: grade = "A";
        break;

        case 8: grade = "W";
        break;

    }


    cout << "You will get "  << grade << " in this 261102.";
  
}



