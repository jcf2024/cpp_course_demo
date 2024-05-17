#include <iostream>

#include "perception_component.h"

namespace perception {

bool PerceptionComponent::Init() {
    std::cout << "PerceptionComponent initialized." << std::endl;
    return true;
}

bool PerceptionComponent::Process () {
    std::cout << "PerceptionComponent processed." << std::endl;
    return true;
}

void PerceptionComponent::LoadConfig() {

}

} // namespace perception
