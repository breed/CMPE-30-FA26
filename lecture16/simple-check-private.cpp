#include <iostream>
#include <stdexcept>

struct Song {
private:
    int year;
public:
    std::string title;
    std::string artist;
    void setYear(int newYear) {
        if (newYear < 1960 || newYear > 2026) {
            throw std::out_of_range("good songs between 1960 & 2026");
        }
        year = newYear;
    }
};

int main() {
    Song s;
    s.title = "I love Rock and Roll";
    s.artist = "Joan Jett";
    s.setYear(81);
    std::cout << s.title << " " << s.year << std::endl;
}
