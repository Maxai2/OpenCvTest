//#include<opencv2/opencv.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//
////--------------------------------------
//int main()
//{
//	Mat img = imread("cat.jpg");
//	namedWindow("image", WINDOW_NORMAL);
//	imshow("image", img);
//	waitKey(0);
//	return 0;


////--------------------------------------
//	// ����� ������ � ������ ��������
//	int height = 620;
//	int width = 440;
//	//������� �������� ����
//	char name[15] = "Hello World";
//	// ����� ����� ��� ������ ������
//	CvPoint pt = cvPoint(height / 4, width / 2);
//	// ������ 8-������, 3-��������� ��������
//	IplImage* hw = cvCreateImage(cvSize(height, width), 8, 3);
//	// �������� �������� ������ ������
//	cvSet(hw, cvScalar(0, 0, 0));
//	// ������������� ������
//	CvFont font;
//	cvInitFont(&font, CV_FONT_HERSHEY_COMPLEX, 1.0, 1.0, 0, 1, CV_AA);
//	// ��������� ����� ������� �� �������� �����
//	cvPutText(hw, "OpenCV Step By Step", pt, &font, CV_RGB(150, 0, 150));
//
//	// ������ ������
//	cvNamedWindow(name, CV_WINDOW_AUTOSIZE);
//	// ���������� �������� � ��������� ����
//	cvShowImage(name, hw);
//	// ��� ������� �������
//	// ���� ������ �������� �� ���� ������� ������� ������� � ������ �� ������ �������, ��� Sleep
//	cvWaitKey(0);
//
//	// ����������� �������
//	cvReleaseImage(&hw);
//	cvDestroyWindow(name);
//	return 0;
//}
////--------------------------------------

//#include<opencv2/opencv.hpp>
//#include<iostream>
//#include<highgui.h>
//#include<cv.h>
//#include<stdlib.h>
//#include<stdio.h>
//
//IplImage* image = 0;
//IplImage* src = 0;
//
////--------------------------------------
//int main(int argc, char* argv[])
//{
//	// ��� �������� ������� ������ ����������
//	/*const char* filename;
//
//	if (argc == 2)
//		filename = argv[1];
//	else
//		filename = "Image0.jpg";*/
//
//	char filename[] = "cat.jpg";
//
//	// �������� ��������
//	/* 8bit, color or not */
//	//#define CV_LOAD_IMAGE_UNCHANGED  -1
//	/* 8bit, gray */
//	//#define CV_LOAD_IMAGE_GRAYSCALE   0
//	/* ?, color */
//	//#define CV_LOAD_IMAGE_COLOR       1
//	/* any depth, ? */
//	//#define CV_LOAD_IMAGE_ANYDEPTH    2
//	/* ?, any color */
//	//#define CV_LOAD_IMAGE_ANYCOLOR    4
//
//	image = cvLoadImage(filename, 1);
//
//	// ��������� �������� 
//	src = cvCloneImage(image);
//
//	printf("[i] image: %s\n", filename);
//	assert(src != 0);
//
//	// ���� ��� ����������� ��������
//	cvNamedWindow("original", CV_WINDOW_AUTOSIZE);
//
//	// ���������� ��������
//	cvShowImage("original", image);
//
//	// ������� � ������� ���������� � ��������
//
//	// OpenCV2.0\include\opencv\cxtypes.h
//	//typedef struct _IplImage
//	//{
//	//	int  nSize;             /* sizeof(IplImage) */
//	//	int  ID;                /* version (=0)*/
//	//	int  nChannels;         /* Most of OpenCV functions support 1,2,3 or 4 channels */
//	//	int  alphaChannel;      /* Ignored by OpenCV */
//	//	int  depth;             /* Pixel depth in bits: IPL_DEPTH_8U, IPL_DEPTH_8S, IPL_DEPTH_16S,
//	//							IPL_DEPTH_32S, IPL_DEPTH_32F and IPL_DEPTH_64F are supported.  */
//	//	char colorModel[4];     /* Ignored by OpenCV */
//	//	char channelSeq[4];     /* ditto */
//	//	int  dataOrder;         /* 0 - interleaved color channels, 1 - separate color channels.
//	//							cvCreateImage can only create interleaved images */
//	//	int  origin;            /* 0 - top-left origin,
//	//							1 - bottom-left origin (Windows bitmaps style).  */
//	//	int  align;             /* Alignment of image rows (4 or 8).
//	//							OpenCV ignores it and uses widthStep instead.    */
//	//	int  width;             /* Image width in pixels.                           */
//	//	int  height;            /* Image height in pixels.                          */
//	//	struct _IplROI *roi;    /* Image ROI. If NULL, the whole image is selected. */
//	//	struct _IplImage *maskROI;      /* Must be NULL. */
//	//	void  *imageId;                 /* "           " */
//	//	struct _IplTileInfo *tileInfo;  /* "           " */
//	//	int  imageSize;         /* Image data size in bytes
//	//							(==image->height*image->widthStep
//	//							in case of interleaved data)*/
//	//	char *imageData;        /* Pointer to aligned image data.         */
//	//	int  widthStep;         /* Size of aligned image row in bytes.    */
//	//	int  BorderMode[4];     /* Ignored by OpenCV.                     */
//	//	int  BorderConst[4];    /* Ditto.                                 */
//	//	char *imageDataOrigin;  /* Pointer to very origin of image data
//	//							(not necessarily aligned) -
//	//							needed for correct deallocation */
//	//}
//	//IplImage; 
//
//
//	printf("[i] channels:  %d\n", image->nChannels);
//	printf("[i] pixel depth: %d bits\n", image->depth);
//	printf("[i] width:       %d pixels\n", image->width);
//	printf("[i] height:      %d pixels\n", image->height);
//	printf("[i] image size:  %d bytes\n", image->imageSize);
//	printf("[i] width step:  %d bytes\n", image->widthStep);
//	printf("[i] %d", image->nSize);
//
//	// ��� ������� �������
//	cvWaitKey(0);
//
//	// ����������� �������
//	cvReleaseImage(&image);
//	cvReleaseImage(&src);
//	// ������� ����
//	cvDestroyWindow("original");
//	return 0;
//}
////--------------------------------------

