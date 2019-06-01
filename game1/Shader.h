#ifndef SHADER_H
#define SHADER_H
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <GL/glew.h>; // Подключаем glew для того, чтобы получить все необходимые заголовочные файлы OpenGL

using namespace  std;
class Shader
{
public:
	GLuint Program{};
	// Конструктор считывает и собирает шейдер
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
	// Использование программы
	void Use();
private:
	void checkCompileErrors(GLuint shader, std::string type);

};
#endif