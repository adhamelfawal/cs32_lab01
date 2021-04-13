#include "demogData.h"
#include <sstream>

/* print county demographic data */
std::ostream& operator<<(std::ostream &out, const demogData &DD) {
    out << "County Demographics Info: " << DD.getName() << ", " << DD.state;
    out << " total population: " << DD.totalPopulation2014;
    //consider re-writing with getters....
    out << "\nPopulation info: \n(\% over 65): " << DD.popOver65;
    out <<  " Count: " << (DD.popOver65 * DD.totalPopulation2014 * .01);
    out << "\n(\% under 18): " << DD.popUnder18;
    out <<  " Count: " << (DD.popUnder18 * DD.totalPopulation2014 * .01);
    out << "\n(\% under 5): " << DD.popUnder5;
    out <<  " Count: " << (DD.popUnder5 * DD.totalPopulation2014 * .01);
    out << "\nEducation info: \n(\% Bachelor degree or more): " << DD.undergrad;
    out << " Count: "<< (DD.undergrad * DD.totalPopulation2014 * .01);
    out << "\n(\% high school or more): "<< DD.highschool;
    out <<  " Count: " << (DD.highschool * DD.totalPopulation2014 * .01);
    return out;
}