//#include <cv.h>
//#include <highgui.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//IplImage* frame = 0;
//
//int main(int argc, char* argv[])
//{
//	// ��� ����� ������� ������ ����������
//	char filename[] = "car.avi";
//	char windowName[] = "original";
//
//	printf("[i] file: %s\n", filename);
//
//	// ���� ��� ����������� ��������
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//
//	// �������� ���������� � ����� �����
//	CvCapture* capture = cvCreateFileCapture(filename);
//
//	while (true)
//	{
//		// �������� ��������� ����
//		frame = cvQueryFrame(capture);
//
//		if (!frame)
//			break;
//
//		// ����� ����� ��������
//		// ��������� ���������
//
//		// ���������� ���� 
//		cvShowImage(windowName, frame);
//
//		char c = cvWaitKey(35);
//		if (c == 27)
//			break;
//	}
//
//	// ����������� �������
//	cvReleaseCapture(&capture);
//	// ������� ����
//	cvDestroyWindow(windowName);
//	return 0;
//}
////--------------------------------------

//#include <cv.h>
//#include <highgui.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//CvCapture* capture = 0;
//IplImage* frame = 0;
//
//// �������-���������� �������� - 
//// ������������ �� ������ ����
//void myTrackbarCallBack(int pos)
//{
//	cvSetCaptureProperty(capture, CV_CAP_PROP_FRAME_COUNT, pos);
//}
//
//int main(int argc, char* argv[])
//{
//	// ��� ����� �������� ������
//	char filename[] = "car.avi";
//	char windowName[] = "original";
//
//	printf("[i] file: %s\n", filename);
//
//	// ���� ��� ����������� ��������
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//
//	// �������� ���������� � �����-�����
//	capture = cvCreateFileCapture(filename);
//
//	// �������� ����� ������ 
//	double framescount = cvGetCaptureProperty(capture, CV_CAP_PROP_FRAME_COUNT);
//	printf("[i] frame count: %0.f\n", framescount);
//	int frames = (int)framescount;
//
//	int currentPosition = 0;
//
//	if (frames != 0)
//		// ���������� ��������
//		cvCreateTrackbar("Position", windowName, &currentPosition, frames, myTrackbarCallBack);
//
//	while (true)
//	{
//		// �������� ��������� ����
//		frame = cvQueryFrame(capture);
//
//		if (!frame)
//			break;
//
//		// ����� ����� ��������
//		// ��������� ���������
//
//		// ���������� ����
//		cvShowImage(windowName, frame);
//
//		char c = cvWaitKey(33);
//
//		if (c == 27)
//			break;
//	}
//
//	// ����������� �������
//	cvReleaseCapture(&capture);
//	// ������� ����
//	cvDestroyWindow(windowName);
//	return 0;
//}
////--------------------------------------

