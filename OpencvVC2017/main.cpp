//In this demo you will learn how to open image from same folder 
//and display its
#include<iostream>//c++ files
#include<opencv2\opencv.hpp>//opencv library function
#include<opencv2\imgproc\imgproc.hpp>//image processing

int main() {
	cv::Mat img = cv::imread("rose.jpg");//read image from the same folder
	//if you want to read image from other folder you shoud define full path
	//such as E:\\image\\imagename.extensioin example E:\image\rose.jpg
	cv::imshow("Image", img);//display image
	cv::waitKey();
	//now run this projects
	return 0;
}