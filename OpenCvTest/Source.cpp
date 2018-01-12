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
//	// задаём высоту и ширину картинки
//	int height = 620;
//	int width = 440;
//	//зададим название окна
//	char name[15] = "Hello World";
//	// задаём точку для вывода текста
//	CvPoint pt = cvPoint(height / 4, width / 2);
//	// Создаёи 8-битную, 3-канальную картинку
//	IplImage* hw = cvCreateImage(cvSize(height, width), 8, 3);
//	// заливаем картинку чёрным цветом
//	cvSet(hw, cvScalar(0, 0, 0));
//	// инициализация шрифта
//	CvFont font;
//	cvInitFont(&font, CV_FONT_HERSHEY_COMPLEX, 1.0, 1.0, 0, 1, CV_AA);
//	// используя шрифт выводим на картинку текст
//	cvPutText(hw, "OpenCV Step By Step", pt, &font, CV_RGB(150, 0, 150));
//
//	// создаём окошко
//	cvNamedWindow(name, CV_WINDOW_AUTOSIZE);
//	// показываем картинку в созданном окне
//	cvShowImage(name, hw);
//	// ждём нажатия клавиши
//	// если другое значение то ждем столько сколько указано и минуем на другую строчку, как Sleep
//	cvWaitKey(0);
//
//	// освобождаем ресурсы
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
//	// имя картинки задаётся первым параметром
//	/*const char* filename;
//
//	if (argc == 2)
//		filename = argv[1];
//	else
//		filename = "Image0.jpg";*/
//
//	char filename[] = "cat.jpg";
//
//	// получаем картинку
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
//	// клонируем картинку 
//	src = cvCloneImage(image);
//
//	printf("[i] image: %s\n", filename);
//	assert(src != 0);
//
//	// окно для отображения картинки
//	cvNamedWindow("original", CV_WINDOW_AUTOSIZE);
//
//	// показываем картинку
//	cvShowImage("original", image);
//
//	// выводим в консоль информацию о картинке
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
//	// ждём нажатия клавиши
//	cvWaitKey(0);
//
//	// освобождаем ресурсы
//	cvReleaseImage(&image);
//	cvReleaseImage(&src);
//	// удаляем окно
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
//	// имя файла задется первым параметром
//	char filename[] = "car.avi";
//	char windowName[] = "original";
//
//	printf("[i] file: %s\n", filename);
//
//	// окно для отображения картинки
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//
//	// получаем информацию о видео файле
//	CvCapture* capture = cvCreateFileCapture(filename);
//
//	while (true)
//	{
//		// получаем следующий кадр
//		frame = cvQueryFrame(capture);
//
//		if (!frame)
//			break;
//
//		// здесь можно вставить
//		// процедуру обработки
//
//		// показываем кадр 
//		cvShowImage(windowName, frame);
//
//		char c = cvWaitKey(35);
//		if (c == 27)
//			break;
//	}
//
//	// освобождаем ресурсы
//	cvReleaseCapture(&capture);
//	// удаляем окно
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
//// функция-обработчик ползунка - 
//// перематывает на нужный кадр
//void myTrackbarCallBack(int pos)
//{
//	cvSetCaptureProperty(capture, CV_CAP_PROP_FRAME_COUNT, pos);
//}
//
//int main(int argc, char* argv[])
//{
//	// имя файла задается первым
//	char filename[] = "car.avi";
//	char windowName[] = "original";
//
//	printf("[i] file: %s\n", filename);
//
//	// окно для отображения картинки
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//
//	// получаем информацию о видео-файле
//	capture = cvCreateFileCapture(filename);
//
//	// получаем число кадров 
//	double framescount = cvGetCaptureProperty(capture, CV_CAP_PROP_FRAME_COUNT);
//	printf("[i] frame count: %0.f\n", framescount);
//	int frames = (int)framescount;
//
//	int currentPosition = 0;
//
//	if (frames != 0)
//		// показываем ползунок
//		cvCreateTrackbar("Position", windowName, &currentPosition, frames, myTrackbarCallBack);
//
//	while (true)
//	{
//		// получаем следующий кадр
//		frame = cvQueryFrame(capture);
//
//		if (!frame)
//			break;
//
//		// здесь можно вставить
//		// процедуру обработки
//
//		// показываем кадр
//		cvShowImage(windowName, frame);
//
//		char c = cvWaitKey(33);
//
//		if (c == 27)
//			break;
//	}
//
//	// освобождаем ресурсы
//	cvReleaseCapture(&capture);
//	// удаляем окно
//	cvDestroyWindow(windowName);
//	return 0;
//}
////--------------------------------------

