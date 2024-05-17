#include <iostream>
using namespace std;

enum class CameraStatus {
    running,
    stop,
    recording
};

enum class LidarStatus : int64_t {
    running,
    stop,
    scanning
} lidar_status;

int main( ) {
    lidar_status = LidarStatus::scanning;
    int lidar_num = static_cast<int>(lidar_status);
    cout << "lidar number is: " << lidar_num;
    return 0;
}