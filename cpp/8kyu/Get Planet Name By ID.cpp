#include <string>

std::string get_planet_name(int id)
{
    std::string name;
    switch (id) {
    case 1: return name = "Mercury";
    case 2: return name = "Venus";
    case 3: return name = "Earth";
    case 4: return name = "Mars";
    case 5: return name = "Jupiter";
    case 6: return name = "Saturn";
    case 7: return name = "Uranus";
    case 8: return name = "Neptune";
    }
  
}