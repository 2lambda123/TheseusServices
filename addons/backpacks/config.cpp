#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(Backpack_AssaultExpanded_Black),
            QCLASS(Backpack_AssaultExpanded_Green),
            QCLASS(Backpack_AssaultExpanded_Tan),
            QCLASS(Backpack_Carryall_DarkBlack),
            QCLASS(Backpack_Kitbag_DarkBlack)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_vests"};
        author[]= {"Pomigit", "BadHabitz", "Jonpas"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
