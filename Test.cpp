#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

int main() {
    // Hardcode the path to your image file
    const std::string image_path = "C:/Users/fired/Documents/CodingProjects/LilacsHome/birb.jpg";

    // Read the image file into a cv::Mat object
    cv::Mat img = cv::imread(image_path);

    // Verify that the image was successfully loaded
    if (img.empty()) {
        std::cerr << "Error: Could not open or find the image at: " << image_path << std::endl;
        return -1;
    }

    // Create a GUI window and show the image
    cv::imshow("Image Viewer", img);

    // Pause execution until a key is pressed (0 = wait indefinitely)
    cv::waitKey(0);

    // Destroy all created windows
    cv::destroyAllWindows();

    return 0;
}