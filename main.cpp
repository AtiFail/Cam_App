#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    cout << "Tesztelés, hogy működik-e!";
    Mat img = imread("/Users/szaboattila/Desktop/csokis_keksz.jpg", IMREAD_GRAYSCALE);
    imshow("Csokis keksz", img);
    imwrite("/Users/szaboattila/Desktop/csokis_keksz_szürke.jpg", img);
    waitKey(0);
    return 0;

    //kamera megnyitása

    //objektumfelismerés

    //objektumok megszámlálása, majd egy TXT-be menteni az adatokat
}
