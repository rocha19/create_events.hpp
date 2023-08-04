#ifndef EVENTS_HPP
#define EVENTS_HPP

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Events
{
private:
    struct Event
    {
        std::string title;
        std::string date;
        std::string description;
    };

    std::vector<Event> eventsData;

    void saveToFile(const std::string &filename) const;

public:
    Events();

    typedef Events EventData;

    void addEvent(const std::string &title, const std::string &date, const std::string &description);

    std::string printEvents() const;

    bool updateEvent(const std::string &title, const std::string &newTitle,
                     const std::string &newDate, const std::string &newDescription);

    bool deleteEvent(const std::string &title);
};

#endif // EVENTS_HPP
