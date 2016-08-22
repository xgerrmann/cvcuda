#include <iostream>

#include <vector>

using namespace std; // place before opencv2/gpu/gpu

#include "opencv2/opencv.hpp"
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/gpu/gpu.hpp"
#include "opencv2/imgcodecs.hpp"

using namespace cv;

int main (int argc, char* argv[])
{
    try
    {
		std::string fname = "image.png";
		cv::Mat src_host = imread(fname, IMREAD_GRAYSCALE);
		cv::cuda::GpuMat dst, src;
//        src.upload(src_host);
//        cv::gpu::threshold(src, dst, 128.0, 255.0, THRESH_BINARY);
//        cv::Mat result_host(dst);
//        cv::imshow("Result", result_host);
//        cv::waitKey();
    }
    catch(const cv::Exception& ex)
    {
        std::cout << "Error: " << ex.what() << std::endl;
    }
    return 0;
}
