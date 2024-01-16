#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    
    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            std::cout << "Invalid date. Setting date to default values." << std::endl;
            day = 1;
            month = 1;
            year = 2000;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }


    int getYear() const {
        return year;
    }

    bool isValidDate(int d, int m, int y) const {
        if (y >= 0 && m >= 1 && m <= 12) {
            int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
                daysInMonth[2] = 29; 
            }
            return (d >= 1 && d <= daysInMonth[m]);
        }
        return false;
    }
};

int main(){

    Date myDate(10, 5, 2022);

    std::cout << "Initial Date Information:" << std::endl;
    std::cout << "Day: " << myDate.getDay() << std::endl;
    std::cout << "Month: " << myDate.getMonth() << std::endl;
    std::cout << "Year: " << myDate.getYear() << std::endl;

    myDate.setDate(30, 2, 2023);

    std::cout << "Updated Date Information:" << std::endl;
    std::cout << "Day: " << myDate.getDay() << std::endl;
    std::cout << "Month: " << myDate.getMonth() << std::endl;
    std::cout << "Year: " << myDate.getYear() << std::endl;

    return 0;
}

