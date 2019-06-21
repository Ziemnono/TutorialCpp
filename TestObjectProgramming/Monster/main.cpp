#include <string>
#include <iostream>
class Monster
{
public:
    enum MonsterType
    {
        DRAGON,
        GOBLIN,
        OGRE,
        ORC,
        SKELETON,
        TROLL,
        VAMPIRE,
        ZOMBIE,
        MAX_MONSTER_TYPES
    };

private:

    MonsterType m_type;
    std::string m_name;
    std::string m_roar;
    int m_hitPoints;

public:
    Monster(MonsterType type, std::string name, std::string roar, int hitPoints)
        : m_type(type), m_name(name), m_roar(roar), m_hitPoints(hitPoints)
    {

    }
    std::string getTypeString() const
    {
        switch (m_type)
        {
        case DRAGON: return "dragon";
        case GOBLIN: return "goblin";
        case OGRE: return "ogre";
        case ORC: return "orc";
        case SKELETON: return "skeleton";
        case TROLL: return "troll";
        case VAMPIRE: return "vampire";
        case ZOMBIE: return "zombie";
        }

        return "???";
    }
    void print() const{
        std::cout<< m_name << " the "<<getTypeString()<<" has "<<m_hitPoints<< " hit points and says "<< m_roar<<std::endl;
    }
};

int main()
{
    Monster skele(Monster::SKELETON, "Bones", "*rattle*", 4);
    skele.print();
    return 0;
}
