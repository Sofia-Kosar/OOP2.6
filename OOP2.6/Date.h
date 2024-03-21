
#pragma once
#include <string>
#include <sstream>

using namespace std;
class Date {
public:
    class Triad {
    private:
        int first;
        int second;
        int third;

    public:
        Triad(int firstValue, int secondValue, int thirdValue);
        Triad();
        Triad(const Triad& other);
        Triad& operator=(const Triad& other);
        int getFirst() const;
        int getSecond() const;
        int getThird() const;
        void setFirst(int value);
        void setSecond(int value);
        void setThird(int value);
        friend istream& operator>>(istream& is, Triad& triad);
        friend ostream& operator<<(ostream& os, const Triad& triad);
        operator string() const;
        Triad& operator++();
        Triad operator++(int);
        Triad& operator--();
        Triad operator--(int);
        friend bool operator<(const Triad& lhs, const Triad& rhs);
        friend bool operator==(const Triad& lhs, const Triad& rhs);
        friend bool operator>(const Triad& lhs, const Triad& rhs);
        friend bool operator!=(const Triad& lhs, const Triad& rhs);
        friend bool operator<=(const Triad& lhs, const Triad& rhs);
        friend bool operator>=(const Triad& lhs, const Triad& rhs);
    };

    Triad t;

public:
    Date(const Triad& tValue);
    Date();
    Date(const Date& other);
    Date& operator=(const Date& other);
    Triad getTriad() const;
    void setTriad(const Triad& tValue);
    operator string() const;
    friend std::istream& operator>>(std::istream& is, Date& date);
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    friend bool operator<(const Date& lhs, const Date& rhs);
    friend bool operator==(const Date& lhs, const Date& rhs);
    friend bool operator>(const Date& lhs, const Date& rhs);
    friend bool operator!=(const Date& lhs, const Date& rhs);
    friend bool operator<=(const Date& lhs, const Date& rhs);
    friend bool operator>=(const Date& lhs, const Date& rhs);
};
