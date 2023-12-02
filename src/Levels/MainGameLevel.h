#ifndef MAINGAMELEVEL_H
#define MAINGAMELEVEL_H

#include "levels/Level.h"

class MainGameLevel : public Level
{
private:
    Mesh* denemeMesh;
public:
    MainGameLevel();
    ~MainGameLevel();

    virtual void Start() override;
    virtual void Update(float deltaTime) override;
    virtual void Draw() override;
};

#endif