#include "Engine.h"

Engine::Engine(std::string engine_Number, EngineType engine_type, int engine_horespower, int engine_torque)
:_engineNumber(engine_Number),_engineType(engine_type),_engineHorsepower(engine_horespower),_engineTorque(engine_torque)
{
}

std::ostream &operator<<(std::ostream &os, const Engine &rhs)
{
    std::string type;

    switch (static_cast<int>(rhs._engineType))
    {
    case 0:
        type = "ICT";
        break;
    case 1:
        type = "HYBRID";
        break;

    }
    os << "\n_engineNumber: " << rhs._engineNumber
      // << "\n_engineType: " << static_cast<int>(rhs._engineType) 
      << "\n_engineType: " <<type
       << "\n_engineHorsepower: " << rhs._engineHorsepower
       << "\n_engineTorque: " << rhs._engineTorque;
    return os;
}
