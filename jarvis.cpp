#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <GL/glew.h>
#include <GL/glut.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

#include "constants.hpp"
#include "streamVideo.hpp"

using namespace glm;
streamVideo streamVid = streamVideo(100, 100, 500, 500, "Video Widget");

void drawWidgets() {
    streamVid.renderWidget();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - Creating a triangle");

    glutDisplayFunc(drawWidgets);
    glutMainLoop();
    return 0;
}