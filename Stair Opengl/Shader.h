#ifndef SHADER_H
#define SHADER_H

#include <iostream>
#include <glad\glad.h>
#include <GLFW\glfw3.h>
#include <string>
#include <fstream>
#include <sstream>


#include <glm\glm\glm.hpp>
#include <glm\glm\gtc\matrix_transform.hpp>

class Shader
{

private:
	void checkCompileErrors(unsigned int shader, std::string type);
public:
	unsigned int ID;

	Shader(const char* vertexPath, const char* fragmentPath);

	void use();

	void setMat4(const char* name, glm::mat4 value);

	void setVec3(const char* name, glm::vec3 value);

	void setFloat(const char* name, float value);

	void setInt(const char* name, int value);



};

#endif // !SHADER_H




