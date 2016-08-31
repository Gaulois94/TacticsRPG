#include "UnitStats.h"

UnitDatabase* UnitDatabase::m_singleton = NULL;

UnitDatabase::UnitDatabase(Database* db) : m_db(db)
{}

UnitDatabase::~UnitDatabase()
{}

void UnitDatabase::initSingleton(Database* db)
{
	m_singleton = new UnitDatabase(db);
}

UnitDatabase* UnitDatabase::getSingleton()
{
	return UnitDatabase::m_singleton;
}

std::string UnitDatabase::getClassName(UnitClass uc)
{
	switch(uc)
	{
		case DIVINITY:
			return "Divine";

		case DEVIL:
			return "Devil";

		case HUMAN:
			return "Human";

		case NEUTRAL:
			return "Neutral";

		case DIVIN_BEAST:
			return "Divine Beast";

		case DEMONIAC_BEAST:
			return "Demoniac Beast";

		case DRAGONS:
			return "Dragons";

		default:
			return "";
	}
}

std::string UnitDatabase::getUnitTypeString(UnitType ut)
{
	switch(ut)
	{
		case ABERRATION:
			return "Aberration";
			
		case ARDOR:
			return "Ardor";
			
		case ASIAN_DRAGON:
			return "Asian dragon";
			
		case BOWMAN:
			return "Bowman";
			
		case CELESTIAL:
			return "Celestial";
			
		case CHARITY:
			return "Charity";
			
		case CHASTITY:
			return "Chastity";
			
		case CHIMERA:
			return "Chimera";
			
		case COMPASSION:
			return "Compassion";
			
		case DARK_DRAGON:
			return "Dark dragon";
			
		case DEMONIAC_ANIMAL:
			return "Demoniac animal";
			
		case DEMONIAC_PLANT:
			return "Demoniac plant";
			
		case DIVINE_PLANT:
			return "Divine plant";
			
		case ELDER_DRAGON:
			return "Elder dragon";
			
		case ELEMENTARY:
			return "Elementary";
			
		case ELEMENTARY_DRAGON:
			return "Elementary dragon";
			
		case ENVY:
			return "Envy";
			
		case FAIRY:
			return "Fairy";
			
		case FIGHT_DRAGON:
			return "Fight dragon";
			
		case FLYING:
			return "Flying";
			
		case GARGOYLE:
			return "Gargoyle";
			
		case GIANT:
			return "Giant";
			
		case GLUTTONY:
			return "Gluttony";
			
		case GOBELIN:
			return "Gobelin";
			
		case GOLEM:
			return "Golem";
			
		case GREED:
			return "Greed";
			
		case HAMMERMAN:
			return "Hammerman";
			
		case HARPY:
			return "Harpy";
			
		case HUMILITY:
			return "Humility";
			
		case LANCEMAN:
			return "Lanceman";
			
		case LUST:
			return "Lust";
			
		case MAGIC_ANIMAL:
			return "Magic animal";
			
		case MAGICIAN:
			return "Magician";
			
		case MARTIAL:
			return "Martial";
			
		case METALLIC_DRAGON:
			return "Metallic dragon";
			
		case ORC:
			return "Orc";
			
		case PARSIMONY:
			return "Parsimony";
			
		case PRIDE:
			return "Pride";
			
		case REPTILIAN:
			return "Reptilian";
			
		case SANGUINARY_BEAST:
			return "Sanguinary beast";
			
		case SERENITY:
			return "Serenity";
			
		case SLOTH:
			return "Sloth";
			
		case SPECTRUM:
			return "Spectrum";
			
		case SPIRIT:
			return "Spirit";
			
		case SWORDMAN:
			return "Swordman";
			
		case UNDEAD:
			return "Undead";
			
		case UNDEAD_DRAGON:
			return "Undead dragon";
			
		case WHIPMAN:
			return "Whipman";
			
		case WRATH:
			return "Wrath";
	}
	return "";
}