////-------------------------------------- ������ � ������� enter �����

////-------------------------------------- ������ � ������� enter �����

//#include <cv.h>
//#include <highgui.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//IplImage* image = 0;
//IplImage* src = 0;
//
//// ������ ���������
//void drawTarget(IplImage* img, int x, int y, int radius)
//{
//	cvCircle(img, cvPoint(x, y), radius, CV_RGB(250, 0, 0), 1, 8);
//	cvLine(img, cvPoint(x - radius / 2, y - radius / 2), cvPoint(x + radius / 2, y + radius / 2), CV_RGB(250, 0, 0), 1, 8);
//	cvLine(img, cvPoint(x - radius / 2, y + radius / 2), cvPoint(x + radius / 2, y - radius / 2), CV_RGB(250, 0, 0), 1, 8);
//}
//
//// ���������� ������� �� �����
//void myMouseCallBack(int event, int x, int y, int flags, void* param)
//{
//	IplImage* img = (IplImage*)param;
//
//	switch (event)
//	{
//		case CV_EVENT_MOUSEMOVE:
//			break;
//		case CV_EVENT_LBUTTONDOWN:
//			printf("%d x %d\n", x, y);
//			drawTarget(img, x, y, 10);
//			break;
//		case CV_EVENT_LBUTTONUP:
//			break;
//	}
//}
//
//int main(int argc, char* argv[])
//{
//	// ��� �������� ������� ������ ����������
//	char filename[] = "cat.jpg";
//	char windowName[] = "original";
//
//	// �������� ��������
//	image = cvLoadImage(filename, 1);
//	// ��������� ���������
//	src = cvCloneImage(image);
//
//	printf("[i] image: %s\n", filename);
//	assert(src != 0);
//
//	// ���� ��� ����������� ��������
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//
//	// ������ ���������� ����
//	cvSetMouseCallback(windowName, myMouseCallBack, (void*)image);
//
//	while (true)
//	{
//		// ���������� ��������
//		cvCopy(image, src);
//		cvShowImage(windowName, src);
//
//		char c = cvWaitKey(33);
//		if (c == 27)
//			break;
//	}
//
//	// ����������� ������� 
//	cvReleaseImage(&image);
//	cvReleaseImage(&src);
//	// ������� ����
//	cvDestroyWindow(windowName);
//	return 0;
//}

////--------------------------------------

