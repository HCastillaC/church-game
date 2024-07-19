#include <iostream>

using namespace std;

void main_loop()
{

}

//Your usual title screen
void main_menu()
{
    int selector;

    cout << "Untilted Church Building Game" << endl;
    cout << "1. Start New Game" << endl;
    cout << "Choose the action youu want to perform: ";
    cin >> selector;

    switch(selector)
    {
        case 1: main_loop(); //In future, handle creating a new game separately
    }
}

//Just calls main menu
int main()
{
    main_menu();

    return 0;
}