UnitType UnitDatabase::getUnitType(const std::string& unitType)
{
	if(unitType == "Aberration")
		return ABERRATION;

	else if(unitType == "Ardor")
		return ARDOR;

	else if(unitType == "Asian dragon")
		return ASIAN_DRAGON;

	else if(unitType == "Bowman")
		return BOWMAN;

	else if(unitType == "Celestial")
		return CELESTIAL;

	else if(unitType == "Charity")
		return CHARITY;

	else if(unitType == "Chastity")
		return CHASTITY;

	else if(unitType == "Chimera")
		return CHIMERA;

	else if(unitType == "Compassion")
		return COMPASSION;

	else if(unitType == "Dark dragon")
		return DARK_DRAGON;

	else if(unitType == "Demoniac animal")
		return DEMONIAC_ANIMAL;

	else if(unitType == "Demoniac plant")
		return DEMONIAC_PLANT;

	else if(unitType == "Divine plant")
		return DIVINE_PLANT;

	else if(unitType == "Elder dragon")
		return ELDER_DRAGON;

	else if(unitType == "Elementary")
		return ELEMENTARY;

	else if(unitType == "Elementary dragon")
		return ELEMENTARY_DRAGON;

	else if(unitType == "Envy")
		return ENVY;

	else if(unitType == "Fairy")
		return FAIRY;

	else if(unitType == "Fight dragon")
		return FIGHT_DRAGON;

	else if(unitType == "Flying")
		return FLYING;

	else if(unitType == "Gargoyle")
		return GARGOYLE;

	else if(unitType == "Giant")
		return GIANT;

	else if(unitType == "Gluttony")
		return GLUTTONY;

	else if(unitType == "Gobelin")
		return GOBELIN;

	else if(unitType == "Golem")
		return GOLEM;

	else if(unitType == "Greed")
		return GREED;

	else if(unitType == "Hammerman")
		return HAMMERMAN;

	else if(unitType == "Harpy")
		return HARPY;

	else if(unitType == "Humility")
		return HUMILITY;

	else if(unitType == "Lanceman")
		return LANCEMAN;

	else if(unitType == "Lust")
		return LUST;

	else if(unitType == "Magic animal")
		return MAGIC_ANIMAL;

	else if(unitType == "Magician")
		return MAGICIAN;

	else if(unitType == "Martial")
		return MARTIAL;

	else if(unitType == "Metallic dragon")
		return METALLIC_DRAGON;

	else if(unitType == "Orc")
		return ORC;

	else if(unitType == "Parsimony")
		return PARSIMONY;

	else if(unitType == "Pride")
		return PRIDE;

	else if(unitType == "Reptilian")
		return REPTILIAN;

	else if(unitType == "Sanguinary Beast")
		return SANGUINARY_BEAST;

	else if(unitType == "Serenity")
		return SERENITY;

	else if(unitType == "Sloth")
		return SLOTH;

	else if(unitType == "Spectrum")
		return SPECTRUM;

	else if(unitType == "Spirit")
		return SPIRIT;

	else if(unitType == "Swordman")
		return SWORDMAN;

	else if(unitType == "Undead")
		return UNDEAD;

	else if(unitType == "Undead dragon")
		return UNDEAD_DRAGON;

	else if(unitType == "Whipman")
		return WHIPMAN;

	else if(unitType == "Wrath")
		return WRATH;

	return SWORDMAN;
}

std::map<UnitType, std::vector<UnitStats>> UnitDatabase::getClassDatabase(UnitClass uc)
{
	ClassDataCallback cdc;
	char* errMsg;

	//Execute "SELECT name FROM Type WHERE className = "UnitClass""
	sqlite3_exec(m_db->getDatabase(), ("SELECT name FROM Type WHERE className = \"" + getClassName(uc) + "\"").c_str(), UnitDatabase::getClassDatabaseCallback, &cdc, &errMsg);
	sqlite3_free(errMsg);

	return cdc.data;
}


int UnitDatabase::getClassDatabaseCallback(void* data, int nbColumn, char** argv, char** columnName)
{
	ClassDataCallback* classData = (ClassDataCallback*)(data);
	char* errMsg;

	for(int i=0; i < nbColumn; i++)
	{
		classData->data.insert(std::pair<UnitType, std::vector<UnitStats>>(getUnitType(argv[i]), std::vector<UnitStats>()));
		sqlite3_exec(classData->db->getDatabase(), ("SELECT * FROM Unit WHERE typeName = \"" + std::string(argv[i]) + "\"").c_str(), UnitDatabase::getUnitDataCallback, &(classData->data.find(getUnitType(argv[i]))->second), &errMsg);
		sqlite3_free(errMsg);
	}

	return 0;
}

