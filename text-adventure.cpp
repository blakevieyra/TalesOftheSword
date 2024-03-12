#include <iostream>

int main()
{

    int x;
    int y;
    int a;
    std::string name;
    std::cout << "Welcome to the Tales of the Sword!\n";
    std::cout << "What is your character's name?: ";
    std::cin >> name;
    std::cout << "Choose your character class: \n 1) Barbarian \n 2) Magician\n 3) Archer\n\n";

    std::cin >> x;
    if (x == 1)
    {
        std::cout << " You, " << name << " , are a Barbarian.";
    }
    else if (x == 2)
    {
        std::cout << " You, " << name << " , are a Magician.";
    }
    else if (x == 3)
    {
        std::cout << " You, " << name << " , are a Archer.";
    }
    else
    {
        std::cout << " Pick a number option only!";
    }

    std::cout << " In a far away kingdom called Selvendore, their was peace and tranquility for many eons. Families for generations were at work raising their young and growing their produce for themselves and the community. War was not seen since the Last Kingdom took control. Lord Nizor is the ruler now and swore to protect the future of his kingdom after the fall of the hateful Nayfore. Until....";

    std::cout << " You are sleeping in you home on a relaxing day off from tending the farmland and hear a loud knock at the door. What do you do?: \n 1) Stay asleep.\n 2) Grab weapon and prepare to fight.\n 3) Calmly answer the door.\n\n";

    std::cin >> y;
    if (y == 1)
    {
        std::cout << "The knocking stops. You wake up the following afternoon to the smell of smoke and screams. It appears that we are under attack!";        }
    else if (y == 2)
    {
        std::cout << "You grab you weapon and stand near the door. Eventually the knocking stops, but you hear loud voices saying 'Man, the gates!'. You run to the village gates to help.";
    }
    else if (y == 3)
    {
        std::cout << " Thousands of the rival kingdom troops flood invade the kingdom, slaughter relentlessly, and without discretion. You summon all your strength to attack. ";
    }
    if (x ==2) {
        std::cout << " You attack with the flames of wrath, burning enemies at your will and sending them fleeing.";
    }
    else if (x == 1)
    {
        std::cout << " You attack with all your might a great sweep with an axes. Enemies fly at your sweep and strength.";
    }
    else if (x == 3)
    {
        std::cout << " You shoot arrows by the dozens, felling enemies effortlessly and with grace.";
    }
    else
    {
        std::cout << "Please choose a valid option!";
    }

    std::cout << " As you slay enemies at your will, a towering general with monstrous posture approaches you from the shadows. With one stroke, dozens of friendly troops are sent flying and evaporate into mist. The strength is unimaginable. What do you do? ";

    std::cout << "1)Run to regroup with your comrades. \n 2) Attack with all your might \n 3) Bargain with the demigod\n\n";
    std::cin >> a;
    if (a == 1) {
        std::cout << "You move to regroup with comrades. But its too late, the demigod thrust his axe into the ground, and create a rift that swallow you and the kingdom whole, without mercy and without hope. The end. ";
    }
    else if (a ==2 ) {
        std::cout << "You attack with all your strength, but it is useless. The demigod point at you and instantly your are consumed by the darkness. The end. ";
    }
    else if (a == 3)
    {
        std::cout << "You bargain with the demigod.  He tell you to submit to his will and be granted authority. You agree, partially. To be continued...";
    }
    return 0;
}