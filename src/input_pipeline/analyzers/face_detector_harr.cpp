#include "face_detector_harr.h"

std::vector<cv::Rect> FaceDetectorHarr::detect_faces(const cv::Mat &frame)
{
    std::vector<cv::Rect> faces;
    face_classifier.detectMultiScale(frame, faces, 1.1, 2, 0 | cv::CASCADE_SCALE_IMAGE | cv::CASCADE_FIND_BIGGEST_OBJECT, cv::Size(150, 150));
    return faces;
}
