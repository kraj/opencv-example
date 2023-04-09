#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
using namespace cv;
std::string version = "2.0";
int main (int argc, char** argv )
{
    if ( argc != 2 )
    {
        std::cout << "DisplayImage: " << version << std::endl;
        std::cout << "usage: DisplayImage </path/to/Image>" << std::endl;
        return -1;
    }
    Mat image;
    image = imread( argv[1], IMREAD_COLOR );
    if ( !image.data )
    {
        std::cout << "No image data" << std::endl;
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);
    waitKey(0);
    return 0;
}
