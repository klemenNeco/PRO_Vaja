//#include <QCoreApplication>
#include "glm/glm.hpp"
#include "glm/gtx/string_cast.hpp"
#include <iostream>
#include <cmath>

/*glm::vec4 equation(float n){
    glm::vec4 col1 = glm::vec4(0.5, 0.7, 0.9, 1);
    glm::mat4 mat = glm::mat4(glm::vec4(glm::cos(M_PI/6), 0, 0, 0), glm::vec4(0, 1, glm::sin(M_PI/6), 0),
                              glm::vec4(0, -glm::sin(M_PI/6), glm::cos(M_PI/6), 0), glm::vec4(0, 0, 0, 1));

    glm::vec4 tmp = n * col1;

    return tmp * mat;
}

float equation2(float n) {
    //left side
    glm::vec4 col1 = glm::vec4(2*n, 4*n, 8*n, 16*n);

    glm::mat4 tmp_mat1 = glm::mat4(0.0f);
    for (int i = 1; i <= pow(n, 4); ++i) {
        tmp_mat1 += glm::mat4(glm::vec4(0.5, 0, 0, 0), glm::vec4(0, i, 0, 0),
                              glm::vec4(i, 0, pow(i, 2), 0), glm::vec4(0, 0, 0, 1));
    }
    glm::vec4 left_res = col1 * tmp_mat1;


    //right side
    glm::mat4 tmp_mat2 = glm::mat4(0.0f);
    for (int i = 1; i <= pow(n, 2); ++i) {
        tmp_mat2 += glm::inverse(glm::mat4(glm::vec4(1, 0, 0, 0), glm::vec4(0, i, 0, 0),
                                           glm::vec4(i, pow(i, 4), pow(i, 2), 0), glm::vec4(0, 0, 0, 1)));
    }

    glm::mat4 tmp_mat3 = glm::mat4(glm::vec4(0, 0, 0, 0), glm::vec4(1, 1, 0, 1),
                                   glm::vec4(0, 0, 1, 0), glm::vec4(0, 0, 0, 1));
    for (int i = 1; i <= n; ++i) {
        tmp_mat3 = tmp_mat3 * glm::mat4(glm::vec4(0, 0, 0, 0), glm::vec4(i, i, 0, i),
                                        glm::vec4(0, 0, pow(i, 2), 0), glm::vec4(0, 0, 0, pow(i, 3)));;
    }

    glm::mat4 tmp_mat4 = tmp_mat3 + tmp_mat2;
    glm::vec4 col2 = glm::vec4(pow(n, 3), pow(n, 2), n, 1);

    glm::vec4 right_res = tmp_mat4 * col2;

    return glm::dot(left_res, right_res);
}*/

int main(int argc, char *argv[])
{
    float n = 0;
    std::cout << "Vnesite stevilo: ";
    std::cin >> n;
    std::cout << std::endl;

    /*//first equation
    glm::vec4 result = equation(n);
    std::cout << glm::to_string(result) << std::endl;

    //second equation
    float result2 = equation2(n);
    std::cout << result2 << std::endl;

    //QCoreApplication a(argc, argv);
    //return a.exec();
    */
}
