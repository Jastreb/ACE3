/*

by commy2

Handles pressing the special vector keys.

*/
#include "script_component.hpp"

private "_fnc_setPFH";
_fnc_setPFH = {
    if (GVAR(holdKeyHandler) > -1) then {
        [GVAR(holdKeyHandler)] call CBA_fnc_removePerFrameHandler;
        GVAR(holdKeyHandler) = -1;
    };

    GVAR(currentMode) = _this;//
    GVAR(holdKeyHandler) = [FUNC(onKeyHold), 0, _this] call CBA_fnc_addPerFrameHandler;
};

switch (_this select 0) do {
    case ("azimuth"): {

        // prevent additinal modifier input if advanced mode it set, spaghetti
        if (GETGVAR(isKeyDownDistance,false) && {GETGVAR(currentMode,"") in ["relative_distance", "relative_height+length"]}) exitWith {};

        ["azimuth"] call FUNC(clearDisplay);

        GVAR(isKeyDownAzimuth) = true;
        [false] call FUNC(showP1);

        if (diag_tickTime < GVAR(keyDownTimeAzimuth) + 0.5) exitWith {
            "azimuth+inclination" call _fnc_setPFH;
        };

        GVAR(keyDownTimeAzimuth) = diag_tickTime;

        if (diag_tickTime > GVAR(keyDownTimeDistance) + 0.5) then {
            if !(GETGVAR(isKeyDownDistance,false)) then {
                ["distance"] call FUNC(clearDisplay);
                "azimuth" call _fnc_setPFH;
            };
        } else {
            if (GETGVAR(isKeyDownDistance,false)) then {
                "azimuth+distance" call _fnc_setPFH;
            } else {
                ["distance"] call FUNC(clearDisplay);
                "azimuth" call _fnc_setPFH;
            };
        };

    };

    case ("distance"): {

        // prevent additinal modifier input if advanced mode it set, spaghetti
        if (GETGVAR(isKeyDownAzimuth,false) && {GETGVAR(currentMode,"") in ["relative_azimuth+distance", "fall_of_short"]}) exitWith {};

        // toggle fos values
        if (GETGVAR(currentMode,"") == "fall_of_short") exitWith {
            [!(GETGVAR(FOSState,true))] call FUNC(showFallOfShort);
        };

        ["distance"] call FUNC(clearDisplay);

        GVAR(isKeyDownDistance) = true;
        [false] call FUNC(showP1);

        if (diag_tickTime < GVAR(keyDownTimeDistance) + 0.5) exitWith {
            "height+distance" call _fnc_setPFH;
        };

        GVAR(keyDownTimeDistance) = diag_tickTime;

        if (diag_tickTime > GVAR(keyDownTimeAzimuth) + 0.5) then {
            if !(GETGVAR(isKeyDownAzimuth,false)) then {
                ["azimuth"] call FUNC(clearDisplay);
                "distance" call _fnc_setPFH;
            };
        } else {
            if (GETGVAR(isKeyDownAzimuth,false)) then {
                "azimuth+distance" call _fnc_setPFH;
            } else {
                ["azimuth"] call FUNC(clearDisplay);
                "distance" call _fnc_setPFH;
            };
        };

    };
};