//#include <cv.h>
//#include <highgui.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//IplImage* image = 0;
//IplImage* dst = 0;
//
//int main()
//{
//	// ��� �������� �������� ������ ����������
//	char filename[] = "cat.jpg";
//	char windowName[] = "orginal";
//	char smoothWindow[] = "smooth";
//
//	// �������� ��������
//	image = cvLoadImage(filename, 1);
//	// ��������� ��������
//	dst = cvCloneImage(image);
//
//	printf("[i] image: %s\n", filename);
//	assert(image != 0);
//
//	// ���� ��� ����������� ��������
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//	cvNamedWindow(smoothWindow, CV_WINDOW_AUTOSIZE);
//
//	// ���������� �������� ��������
//
//	/*CV_BLUR_NO_SCALE � ������������ ��� ��������������� size1 x size2
//	CV_BLUR � ������������ � ���������������� 1/size1 x size2
//	CV_GAUSSIAN � ������ ����������� � ��������� ����� size1 x size2
//	CV_MEDIAN � ����� �������� �������� � ����������� size1 x size2
//	CV_BILATERAL � ������������ ���������� ����������� size1 x size2 � �������� ������ = sigma1 � ���������������� ������ = sigma2 
//	(��� ���������� �����������, �.�. size1 = size2)*/
//
//	cvSmooth(image, dst, CV_BLUR_NO_SCALE, 3, 3);
//
//	// ���������� ��������
//	cvShowImage(windowName, image);
//	cvShowImage(smoothWindow, dst);
//
//	// ���� ������� �������
//	cvWaitKey(0);
//
//	// ����������� �������
//	cvReleaseImage(&image);
//	cvReleaseImage(&dst);
//	// ������� ����
//	cvDestroyWindow(windowName);
//	cvDestroyWindow(smoothWindow);
//
//	return 0;
//}

////--------------------------------------

//#include <cv.h>
//#include <highgui.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//// ��������
//IplImage* image = 0;
//IplImage* dst[4];
//
//int main()
//{
//	// ��� �������� ������� ������
//	char filename[] = "cat.jpg";
//	char windowName[] = "original";
//
//	// �������� ��������
//	image = cvLoadImage(filename, 1);
//
//	int i = 0;
//
//	printf("[i] image: %s\n", filename);
//	assert(image != 0);
//
//	// �������� ����������� �������� (������ ��� ������������)
//	for (int i = 0; i < 4; i++)
//	{
//		dst[i] = cvCreateImage(cvSize(image->width / 3, image->height / 3), image->depth, image->nChannels);
//		cvResize(image, dst[i], i);
//	}
//
//	// ���� ��� ����������� ��������
//	cvNamedWindow(windowName, 1);
//	cvShowImage(windowName, image);
//
//	// ���������� ���������
//	char buf[128];
//	for (int i = 0; i < 4; i++)
//	{
//		if (i == 0)
//		{
//			cvNamedWindow("0", CV_WINDOW_AUTOSIZE);
//			cvShowImage("0", dst[i]);
//		}
//		else
//		if (i == 1)
//		{
//			cvNamedWindow("1", CV_WINDOW_AUTOSIZE);
//			cvShowImage("1", dst[i]);
//		}
//		else
//		if (i == 2)
//		{
//			cvNamedWindow("2", CV_WINDOW_AUTOSIZE);
//			cvShowImage("2", dst[i]);
//		}
//		else
//		{
//			cvNamedWindow("3", CV_WINDOW_AUTOSIZE);
//			cvShowImage("3", dst[i]);
//		}
//
//	}
//
//	//���� ������� �� �������
//	cvWaitKey(0);
//
//	// ����������� ������
//	cvReleaseImage(&image);
//	for (int i = 0; i < 4; i++)
//		cvReleaseImage(&dst[i]);
//	// ������� ����
//	cvDestroyAllWindows();
//	return 0;
//}

////--------------------------------------