int UnitDatabase::getUnitDataCallback(void* data, int nbColumn, char** argv, char** columnName)
{
	std::vector<UnitStats>* m = (std::vector<UnitStats>*)(data);
	UnitStats us;

	for(int i=0; i < nbColumn; i++)
	{
		if(!strcmp(columnName[i], "name"))
			us.name = argv[i];

		else if(!strcmp(columnName[i], "winged"))
		{
			if(!strcmp(argv[i], "True"))
				us.winged = true;
			else
				us.winged = false;
		}

		else if(!strcmp(columnName[i], "level"))
			us.level = atoi(argv[i]);

		else if(!strcmp(columnName[i], "id"))
			us.id = atoi(argv[i]);

		else if(!strcmp(columnName[i], "price"))
			us.goldCost = atoi(argv[i]);

		else if(!strcmp(columnName[i], "occupation"))
			us.occupation = atoi(argv[i]);

		else if(!strcmp(columnName[i], "modelPath"))
			us.modelPath = argv[i];

		else if(!strcmp(columnName[i], "pv"))
			us.life = atoi(argv[i]);

		else if(!strcmp(columnName[i], "mp"))
			us.mana = atoi(argv[i]);

		else if(!strcmp(columnName[i], "ad"))
			us.attack = atoi(argv[i]);

		else if(!strcmp(columnName[i], "ap"))
			us.speAttack = atoi(argv[i]);

		else if(!strcmp(columnName[i], "pr"))
			us.defense = atoi(argv[i]);

		else if(!strcmp(columnName[i], "mr"))
			us.speDefense = atoi(argv[i]);

		else if(!strcmp(columnName[i], "moving"))
			us.movableCost = atoi(argv[i]);

		else if(!strcmp(columnName[i], "attackSpeed"))
			us.nbAttackStat = atoi(argv[i]);

		else if(!strcmp(columnName[i], "moveStats"))
			us.nbTourStat = atoi(argv[i]);

		else if(!strcmp(columnName[i], "description"))
			us.description = argv[i];
	}
	m->push_back(us);

	return 0;
}

std::vector<int> UnitDatabase::getChildrenID(int id)
{
	char* request = (char*)malloc(10*sizeof(char));
	sprintf(request, "%d", id);
	char* errMsg=NULL;
	std::vector<int> array;

	sqlite3_exec(m_db->getDatabase(), ("SELECT child FROM UnitTree WHERE parent = \"" + std::string(request) + "\"").c_str(), UnitDatabase::getChildrenCallback, &array, &errMsg);
	sqlite3_free(errMsg);

	return array;	
}

int UnitDatabase::getChildrenCallback(void* data, int nbColumn, char** argv, char** columnName)
{
	std::vector<int>* array = (std::vector<int>*)(data);	
	array->push_back(atoi(argv[0]));
	return 0;
}

UnitTree::UnitTree(UnitClass uc) : m_uc(uc)
{
	m_data = UnitDatabase::getSingleton()->getClassDatabase(uc);

	for(std::map<UnitType, std::vector<UnitStats>>::const_iterator it = m_data.begin(); it != m_data.end(); it++)
		for(uint32_t i=0; i < it->second.size(); i++)
			m_childTree.insert(std::pair<int, std::vector<int>>(it->second[i].id, UnitDatabase::getSingleton()->getChildrenID(it->second[i].id)));
}

std::vector<const UnitStats*> UnitTree::getChildren(const std::string& name) const
{
	for(std::map<UnitType, std::vector<UnitStats>>::const_iterator it = m_data.begin(); it != m_data.end(); it++)
	{
		for(uint32_t i=0; i < it->second.size(); i++)
			if(it->second[i].name == name)
				return getChildren(it->second[i].id);
	}
	return std::vector<const UnitStats*>();
}

std::vector<const UnitStats*> UnitTree::getChildren(int id) const
{
	std::vector<const UnitStats*> array;
	const std::vector<int>* treeID = &(m_childTree.find(id)->second);

	for(std::map<UnitType, std::vector<UnitStats>>::const_iterator it = m_data.begin(); it != m_data.end(); it++)
		for(uint32_t i=0; i < it->second.size(); i++)
			for(uint32_t j=0; j < treeID->size(); j++)
				if((*treeID)[j] == it->second[i].id)
					array.push_back(&(it->second[i]));

	return array;
}
