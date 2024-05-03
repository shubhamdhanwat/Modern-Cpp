#ifndef ENGINE_H
#define ENGINE_H

#include<iostream>
#include"engineType.h"

class Engine
{
private:
    std::string _engineNumber {"00"};
    EngineType _engineType {EngineType::HYBRID};
    int _engineHorsepower {0};
    int _engineTorque {0};


public:
    Engine() = default;
    Engine(const Engine&) = delete;
    Engine & operator=(const Engine &) = delete;
    Engine(Engine &&) = delete;
    Engine & operator=(Engine &&) = delete;
    ~Engine() = default;

    Engine(std::string engine_Number,EngineType engine_type, int engine_horespower, int engine_torque);

    std::string engineNumber() const { return _engineNumber; }

    EngineType engineType() const { return _engineType; }

    int engineHorsepower() const { return _engineHorsepower; }

    int engineTorque() const { return _engineTorque; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);

};

#endif // ENGINE_H
