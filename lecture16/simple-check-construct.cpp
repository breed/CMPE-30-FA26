#include <iostream>
#include <stdexcept>

class Song {
private:
    int year;
public:
    std::string title;
    std::string artist;
    Song(std::string title, std::string artist, int year): title(title),
                                                           artist(artist),
                                                           year(year) {
        setYear(year);
    }
    void setYear(int newYear) {
        if (newYear < 1960 || newYear > 2026) {
            throw std::out_of_range("good songs between 1960 & 2026");
        }
        year = newYear;
    }
    int getYear() { return year; }
};

int main() {
    Song s {"I love Rock and Roll", "Joan Jett", 1981};
    std::cout << s.title << " " << s.getYear() << std::endl;
}
