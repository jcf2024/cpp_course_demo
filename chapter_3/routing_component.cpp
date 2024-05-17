#include <iostream>
#include <string>
#include <vector>

class Component {
public:
    virtual bool Init() = 0;
    virtual bool Process() = 0;
    std::string component_name_;

private:
};

class PerceptionComponent : public Component {
public:
    bool Init() {
        std::cout << "PerceptionComponent initialized." << std::endl;
        return true;
    }
    bool Process () {
        std::cout << "PerceptionComponent processed." << std::endl;
        return true;
    }

private:
};
class PlanningComponent  : public Component {
public:
    bool Init() {
        std::cout << "PlanningComponent initialized." << std::endl;
        return true;
    }
    bool Process () {
        std::cout << "PlanningComponent processed." << std::endl;
        return true;
    }

private:
};
class RoutingComponent  : public Component {
public:
    RoutingComponent() {
        std::cout << " component constructor." << std::endl;
    }
    ~RoutingComponent() {
        std::cout << " component destructor." << std::endl;
    }
    RoutingComponent(const RoutingComponent& other) = delete;

    bool Init() {
        std::cout << "RoutingComponent initialized." << std::endl;
        return true;
    }

    bool Process () {
        std::cout << "RoutingComponent processed." << std::endl;
        return true;
    }

private:
};

int main() {
    RoutingComponent routing_component;
    PerceptionComponent perception_component;
    PlanningComponent planning_component;
    std::vector<Component*> components;
    components.push_back(&routing_component);
    components.push_back(&perception_component);
    components.push_back(&planning_component);


    for (auto& component : components) {
        component->Init();
    }

    for (auto& component : components) {
        component->Process();
    }

    return 0;
}