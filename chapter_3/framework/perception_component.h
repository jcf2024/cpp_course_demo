#ifndef CHAPTER_3_PERCEPTION_COMPONENT_H
#define CHAPTER_3_PERCEPTION_COMPONENT_H

#include "component.h"

namespace perception {

class PerceptionComponent final : public Component {
public:
    bool Init() override;
    bool Process () override;
    void LoadConfig() override;
};

}

#endif //CHAPTER_3_PERCEPTION_COMPONENT_H
