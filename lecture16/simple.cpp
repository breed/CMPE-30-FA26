#include <iostream>

struct Song {
    std::string title;
    std::string artist;
    int year;
};

int main() {
    Song s;
    s.title = "I love Rock and Roll";
    s.artist = "Joan Jett";
    s.year = 1981;
    std::cout << s.title << " " << s.year << std::endl;
}
