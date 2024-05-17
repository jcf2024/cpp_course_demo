#include <iostream>

#include "planning_component.h"

namespace planning {

bool PlanningComponent::Init() {
    std::cout << "PlanningComponent initialized." << std::endl;
    return true;
}

bool PlanningComponent::Process () {
    std::cout << "PlanningComponent processed." << std::endl;
    return true;
}

} // namespace planning