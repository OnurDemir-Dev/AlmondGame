#include "engine/Engine.h"
#include "Levels/MainGameLevel.h"

int main()
{
    //Just change Level class if you created any Level class
    MainGameLevel* startLevel = new MainGameLevel();

    Engine* engine = new Engine();
    engine->StartEngine(startLevel);
}