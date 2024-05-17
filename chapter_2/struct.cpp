#include <iostream>
#include <list>
#include <vector>
using namespace std;

enum class LidarStatus {
    running,
    stop,
    shutdown,
};

struct LidarDataType {
    LidarStatus type;
    int channel_num;
    double distance[128];
    double intensity[128];
};

int main() {
    int a;
    LidarDataType lidar_data_1;
    return 0;
}

int max(int num1, int num2);