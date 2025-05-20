#include "transport.h"

using namespace std;

transport::transport() {
    cout << "Викликано конструктор транспорту." << endl;
}

void transport::setType_fuel(const string& type_fuel) {
    _type_fuel = type_fuel;
}

void transport::setMark_transport(const string& mark_transport) {
    _mark_transport = mark_transport;
}

void transport::setColor_transport(const string& color_transport) {
    _color_transport = color_transport;
}

void transport::createTransport() {
    cout << "Марка автомобiля: " << _mark_transport 
         << ", Тип пального: " << _type_fuel 
         << ", Колiр транспорту: " << _color_transport << endl;
}

transport::~transport() {
    cout << "Викликано деструктор транспорту." << endl;
}

road_transport::road_transport() {
    cout << "Викликано конструктор наземного транспорту." << endl;
    cout << "\nНаземний транспорт (позашляховик)" << endl;
    cout << "**********************************" << endl;
    setMark_transport("Lexus LX 600");
    setType_fuel("Бензин");
    setColor_transport("Бiлий\n");
    createTransport();
}

road_transport::~road_transport() {
    cout << "Викликано деструктор наземного транспорту." << endl;
}

water_transport::water_transport() {
    cout << "Викликано конструктор водного транспорту." << endl;
    cout << "\nВодний транспорт (Гiдроцикл)" << endl;
    cout << "********************************" << endl;
    setMark_transport("Taiga Orca");
    setType_fuel("Електро");
    setColor_transport("Чорний\n");
    createTransport();
}

water_transport::~water_transport() {
    cout << "Викликано деструктор водного транспорту." << endl;
}

air_transport::air_transport() {
    cout << "Викликано конструктор повiтряного транспорту." << endl;
    cout << "\nПовiтряний транспорт (лiтак)" << endl;
    cout << "********************************" << endl;
    setType_fuel("Авіаційне пальне");
    setMark_transport("AirJet");
    setColor_transport("Бiлий\n");
    createTransport();
}

air_transport::~air_transport() {
    cout << "Викликано деструктор повiтряного транспорту." << endl;
}

hybrid_vehicle::hybrid_vehicle() {
    cout << "Викликано конструктор гiбридного транспорту." << endl;
    cout << "\nГiбридний транспорт" << endl;
    cout << "********************************" << endl;
    setMark_transport("HybridMaster");
    setType_fuel("Електро+Бензин");
    setColor_transport("Металiк");
    createTransport();
}


hybrid_vehicle::~hybrid_vehicle() {
    cout << "\nВикликано деструктор гiбридного транспорту." << endl;
}
