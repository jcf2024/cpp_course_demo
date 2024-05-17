#include <set>
#include <memory>
#include <chrono>
#include <thread>

#include "perception_component.h"
#include "planning_component.h"
#include "routing_component.h"

using perception::PerceptionComponent;
using planning::PlanningComponent;
using routing::RoutingComponent;

int main() {
    auto perception_component = std::make_shared<PerceptionComponent>();
    auto planning_component = std::make_shared<PlanningComponent>();
    auto routing_component = std::make_shared<RoutingComponent>();

    std::set<std::shared_ptr<Component>> components;
    components.insert(perception_component);
    components.insert(planning_component);
    components.insert(routing_component);

    for (const auto& component : components) {
        component->Init();
    }

    while (true) {
        for (const auto& component : components) {
            component->Process();
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    return 0;
}