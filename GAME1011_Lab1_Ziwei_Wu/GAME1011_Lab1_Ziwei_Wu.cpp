#include <iostream>
#include <string>

using namespace std;

class Achievement {
public:
    string Title, Description, ScoreValue;

    string setTitle()
    {
        cout << "Enter Achievement Title: ";
        getline(cin, Title);
        return Title;
    }
    string setDescription()
    {
        cout << "Enter Achievement Description: ";
        getline(cin, Description);
        return Description;
    }
    string setScoreValue()
    {
        cout << "Enter Achievement Score Value: ";
        getline(cin, ScoreValue);
        return ScoreValue;
    }
};


class Game {
public:
    string GameName, Publisher, Developer;
    Achievement Achievements[5][5];
    int x = 0;

    string setName()
    {
        cout << "Enter Game Name: ";
        getline(cin, GameName);
        return GameName;
    }
    string setPublisher()
    {
        cout << "Enter Game Publisher: ";
        getline(cin, Publisher);
        return Publisher;
    }
    string setDeveloper()
    {
        cout << "Enter Game Developer: ";
        getline(cin, Developer);
        return Developer;
    }
    void setAchievement()
    {
        if (sizeof(Achievements[x][0]) != 0)
        {
            Achievements[x][0].setTitle();
            Achievements[x][1].setDescription();
            Achievements[x][2].setScoreValue();
        }
        else
        {
            x++;
        }
    }
};

class Platform {
public:
    string PlatformName, Manufacturer;
    Game Games[5][5];
    int i = 0;

    string setName()
    {
        cout << "Enter Platform Name: ";
        getline(cin, PlatformName);
        return PlatformName;
    }
    string setManufacturer()
    {
        cout << "Enter Platform Manufacturer: ";
        getline(cin, Manufacturer);
        return Manufacturer;
    }
    void setGame()
    {
        if (sizeof(Games[i][0]) != 0)
        {
            Games[i][0].setName();
            Games[i][1].setPublisher();
            Games[i][2].setDeveloper();
            Games[i][3].setAchievement();
        }
        else
        {
            i++;
        }
    }
};

int main()
{
        Platform* pPlatform = nullptr;
        Game* pGame = nullptr;
        Achievement* pAchievement = nullptr;
        Platform Platform1;
        Game Game1;
        Achievement Achievement1;

        pPlatform = &Platform1;
        pGame = &Game1;
        pAchievement = &Achievement1;

        Platform1.setName();
        Platform1.setManufacturer();
        Game1.setName();
        Game1.setPublisher();
        Game1.setDeveloper();
        Achievement1.setTitle();
        Achievement1.setDescription();
        Achievement1.setScoreValue();
        cout << "A new " << pAchievement->Title << " belongs to a " << pGame->GameName << " which is played on a " << pPlatform->PlatformName << ".";

        return 0;
}