////-------------------------------------- работа с камерой enter фотка

////-------------------------------------- работа с камерой enter видео

//#include <cv.h>
//#include <highgui.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//IplImage* image = 0;
//IplImage* src = 0;
//
//// рисуем указатель
//void drawTarget(IplImage* img, int x, int y, int radius)
//{
//	cvCircle(img, cvPoint(x, y), radius, CV_RGB(250, 0, 0), 1, 8);
//	cvLine(img, cvPoint(x - radius / 2, y - radius / 2), cvPoint(x + radius / 2, y + radius / 2), CV_RGB(250, 0, 0), 1, 8);
//	cvLine(img, cvPoint(x - radius / 2, y + radius / 2), cvPoint(x + radius / 2, y - radius / 2), CV_RGB(250, 0, 0), 1, 8);
//}
//
//// обработчик событий от мышки
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
//	// имя картинки задется первым параметром
//	char filename[] = "cat.jpg";
//	char windowName[] = "original";
//
//	// получаем картинку
//	image = cvLoadImage(filename, 1);
//	// клонируем картинкку
//	src = cvCloneImage(image);
//
//	printf("[i] image: %s\n", filename);
//	assert(src != 0);
//
//	// окно для отображения картинки
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//
//	// вешаем обработчик мыши
//	cvSetMouseCallback(windowName, myMouseCallBack, (void*)image);
//
//	while (true)
//	{
//		// показываем картинку
//		cvCopy(image, src);
//		cvShowImage(windowName, src);
//
//		char c = cvWaitKey(33);
//		if (c == 27)
//			break;
//	}
//
//	// освобождаем ресурсы 
//	cvReleaseImage(&image);
//	cvReleaseImage(&src);
//	// удаляем окно
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
//	// имя картинки задается первым параметром
//	char filename[] = "cat.jpg";
//	char windowName[] = "orginal";
//	char smoothWindow[] = "smooth";
//
//	// получаем картинку
//	image = cvLoadImage(filename, 1);
//	// клонируем картинку
//	dst = cvCloneImage(image);
//
//	printf("[i] image: %s\n", filename);
//	assert(image != 0);
//
//	// окно для отображения картинки
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//	cvNamedWindow(smoothWindow, CV_WINDOW_AUTOSIZE);
//
//	// сглаживаем исходную картинку
//
//	/*CV_BLUR_NO_SCALE — суммирование без масштабирования size1 x size2
//	CV_BLUR — суммирование с масштабированием 1/size1 x size2
//	CV_GAUSSIAN — свёртка изображения с гауссовым ядром size1 x size2
//	CV_MEDIAN — поиск среднего значения в окрестности size1 x size2
//	CV_BILATERAL — двусторонняя фильтрация окрестности size1 x size2 с цветовой сигмой = sigma1 и пространственной сигмой = sigma2 
//	(для квадратной окрестности, т.е. size1 = size2)*/
//
//	cvSmooth(image, dst, CV_BLUR_NO_SCALE, 3, 3);
//
//	// показываем картинку
//	cvShowImage(windowName, image);
//	cvShowImage(smoothWindow, dst);
//
//	// ждем нажатия клавиши
//	cvWaitKey(0);
//
//	// освобождаем ресурсы
//	cvReleaseImage(&image);
//	cvReleaseImage(&dst);
//	// удаляем окно
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
//// исходная
//IplImage* image = 0;
//IplImage* dst[4];
//
//int main()
//{
//	// имя картинки задется первым
//	char filename[] = "cat.jpg";
//	char windowName[] = "original";
//
//	// получаем картинку
//	image = cvLoadImage(filename, 1);
//
//	int i = 0;
//
//	printf("[i] image: %s\n", filename);
//	assert(image != 0);
//
//	// создание уменьшенных картинок (разный тип интерполяции)
//	for (int i = 0; i < 4; i++)
//	{
//		dst[i] = cvCreateImage(cvSize(image->width / 3, image->height / 3), image->depth, image->nChannels);
//		cvResize(image, dst[i], i);
//	}
//
//	// окно для отображения картинки
//	cvNamedWindow(windowName, 1);
//	cvShowImage(windowName, image);
//
//	// показываем результат
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
//	//ждем нажатия на клавишу
//	cvWaitKey(0);
//
//	// освобождаем память
//	cvReleaseImage(&image);
//	for (int i = 0; i < 4; i++)
//		cvReleaseImage(&dst[i]);
//	// удвляем окна
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
//	// имя картинки задется первым
//	const char* filename = argc >= 2 ? argv[1] : "cat.jpg";
//
//	//char filename[] = "cat.jpg";
//	char windowName[] = "original";
//	char ROIName[] = "ROI";
//
//	// получаем картинку
//	image = cvLoadImage(filename, 1);
//
//	printf("[i] image: %s\n", filename);
//	assert(image != 0);
//
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//	cvNamedWindow(ROIName, CV_WINDOW_AUTOSIZE);
//
//	// задем ROI
//	int x = argc >= 3 ? atoi(argv[2]) : 40;
//	int y = argc >= 4 ? atoi(argv[3]) : 20;
//	int width = argc >= 5 ? atoi(argv[4]) : 100;
//	int height = argc >= 6 ? atoi(argv[5]) : 100;
//	// добавочная величина
//	int add = argc >= 7 ? atoi(argv[6]) : 200;
//
//	cvShowImage(windowName, image);
//	// устанавливаем ROI
//	cvSetImageROI(image, cvRect(x, y, width, height));
//	cvAddS(image, cvScalar(add), image);
//	// сбрасываем ROI
//	cvResetImageROI(image);
//	// показываем изображение
//	cvShowImage(ROIName, image);
//
//	// ждем нажатия клавиши
//	cvWaitKey(0);
//
//	// освобождаем ресурсы
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
//	// имя картинки задаётся первым параметром
//	const char* filename = argc >= 2 ? argv[1] : "cat.jpg";
//	// получаем картинку
//	image = cvLoadImage(filename, 1);
//
//	printf("[i] image: %s\n", filename);
//	assert(image != 0);
//
//	cvNamedWindow("origianl", CV_WINDOW_AUTOSIZE);
//	cvNamedWindow("ROI", CV_WINDOW_AUTOSIZE);
//
//	// задаём ROI
//	int x = argc >= 3 ? atoi(argv[2]) : 120;
//	int y = argc >= 4 ? atoi(argv[3]) : 120;
//
//	const char* filename2 = argc >= 5 ? argv[4] : "eye.jpg";
//	// добавочное изображение
//	// устанавливаем ROI
//	int rx = 95;
//	int ry = 195;
//	int rdx = 45;
//	cvSetImageROI(image, cvRect(rx, ry, rdx, rdx));
//	cvSaveImage("eye.jpg", image);
//
//	src = cvLoadImage(filename2, 1);
//	assert(src != 0);
//
//	// размер ROI
//	int width = src->width;
//	int height = src->height;
//
//	cvShowImage("origianl", image);
//	// устанавливаем ROI
//	cvSetImageROI(image, cvRect(x, y, width, height));
//
//	// обнулим изображение
//	cvZero(image);
//
//	// копируем изображение
//	cvCopy(src, image);
//
//	// сбрасываем ROI
//	cvResetImageROI(image);
//	// показываем изображение
//	cvShowImage("ROI", image);
//
//	// ждём нажатия клавиши
//	cvWaitKey(0);
//
//	// освобождаем ресурсы
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
//	// имя картинки задется первым параметром
//	const char* filename = argc >= 2 ? argv[1] : "cat.jpg";
//	char windowName[] = "original";
//	char noiseWindow[] = "noise";
//
//	// получаем картинку
//	image = cvLoadImage(filename, 1);
//	assert(image != 0);
//
//	// клонируем объект
//	dst = cvCloneImage(image);
//
//	int count = 0;
//
//	// окно для отображения картинки
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//	cvNamedWindow(noiseWindow, CV_WINDOW_AUTOSIZE);
//
//	// инициализация состояния 
//	CvRNG rng = cvRNG(0xffffffff);
//
//	// пробегаемся по всем пикселям изображения
//	for (int y = 0; y < dst->height; y++)
//	{
//		uchar* ptr = (uchar*)(dst->imageData + y * dst->widthStep);
//
//		for (int x = 0; x < dst->width; x++)
//		{
//			if (cvRandInt(&rng) % 100 >= 97)
//			{
//				// 3 канала
//				ptr[3 * x] = cvRandInt(&rng) % 255; // B
//				ptr[3 * x + 1] = cvRandInt(&rng) % 255; // G
//				ptr[3 * x + 2] = cvRandInt(&rng) % 255; // R
//				count++;
//
//				/*
//				// красные пиксели
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
//	// показываем картинку
//	cvShowImage(windowName, image);
//	cvShowImage(noiseWindow, dst);
//
//	// ждем нажатия клавиши
//	cvWaitKey(0);
//
//	// освободжаем ресурс
//	cvReleaseImage(&image);
//	cvReleaseImage(&dst);
//	// удаляем окна
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
//// функция-обработчик ползунка-
//// радиус ядра
//void myTrackBbarRadius(int pos) { radius = pos; }
//
//int iterations = 1;
//int iterations_max = 10;
//
////
//// функция-обработчик ползунка-
//// число итераций
//void myTrackBarIterations(int pos) { iterations = pos; }
//
//int main(int argc, char* argv[])
//{
//	// имя картинки задется первым параметром
//	const char* filename = argc == 2 ? argv[1] : "cat.jpg";
//	char windowName[] = "origin";
//	char erodeWindow[] = "erode";
//	char dilateWindow[] = "dilate";
//
//	// получаем картинку
//	image = cvLoadImage(filename, 1);
//	// клонируем объект
//	dst = cvCloneImage(image);
//	erode = cvCloneImage(image);
//	dilate = cvCloneImage(image);
//
//	printf("[i] image: %s\n", filename);
//	assert(image != 0);
//
//	//окно для отображения картинки
//	cvNamedWindow(windowName, CV_WINDOW_AUTOSIZE);
//	cvNamedWindow(erodeWindow, CV_WINDOW_AUTOSIZE);
//	cvNamedWindow(dilateWindow, CV_WINDOW_AUTOSIZE);
//
//	cvCreateTrackbar("Radius", windowName, &radius, radius_max, myTrackBbarRadius);
//	cvCreateTrackbar("Iteration", windowName, &iterations, iterations_max, myTrackBarIterations);
//
//	while (true)
//	{
//		// показываем картинку
//		cvShowImage(windowName, image);
//
//		// создаем ядро
//		IplConvKernel* Kern = cvCreateStructuringElementEx(radius * 2 + 1, radius * 2 + 1, radius, radius, CV_SHAPE_ELLIPSE);
//
//		// выполняем преобразование
//		cvErode(image, erode, Kern, iterations);
//		cvDilate(image, dilate, Kern, iterations);
//
//		// показываем результат
//		cvShowImage(erodeWindow, erode);
//		cvShowImage(dilateWindow, dilate);
//
//		// удаляем ядро
//		cvReleaseStructuringElement(&Kern);
//
//		char c = cvWaitKey(33);
//		if (c == 27)
//			break;
//	}
//
//	// освобождаем ресурсы
//	cvReleaseImage(&image);
//	cvReleaseImage(&dst);
//	cvReleaseImage(&erode);
//	cvReleaseImage(&dilate);
//	// удаляем окна
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