#include "streamVideo.hpp"

#include <GL/glew.h>
#include <GL/glut.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

void streamVideo::render() {
    glClearColor(0.4, 0.4, 0.4, 0.4);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0, 0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

    glBegin(GL_TRIANGLES);
            glVertex3f(-0.4, 0.4, 0);
            glVertex3f(-0.4, -0.4, 0);
            glVertex3f(.4, 0, 0);
    glEnd();

    glFlush();
    changeInRender = false;
}