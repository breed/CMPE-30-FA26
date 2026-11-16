#include <iostream>
#include <memory>
#include <print>

class Node {
public:
    std::string s;
    std::unique_ptr<Node> next;
    Node(std::string s, std::unique_ptr<Node> n): s(s), next(std::move(n)) {
        next->s;
        n->s;
    }
};


int main() {
    std::unique_ptr<Node> head;
    std::string str;
    while (std::cin >> str) {
        std::unique_ptr<Node> node = std::make_unique<Node>(str, std::move(head));
        head = std::move(node);
        // node -> 0
        // head -> unique_ptr2 
        std::cout << head->s << std::endl;
    }
}
