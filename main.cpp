#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    cout << "Tesztelés, hogy működik-e!";
    Mat img = imread("/Users/szaboattila/Desktop/csokis_keksz.jpg");
    imshow("IMAGE", img);
    waitKey(0);
    return 0;
}
