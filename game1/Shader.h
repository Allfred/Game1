#ifndef SHADER_H
#define SHADER_H
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <GL/glew.h>; // ���������� glew ��� ����, ����� �������� ��� ����������� ������������ ����� OpenGL

using namespace  std;
class Shader
{
public:
	GLuint Program{};
	// ����������� ��������� � �������� ������
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
	// ������������� ���������
	void Use();
private:
	void checkCompileErrors(GLuint shader, std::string type);

};
#endif