// OpenCVAaron.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	Mat image;
	image = imread("C:\\Users\\acastano\\Desktop\\opencvAaron\\OpenCVAaron\\lena.jpg", CV_LOAD_IMAGE_COLOR);   // Read the file

	if (!image.data)                              // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}

	namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	imshow("Display window", image);                   // Show our image inside it.

	waitKey(0);                                          // Wait for a keystroke in the window
	return 0;

}

