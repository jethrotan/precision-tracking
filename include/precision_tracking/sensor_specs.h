#ifndef SENSOR_SPECS_H
#define SENSOR_SPECS_H

#include <Eigen/Eigen>

namespace precision_tracking {

void getSensorResolution(const Eigen::Vector3f& centroid_local_coordinates,
                         double* sensor_horizontal_res,
                         double* sensor_vertical_res);
} // namespace precision_tracking

#endif // SENSOR_SPECS_H
