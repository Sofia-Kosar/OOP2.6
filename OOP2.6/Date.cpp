#include "Date.h"
#include <iostream>

using namespace std;
Date::Triad::Triad(int firstValue, int secondValue, int thirdValue)
    : first(firstValue), second(secondValue), third(thirdValue) {}

Date::Triad::Triad() : first(0), second(0), third(0) {}

Date::Triad::Triad(const Triad& other)
    : first(other.first), second(other.second), third(other.third) {}

Date::Triad& Date::Triad::operator=(const Triad& other) {
    if (this != &other) {
        first = other.first;
        second = other.second;
        third = other.third;
    }
    return *this;
}

int Date::Triad::getFirst() const {
    return first;
}

int Date::Triad::getSecond() const {
    return second;
}

int Date::Triad::getThird() const {
    return third;
}

void Date::Triad::setFirst(int value) {
    first = value;
}

void Date::Triad::setSecond(int value) {
    second = value;
}

void Date::Triad::setThird(int value) {
    third = value;
}

istream& operator>>(istream& is, Date::Triad& triad) {
    cout << "Enter first value: ";
    is >> triad.first;
    cout << "Enter second value: ";
    is >> triad.second;
    cout << "Enter third value: ";
    is >> triad.third;
    return is;
}

ostream& operator<<(ostream& os, const Date::Triad& triad) {
    os << triad.first << "." << triad.second << "." << triad.third;
    return os;
}

Date::Triad::operator string() const {
    stringstream ss;
    ss << first << "." << second << "." << third;
    return ss.str();
}

Date::Triad& Date::Triad::operator++() {
    ++first;
    ++second;
    ++third;
    return *this;
}

Date::Triad Date::Triad::operator++(int) {
    Triad temp(*this);
    ++(*this);
    return temp;
}

Date::Triad& Date::Triad::operator--() {
    --first;
    --second;
    --third;
    return *this;
}

Date::Triad Date::Triad::operator--(int) {
    Triad temp(*this);
    --(*this);
    return temp;
}

bool operator<(const Date::Triad& lhs, const Date::Triad& rhs) {
    if (lhs.first != rhs.first) return lhs.first < rhs.first;
    if (lhs.second != rhs.second) return lhs.second < rhs.second;
    return lhs.third < rhs.third;
}

bool operator==(const Date::Triad& lhs, const Date::Triad& rhs) {
    return lhs.first == rhs.first && lhs.second == rhs.second && lhs.third == rhs.third;
}

bool operator>(const Date::Triad& lhs, const Date::Triad& rhs) {
    return !(lhs <= rhs);
}

bool operator!=(const Date::Triad& lhs, const Date::Triad& rhs) {
    return !(lhs == rhs);
}

bool operator<=(const Date::Triad& lhs, const Date::Triad& rhs) {
    return (lhs < rhs) || (lhs == rhs);
}

bool operator>=(const Date::Triad& lhs, const Date::Triad& rhs) {
    return !(lhs < rhs);
}

// Implementations for Date class

Date::Date(const Triad& tValue) : t(tValue) {}

Date::Date() : t() {}

Date::Date(const Date& other) : t(other.t) {}

Date& Date::operator=(const Date& other) {
    if (this != &other) {
        t = other.t;
    }
    return *this;
}

Date::Triad Date::getTriad() const {
    return t;
}

void Date::setTriad(const Triad& tValue) {
    t = tValue;
}

Date::operator string() const {
    return string(t);
}

istream& operator>>(istream& is, Date& date) {
    return is >> date.t;
}

ostream& operator<<(ostream& os, const Date& date) {
    os << date.t;
    return os;
}

bool operator<(const Date& lhs, const Date& rhs) {
    return lhs.t < rhs.t;
}

bool operator==(const Date& lhs, const Date& rhs) {
    return lhs.t == rhs.t;
}

bool operator>(const Date& lhs, const Date& rhs) {
    return lhs.t > rhs.t;
}

bool operator!=(const Date& lhs, const Date& rhs) {
    return lhs.t != rhs.t;
}

bool operator<=(const Date& lhs, const Date& rhs) {
    return lhs.t <= rhs.t;
}

bool operator>=(const Date& lhs, const Date& rhs) {
    return lhs.t >= rhs.t;
}