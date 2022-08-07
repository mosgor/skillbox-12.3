#include <iostream>
#include <cassert>

float travelTime(float distance, float speed){
    return distance/speed;
}

int main() {
    float speed, distance;
    std::cout << "Input transport speed: " << std::endl;
    std::cin >> speed;
    assert(speed > 0);
    std::cout << "Input travel distance: " << std::endl;
    std::cin >> distance;
    assert(distance > 0);
    std::cout << "Travel time is " << travelTime(distance, speed);
    return 0;
}
