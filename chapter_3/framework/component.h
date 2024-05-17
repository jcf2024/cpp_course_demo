#ifndef CHAPTER_3_COMPONENT_H
#define CHAPTER_3_COMPONENT_H

#include <string>

class Component {
public:
    virtual bool Init() = 0;
    virtual bool Process() = 0;
    virtual void LoadConfig() {  };
    const std::string& GetConfigFilePath() const { return config_file_path_; }

    std::string component_name_;
    std::string config_file_path_;
    bool is_shutdown_;

private:
};

#endif //CHAPTER_3_COMPONENT_H
