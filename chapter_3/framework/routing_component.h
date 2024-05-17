#ifndef CHAPTER_3_ROUTING_COMPONENT_H
#define CHAPTER_3_ROUTING_COMPONENT_H

#include "component.h"

namespace routing {
class AStarRouter {};

class RoutingComponent final : public Component {
public:
    RoutingComponent();
    ~RoutingComponent();
    RoutingComponent(const RoutingComponent& other) = delete;

    bool Init() override;
    bool Process () override;

private:
    AStarRouter router_;
};

}
#endif //CHAPTER_3_ROUTING_COMPONENT_H