//#include <cv.h>
//#include <highgui.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//IplImage* image = 0;
//
//int main(int argc, const char* argv[])
//{
//	// ��� �������� ������� ������
//	const char* filename = argc >= 2 ? argv[1] : "cat.jpg";
//
//	//char filename[] = "cat.jpg";
//	char windowName[] = "original";
//	char ROIName[] = "ROI";
//
//	// �������� ��������
//	image = cvLoadImage(filename, 1);
//
//	printf("[i] image: %s\n", filename);
//	assert(image != 0);
//
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//	cvNamedWindow(ROIName, CV_WINDOW_AUTOSIZE);
//
//	// ����� ROI
//	int x = argc >= 3 ? atoi(argv[2]) : 40;
//	int y = argc >= 4 ? atoi(argv[3]) : 20;
//	int width = argc >= 5 ? atoi(argv[4]) : 100;
//	int height = argc >= 6 ? atoi(argv[5]) : 100;
//	// ���������� ��������
//	int add = argc >= 7 ? atoi(argv[6]) : 200;
//
//	cvShowImage(windowName, image);
//	// ������������� ROI
//	cvSetImageROI(image, cvRect(x, y, width, height));
//	cvAddS(image, cvScalar(add), image);
//	// ���������� ROI
//	cvResetImageROI(image);
//	// ���������� �����������
//	cvShowImage(ROIName, image);
//
//	// ���� ������� �������
//	cvWaitKey(0);
//
//	// ����������� �������
//	cvReleaseImage(&image);
//	cvDestroyAllWindows();
//	return 0;
//}

////--------------------------------------

//#include <cv.h>
//#include <highgui.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//IplImage* image = 0;
//IplImage* src = 0;
//
//int main(int argc, const char* argv[]) {
//	// ��� �������� ������� ������ ����������
//	const char* filename = argc >= 2 ? argv[1] : "cat.jpg";
//	// �������� ��������
//	image = cvLoadImage(filename, 1);
//
//	printf("[i] image: %s\n", filename);
//	assert(image != 0);
//
//	cvNamedWindow("origianl", CV_WINDOW_AUTOSIZE);
//	cvNamedWindow("ROI", CV_WINDOW_AUTOSIZE);
//
//	// ����� ROI
//	int x = argc >= 3 ? atoi(argv[2]) : 120;
//	int y = argc >= 4 ? atoi(argv[3]) : 120;
//
//	const char* filename2 = argc >= 5 ? argv[4] : "eye.jpg";
//	// ���������� �����������
//	// ������������� ROI
//	int rx = 95;
//	int ry = 195;
//	int rdx = 45;
//	cvSetImageROI(image, cvRect(rx, ry, rdx, rdx));
//	cvSaveImage("eye.jpg", image);
//
//	src = cvLoadImage(filename2, 1);
//	assert(src != 0);
//
//	// ������ ROI
//	int width = src->width;
//	int height = src->height;
//
//	cvShowImage("origianl", image);
//	// ������������� ROI
//	cvSetImageROI(image, cvRect(x, y, width, height));
//
//	// ������� �����������
//	cvZero(image);
//
//	// �������� �����������
//	cvCopy(src, image);
//
//	// ���������� ROI
//	cvResetImageROI(image);
//	// ���������� �����������
//	cvShowImage("ROI", image);
//
//	// ��� ������� �������
//	cvWaitKey(0);
//
//	// ����������� �������
//	cvReleaseImage(&image);
//	cvReleaseImage(&src);
//	cvDestroyAllWindows();
//	return 0;
//}

////--------------------------------------
//#include <cv.h>
//#include <highgui.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//IplImage* image = 0;
//IplImage* dst = 0;
//
//int main(int argc, char* argv[])
//{
//	// ��� �������� ������� ������ ����������
//	const char* filename = argc >= 2 ? argv[1] : "cat.jpg";
//	char windowName[] = "original";
//	char noiseWindow[] = "noise";
//
//	// �������� ��������
//	image = cvLoadImage(filename, 1);
//	assert(image != 0);
//
//	// ��������� ������
//	dst = cvCloneImage(image);
//
//	int count = 0;
//
//	// ���� ��� ����������� ��������
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//	cvNamedWindow(noiseWindow, CV_WINDOW_AUTOSIZE);
//
//	// ������������� ��������� 
//	CvRNG rng = cvRNG(0xffffffff);
//
//	// ����������� �� ���� �������� �����������
//	for (int y = 0; y < dst->height; y++)
//	{
//		uchar* ptr = (uchar*)(dst->imageData + y * dst->widthStep);
//
//		for (int x = 0; x < dst->width; x++)
//		{
//			if (cvRandInt(&rng) % 100 >= 97)
//			{
//				// 3 ������
//				ptr[3 * x] = cvRandInt(&rng) % 255; // B
//				ptr[3 * x + 1] = cvRandInt(&rng) % 255; // G
//				ptr[3 * x + 2] = cvRandInt(&rng) % 255; // R
//				count++;
//
//				/*
//				// ������� �������
//				ptr[3 * x] = 0;
//				ptr[3 * x + 1] = 0;
//				ptr[3 * x + 2] = 255;
//				*/
//			}
//		}
//	}
//
//	printf("[i] noise: %d (%.2f%c)\n", count, (float)count / (dst->height * dst->width) * 100, '%');
//
//	// ���������� ��������
//	cvShowImage(windowName, image);
//	cvShowImage(noiseWindow, dst);
//
//	// ���� ������� �������
//	cvWaitKey(0);
//
//	// ����������� ������
//	cvReleaseImage(&image);
//	cvReleaseImage(&dst);
//	// ������� ����
//	cvDestroyAllWindows();
//	return 0;
//}

