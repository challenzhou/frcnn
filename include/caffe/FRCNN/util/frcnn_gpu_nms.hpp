#ifndef CAFFE_FRCNN_GPU_NMS_HPP_
#define CAFFE_FRCNN_GPU_NMS_HPP_

namespace caffe {

namespace Frcnn {

void gpu_nms(int* keep_out, int* num_out, const float* boxes_dev, int boxes_num,
          int boxes_dim, float nms_overlap_thresh, int device_id=-1);
// fyk:params is all cpu memory var, boxes_dim should be 5(x1,y1,x2,y2,confidence)
void _nms(int* keep_out, int* num_out, const float* boxes_host, int boxes_num,
          int boxes_dim, float nms_overlap_thresh, int device_id=0);
// fyk:params is all cpu memory var, boxes_dim should be 4(x1,y1,x2,y2)
void _overlaps(float* overlaps,const float* boxes,const float* query_boxes, int n, int k, int device_id=0);
} // namespace frcnn

} // namespace caffe
#endif // CAFFE_FRCNN_UTILS_HPP_

