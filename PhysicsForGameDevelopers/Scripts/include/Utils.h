#ifndef _UTILS_H_
#define _UTILS_H_

#include <string>


#include <others/stb_image.h>
#include <iostream>
#include <vector>
#include <glm/gtc/type_ptr.hpp>

static std::string projectName = "PhysicsForGameDevelopers";
static std::wstring wProjectName = std::wstring(projectName.begin(), projectName.end());

struct Character{
    unsigned int TextureID;
    glm::ivec2 Bearing;
    glm::ivec2 Size;
    unsigned int Advance;
};

unsigned int LoadSkyboxTex(std::vector<std::string> skyboxTexs);


unsigned int loadImageGamma(const char * path, bool openGammaCorrection, bool flipOnLoad);

unsigned int loadImage(const char * path, bool flipOnLoad);

void replaceStringInPlace(std::string& subject, const std::string& search, const std::string& replace);

void getProjectFilePath(const char * projectRelativePath2File, std::string& outputPath);


#endif