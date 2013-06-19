#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>

int main(int, char**) {
    cv::VideoCapture vcap;
    cv::Mat image;

    const std::string videoStreamAddress = "/tmp/capture.mjpg";

    //open the video stream and make sure it's opened
    if(!vcap.open(videoStreamAddress)) {
        std::cout << "Error opening video stream or file" << std::endl;
        return -1;
    }else{
	std::cout << "Successfully opened url" << std::endl;
    }

    for(;;) {
        if(!vcap.read(image)) {
            std::cout << "No frame" << std::endl;
            cv::waitKey();
        }else{
	    std::cout << "Read one image" << std::endl;
	}
        cv::imshow("Output Window", image);
        if(cv::waitKey(1) >= 0) break;
    }   
}
