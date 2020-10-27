#include <iostream>
using namespace std;


int main()
{
    int eggsMin = 1;
    int milkMin = 200;  //Mililiters
    int flourMin = 100; //Grams
    int eggsAmount;
    int milkAmount;
    int flourAmount;
    int smallest;
    int flourPortions;
    int milkPortions;
    string name;

  
    cout << "What is your name?\n";
    cin >> name;
    cout << "Hello " << name << "!\n";

    
    cout << "How many eggs do you have?\n";
    cin >> eggsAmount;
    cout << "You have " << eggsAmount << " eggs\n";

    
    cout << "How much flour do you have?\n";
    cin >> flourAmount;
    cout << "You have " << flourAmount << "g of flour\n";

    
    cout << "How much milk do you have?\n";
    cin >> milkAmount;
    cout << "You have " << milkAmount << "ml of milk\n";

    
    if (eggsAmount < eggsMin || milkAmount < milkMin || flourAmount < flourMin)
    
        cout << "You don't have enough ingredients to make pancakes :(\n";
    

    else
    {
        flourPortions = flourAmount / flourMin;
        cout << "You have " << flourPortions << " portions of flour\n";

        
        milkPortions = milkAmount / milkMin;
        cout << "You have " << milkPortions << " portions of milk\n";

        
        if (eggsAmount <= milkPortions && milkPortions <= flourPortions)
        {
            smallest = eggsAmount;
        }

        else if (milkPortions <= eggsAmount && eggsAmount <= flourPortions)
        {
            smallest = milkPortions;
        }

        else
        {
            smallest = flourPortions;
        }

        
        cout << "\n";

        cout << "You can make " << smallest * 4 << " pancakes\n";

        cout << "You will need " << smallest * eggsMin << " eggs\n";

        cout << "You will need " << smallest * flourMin << "g of flour\n";

        cout << "You will need " << smallest * milkMin << "ml of milk\n";
    }

    cout << "Goodbye!\n";

    return 0;
    system("pause>0");
}