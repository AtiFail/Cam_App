#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/objdetect.hpp>

using namespace std;
using namespace cv;

int main() {
    cout << "Tesztelés, hogy működik-e!";
    /*Mat img = imread("/Users/szaboattila/Desktop/benya.png");
    imshow("Face Detection", img);
    waitKey(0);
    return 0;*/

    //kamera megnyitása
    VideoCapture video(0);
    Mat img;
    while (true)
    {
        video.read(img);
        imshow("Video", img);
        waitKey(20);
    }
    //objektumfelismerés

    //objektumok megszámlálása, majd egy TXT-be menteni az adatokat
}
