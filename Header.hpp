#ifndef CINEMA_HEADER_HPP
#define CINEMA_HEADER_HPP

using namespace std;
#include <iostream>
class Cinema
{
public:
	Cinema();
	~Cinema();

private:

};

Cinema::Cinema()
{
}

Cinema::~Cinema()
{
}

class Movie
{
public:
    Movie(const string& title);
    ~Movie();

    string getTitle() const;
    void setTitle(const string& title);

private:
    string title;
};

Movie::Movie(const string& title) : title(title)
{
}

Movie::~Movie()
{
}

string Movie::getTitle() const
{
    return title;
}

void Movie::setTitle(const string& title)
{
    this->title = title;
}

class Tciket
{
public:
	Tciket();
	~Tciket();

private:

};

Tciket::Tciket()
{
}

Tciket::~Tciket()
{
}
#endif
