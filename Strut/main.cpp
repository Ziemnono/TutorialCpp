#include <iostream>
#include <string>

enum class MonsterType{
    OGRE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME,
};

struct Monster{
    MonsterType type;
    std::string name;
    int life_point;
};

std::string getMonsterType(Monster monster){
    if (monster.type==MonsterType::OGRE)
            return "Ogre";
    if (monster.type==MonsterType::DRAGON)
            return "Dragon";
    if (monster.type==MonsterType::ORC)
            return "Orc";
    if (monster.type==MonsterType::GIANT_SPIDER)
            return "Giant Spider";
    if (monster.type==MonsterType::SLIME)
            return "Slime";
    else {
        return "Unknown";
    }
}

void printMonster(Monster monster){
    std::cout<<"This "<<getMonsterType(monster) << " is named " << monster.name << " and has " << monster.life_point << " health \n";
}
int main()
{
    Monster slime{MonsterType::SLIME, "Blurp", 23};
    Monster ogre{MonsterType::OGRE, "Torg", 145};
    printMonster(ogre);
    printMonster(slime);
    return 0;
}
