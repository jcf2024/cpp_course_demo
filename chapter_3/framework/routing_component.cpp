#include <iostream>

#include "routing_component.h"

namespace routing {

RoutingComponent::RoutingComponent() {
    std::cout << " component constructor." << std::endl;
}

RoutingComponent::~RoutingComponent() {
    std::cout << " component destructor." << std::endl;
}

bool RoutingComponent::Init() {
    std::cout << "RoutingComponent initialized." << std::endl;
    return true;
}

bool RoutingComponent::Process() {
    std::cout << "RoutingComponent processed." << std::endl;
    return true;
}

} // namespace routing