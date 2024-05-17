#ifndef CHAPTER_3_PLANNING_COMPONENT_H
#define CHAPTER_3_PLANNING_COMPONENT_H

#include "component.h"

namespace planning {

class PlanningComponent final : public Component {
public:
    bool Init() override;
    bool Process () override;
};

}
#endif //CHAPTER_3_PLANNING_COMPONENT_H
