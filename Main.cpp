#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    std::cout << "OpenCV Version: " << CV_VERSION << std::endl;

    // Create a simple 300x300 blue image
    cv::Mat image(300, 300, CV_8UC3, cv::Scalar(255, 0, 0));

    cv::imshow("OpenCV C++ Test (Press any key)", image);
    cv::waitKey(0);
    return 0;
}