////--------------------------------------

//#include <cv.h>
//#include <highgui.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//IplImage* image = 0;
//IplImage* dst = 0;
//
//IplImage* erode = 0;
//IplImage* dilate = 0;
//
//int radius = 1;
//int radius_max = 10;
//
////
//// �������-���������� ��������-
//// ������ ����
//void myTrackBbarRadius(int pos) { radius = pos; }
//
//int iterations = 1;
//int iterations_max = 10;
//
////
//// �������-���������� ��������-
//// ����� ��������
//void myTrackBarIterations(int pos) { iterations = pos; }
//
//int main(int argc, char* argv[])
//{
//	// ��� �������� ������� ������ ����������
//	const char* filename = argc == 2 ? argv[1] : "cat.jpg";
//	char windowName[] = "origin";
//	char erodeWindow[] = "erode";
//	char dilateWindow[] = "dilate";
//
//	// �������� ��������
//	image = cvLoadImage(filename, 1);
//	// ��������� ������
//	dst = cvCloneImage(image);
//	erode = cvCloneImage(image);
//	dilate = cvCloneImage(image);
//
//	printf("[i] image: %s\n", filename);
//	assert(image != 0);
//
//	//���� ��� ����������� ��������
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//	cvNamedWindow(erodeWindow, CV_WINDOW_AUTOSIZE);
//	cvNamedWindow(dilateWindow, CV_WINDOW_AUTOSIZE);
//
//	cvCreateTrackbar("Radius", windowName, &radius, radius_max, myTrackBbarRadius);
//	cvCreateTrackbar("Iteration", windowName, &iterations, iterations_max, myTrackBarIterations);
//
//	while (true)
//	{
//		// ���������� ��������
//		cvShowImage(windowName, image);
//
//		// ������� ����
//		IplConvKernel* Kern = cvCreateStructuringElementEx(radius * 2 + 1, radius * 2 + 1, radius, radius, CV_SHAPE_ELLIPSE);
//
//		// ��������� ��������������
//		cvErode(image, erode, Kern, iterations);
//		cvDilate(image, dilate, Kern, iterations);
//
//		// ���������� ���������
//		cvShowImage(erodeWindow, erode);
//		cvShowImage(dilateWindow, dilate);
//
//		// ������� ����
//		cvReleaseStructuringElement(&Kern);
//
//		char c = cvWaitKey(33);
//		if (c == 27)
//			break;
//	}
//
//	// ����������� �������
//	cvReleaseImage(&image);
//	cvReleaseImage(&dst);
//	cvReleaseImage(&erode);
//	cvReleaseImage(&dilate);
//	// ������� ����
//	cvDestroyAllWindows();
//	return 0;
//}

////--------------------------------------

#include <cv.h>
#include <highgui.h>
#include <stdlib.h>
#include <stdio.h>

IplImage* image = 0;
IplImage* dst = 0;

int radius = 1;
int radius_max = 10;


////--------------------------------------