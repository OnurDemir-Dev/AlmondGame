#include "MainGameLevel.h"

std::vector<glm::vec3> vertices = 
{
    glm::vec3(-0.5f,  0.5f, 0.0f),  // Top-left
    glm::vec3(0.5f,  0.5f, 0.0f),  // Top-right
    glm::vec3(-0.5f, -0.5f, 0.0f),  // Bottom-left
    glm::vec3(0.5f, -0.5f, 0.0f)   // Bottom-right
};

std::vector<GLuint> indices =
{
    0, 1, 2,  // Triangle 1: Top-left, Top-right, Bottom-left
    1, 3, 2   // Triangle 2: Top-right, Bottom-right, Bottom-left
};

MainGameLevel::MainGameLevel()
{
}

MainGameLevel::~MainGameLevel()
{
}

void MainGameLevel::Start()
{
    Object* deneme = CreateObject<Object>("Deneme Obje");
    denemeMesh = new Mesh(vertices, indices);
}

void MainGameLevel::Update(float deltaTime)
{
    std::cout << deltaTime << std::endl;
}

void MainGameLevel::Draw()
{
    denemeMesh->Draw();
}
