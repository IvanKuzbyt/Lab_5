#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
#include <string>

class transport {
    std::string _mark_transport;
    std::string _type_fuel;
    std::string _color_transport;

public:
    transport();
    virtual ~transport();

    void setType_fuel(const std::string& type_fuel);
    void setMark_transport(const std::string& mark_transport);
    void setColor_transport(const std::string& color_transport);

protected:
    void createTransport();
};

class road_transport : virtual public transport {
public:
    road_transport();
    virtual ~road_transport();
};

class water_transport : virtual public transport {
public:
    water_transport();
    virtual ~water_transport();
};

class air_transport : virtual public transport {
public:
    air_transport();
    virtual ~air_transport();
};

class hybrid_vehicle : public road_transport, public water_transport, public air_transport {
public:
    hybrid_vehicle();
    virtual ~hybrid_vehicle();
};

#endif
