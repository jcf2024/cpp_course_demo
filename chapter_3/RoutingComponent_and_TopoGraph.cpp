#include <iostream>
#include <string>

class Reader {};

class Writer {};

class BigData {
public:
    // 200M
    int a[10000];
    double b[10000];
};

class Point {
public:
    Point() {
        x = 0.0;
        y = 0.0;
    }
    double x;
    double y;
};

class Edge {
public:
    Point start;
    Point end;
};

class TopoGraph {
public:
    TopoGraph() = default;
    TopoGraph(const TopoGraph& another) {
        edge = another.edge;
        std::cout << "Topo Graph copy constructor." << std::endl;
    }
    TopoGraph& operator=(const TopoGraph& other) {
        if (&other != this) {
            edge = other.edge;
            std::cout << "Topo Graph assign operator." << std::endl;
            return *this;
        }
        std::cout << "You should assign you to yourself." << std::endl;
        return *this;
    }
//    Node node;
    Edge edge;
    BigData* big_data;
};

class RoutingComponent {
public:
    RoutingComponent() {
        std::cout << "RoutingComponent constructor." << std::endl;
    }
    ~RoutingComponent() {
        std::cout << "RoutingComponent destructor." << std::endl;
    }
    RoutingComponent(const std::string& name) {
        name_ = name;
    }
    RoutingComponent(const RoutingComponent& other) = delete;
    std::string name_;
    Reader reader_;
    Writer writer_;
    bool Process () {
        std::cout << name_ << " processes." << std::endl;
        return true;
    }
    void SetName(const std::string& name) {
        name_ = name;
    }
    std::string GetName() {
        return name_;
    }
};

int main() {
    // Define and initialize an object by another
    {
        std::string s;
        TopoGraph topo_graph_1;
        TopoGraph topo_graph_2(topo_graph_1); // 复制构造函数
        TopoGraph topo_graph_3;
        topo_graph_3 = topo_graph_1; // 赋值函数
    }

    {
        RoutingComponent component_1;
        RoutingComponent component_2;
        component_1.SetName("component_1");
        component_2.SetName("component_2");
        std::cout << "Component is:" << component_1.GetName() << std::endl;
        std::cout << "Component is:" << component_2.GetName() << std::endl;
    }
    return 0;
}
