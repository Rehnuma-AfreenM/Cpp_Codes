#include<iostream>
using namespace std;

int main()
{



int quant;
int choice;

// Quantity
int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
// food items sold
int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
// Total process of items
int Total_room = 0, Total_pasta = 0, Total_burgers = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

cout << "\n\t Quantity of items we have -";
cout << "\n\n Rooms available:";
cin >> Qrooms;
cout << "\n Quantity of pasta: ";
cin >> Qpasta;
cout << "\n Quantity of burger: ";
cin >> Qburger;
cout << "\n Quantity of noodles: ";
cin >> Qnoodles;
cout << "\n Quantity of shake: ";
cin >> Qshake;
cout << "\n Quantity of chicken-roll: ";
cin >> Qchicken;

m : cout << "\n \t\t\t Please select from the menu options";
cout << "\n\n1) Rooms";
cout << "\n2) Pasta";
cout << "\n3) Burger";
cout << "\n4) Noodles";
cout << "\n5) Shake";
cout << "\n6) Chicken-roll";
cout << "\n7) Information regarding sales and collection";
cout << "\n8) Exit";

cout << "\n\n Please enter your choice! ";
cin >> choice;

switch (choice)
{
case 1:
    cout << "\n\nEnter the number of rooms you want: ";

    cin >> quant;
    if (Qrooms - Srooms >= quant)
    {
        Srooms = Srooms + quant;
        Total_room = Total_room + (quant * 1200);
        cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you!";
    }
    else
        cout << "\n\tOnly" << Qrooms - Srooms << "Rooms remaining in hotel ";
    break;

case 2:
    cout << "\n\n Enter Pasta Quantity :";

    cin >> quant;
    if (Qpasta - Spasta >= quant)
    {
        Spasta = Spasta + quant;
        Total_pasta = Total_pasta + (quant * 250);
        cout << "\n\n\t\t" << quant << "pasta is the order! ";
    }
    else

        cout << "\n\tOnly" << Qpasta - Spasta << "pasta remaining in hotel ";
    break;

case 3:
    cout << "\n\n Enter Burger Quantity :";

    cin >> quant;
    if (Qburger - Sburger >= quant)
    {
        Sburger = Sburger + quant;
        Total_burgers = Total_burgers + (quant * 180);
        cout << "\n\n\t\t" << quant << "Burger is the order! ";
    }
    else

        cout << "\n\tOnly" << Qburger - Sburger << "Burgers remaining in hotel ";
    break;

case 4:
    cout << "\n\n Enter Noodles Quantity :";

    cin >> quant;
    if (Qnoodles - Snoodles >= quant)
    {
        Snoodles = Snoodles + quant;
        Total_noodles = Total_noodles + (quant * 250);
        cout << "\n\n\t\t" << quant << "Noodles is the order! ";
    }
    else

        cout << "\n\tOnly" << Qnoodles - Snoodles << "Noodles remaining in hotel ";
    break;

case 5:
    cout << "\n\n Enter Shake Quantity :";

    cin >> quant;
    if (Qshake - Sshake >= quant)
    {
        Sshake = Sshake + quant;
        Total_shake = Total_shake + (quant * 150);
        cout << "\n\n\t\t" << quant << "Shake is the order! ";
    }
    else

        cout << "\n\tOnly" << Qshake - Sshake << "Shake remaining in hotel ";
    break;

case 6:
    cout << "\n\n Enter Chicken roll Quantity :";

    cin >> quant;
    if (Qchicken - Schicken >= quant)
    {
        Schicken = Schicken + quant;
        Total_chicken = Total_chicken + (quant * 200);
        cout << "\n\n\t\t" << quant << "Chicken roll is the order! ";
    }
    else

        cout << "\n\tOnly" << Qchicken - Schicken << "Chicken roll remaining in hotel ";
    break;

case 7:

    cout << "\n\t\t Details of sales and collection ";
    cout << "\n\n Number of rooms we had : " << Qrooms;
    cout << "\n\n Number of rooms we gave for rent " << Qrooms;
    cout << "\n\n Remaining rooms : " << Qrooms - Srooms;
    cout << "\n\n Total rooms collection for the day : " << Total_room;

    cout << "\n\n Number of pasta we had : " << Qpasta;
    cout << "\n\n Number of pasta we sold " << Qpasta;
    cout << "\n\n Remaining pasta : " << Qpasta - Spasta;
    cout << "\n\n Total pasta collection for the day : " << Total_pasta;

    cout << "\n\n Number of burgers we had : " << Qburger;
    cout << "\n\n Number of burgers we sold " << Qburger;
    cout << "\n\n Remaining burgers : " << Qburger - Sburger;
    cout << "\n\n Total burger collection for the day : " << Total_burgers;

    cout << "\n\n Number of Noodles we had : " << Qnoodles;
    cout << "\n\n Number of Noodles we sold " << Qnoodles;
    cout << "\n\n Remaining Noodles : " << Qnoodles - Snoodles;
    cout << "\n\n Total Noodles collection for the day : " << Total_noodles;

    cout << "\n\n Number of Shake we had : " << Qshake;
    cout << "\n\n Number of shake we sold " << Qshake;
    cout << "\n\n Remaining shake : " << Qshake - Sshake;
    cout << "\n\n Total shake collection for the day : " << Total_shake;

    cout << "\n\n Number of chicken rolls we had : " << Qchicken;
    cout << "\n\n Number of chicken rolls we sold " << Qchicken;
    cout << "\n\n Remaining chicken rolls : " << Qchicken - Schicken;
    cout << "\n\n Total chicken rolls collection for the day : " << Total_chicken;

case 8:
    exit(0);

default:
    cout << "\n Please select the number mentioned above! ";

}
goto m;
}
