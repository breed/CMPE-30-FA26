#include <iostream>
#include <memory>
#include <print>

struct Node {
    std::string s;
    std::unique_ptr<Node> next;
};

void print_list(Node *node) {
    std::print("List is: ");

    while (node) {
        std::print(" {}", node->s);
        node = node->next.get();
    }
    std::println();
}

int main() {
    std::unique_ptr<Node> head;
    print_list(head.get());
    std::string str;
    while (std::cin >> str) {
        auto node = std::make_unique<Node>();
        node->s = str;
        node->next = std::move(head);
        head = std::move(node);
        print_list(head.get());
    }
}
