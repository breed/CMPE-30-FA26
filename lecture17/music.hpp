#pragma

#include <iostream>
#include <stdexcept>

class Song {
private:
    int year;
    std::string title;
    std::string artist;
public:
    Song(std::string title, std::string artist, int year);
    ~Song();

    void setYear(int year) {
        if (year < 1960 || year > 2026) {
            throw std::out_of_range("good songs between 1960 & 2026");
        }
        this->year = year;
    }

    // the following is for experimental purposes only.
    // defining operators like this makes your coworkers (and your future self) hate you

    std::string operator ++() const {
        return title;
    }

    std::string operator ++(int) const;

    int operator ~() const;

    std::string to_string() const;
};
